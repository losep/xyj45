inherit ROOM;
void create()
{
        set("short", "����������");
        set("long", @LONG
�����Ÿ�С���ƾɣ��س�����б���ź�ӣñ��§�ų�ǹ�ڴ��˯��Ҳ����Ϊ
��������ס��ƶ���õ�֮ͽ��������ΰ������������Ǻܺá�����ӹ�֮ʱ������
���������裬ҹĻ����֮�󣬲Һź���Ц������˷���
LONG
        );
        set("exits", ([ /* sizeof() == 4 */
  "west" : "/u/quicksand/huangyie0",
  "east" : __DIR__"wcloud5",
  "up"   : "/d/suburb/fy/fywall/wupgate",
]));
        set("objects", ([
        __DIR__"npc/wind_solider": 2, 
			]) );
        set("outdoors", "fengyun");
        setup();
}
int valid_leave(object me, string dir)
{
        object *inv;
        object ob;
        int i;
	if( userp(me)){
        if( dir == "east" && ob=present("garrison", this_object()))
        {
                inv = all_inventory(me);
                for(i=0; i<sizeof(inv); i++)
                {
                        if((int)(inv[i]->query("weapon_prop")) && (int)(inv[i]->query("equipped")))
                        return notify_fail(ob->name()+"����ȵ��������ֱֳ�������Ƴǣ�\n");

                }
        }

        if( dir == "up" && ob=present("garrison", this_object()))
        {
                inv = all_inventory(me);
                for(i=0; i<sizeof(inv); i++)
                {
                        if(((string)(inv[i]->name()) == "����ս��") && (int)(inv[i]->query("equipped")))
                        return 1;

                }
                return notify_fail(ob->name()+"����ȵ��������˵Ȳ����ϵǻ���ǽ��\n");
        }

        return 1;
	}
	else return 1;
}
