inherit ROOM;
void create()
{
        set("short", "��ʬ��");
        set("long", @LONG
��Ǯ���Ѿ���ͨ�ٸ����ٸ��Խ�Ǯ���������Ϊ���Ӷ�����������Ǯ�����ڶ࣬
Ϊ�����켺��˫��Ѫ�ȡ��˴����Ƿ�����״��ʬ��Ĵ��á����˸ߵ���ͭ¯������ʢ��
һ�ɽ�ʬ�Ķ�������������������������
LONG
        );
        set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"jhuang",
]));
        setup();
}

void init()
{

	add_action("do_burn","burn");

}

int do_burn(string arg)
{
	object me;
	object tar;
	int score, pot;
	me = this_player();
	score = (int) me->query("combat_exp");
	pot = (int) me->query("potential");
	if( !arg || arg == "") 
                return notify_fail("����ɶ������\n");
	tar = present(arg, me);
	if( !tar) 
		return notify_fail("������û���ⶫ����\n");
	if( userp(tar))
		return notify_fail("�㲻���ջ�Ķ�����\n");
	if( tar->query("owner"))
		return notify_fail("�㲻���ն��Ķ�����\n");
	if( tar->is_corpse())		
	{
		me->set("combat_exp", (int) score + 1);
		me->set("potential", (int) pot + 1);
	}
	message_vision("$N��$nͶ������ͭ¯��$nת�ۻ�Ϊ�ҽ���\n", me, tar);
	tar->move(environment(me));
	destruct(tar);
	return 1;
}