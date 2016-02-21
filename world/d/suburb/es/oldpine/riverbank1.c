// Room: "/d/oldpine/riverbank1.c

inherit ROOM;

void create()
{
	set("short", "ɽ��֮��");
	set("long", @LONG
��������վ��һ��ɽ���е���ʯ�ϣ�����Ȫˮ������ű�������ˮ
�������Ĵ���ɢ���ϱ���һ������׵�ˮ̶(lake)�����ߵ�ɽ�ڿ���
���ָ��ֶ�������Ҫ���ϰ���ʵ�ںܲ����ף���ı�����һ��Сʯ�Ÿ�
�ߵؿ�����ߵ�ɽ�ڣ������ŵĸ߶�̫�ߣ���ʹ���Ṧ�����ĸ���ҲԾ
����ȥ��
LONG
	);
        set("item_desc", ([
            "lake":
                   "����һ����ˮ̶��̶ˮ�Ѿ����̣�ɢ�����������ζ��\n"
         ]) );

	set("exits", ([ /* sizeof() == 1 */
  "north" : "/d/suburb/es/oldpine/riverbank2",
  "south" : __DIR__"lake"
]));
	set("outdoors", "oldpine");
	set("resource/water", 1);
	setup();
}

void init()
{
	add_action("do_climb", "climb");
}

int do_climb(string arg)
{
	if( !arg || arg!="cliff" ) return 0;

	message_vision("$Nһ������а�ı��飬��ʼС������������ʯ��������ȥ��\n",
		this_player() );
	this_player()->move(__DIR__"cliff1");

	return 1;
}
