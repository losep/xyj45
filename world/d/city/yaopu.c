// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 
//changan city

inherit ROOM;

void create ()
{
        set ("short", "�ش�ҩ��");
        set ("long", @LONG

���ǳ�����һ�����ֺŵ�ҩ�̣��ഫԭ�����ϰ��ǻʹ��е���ҽ����
�ο�֪һ����ҩ���еİ���Ҳʮ�ֿ��������α��ڿ�Ļ�Ʋ��ĸɸ�
������ǽ�Ϲ����˱���������л�ҡ�
LONG);

        //set("item_desc", ([" *** " : " *** ", ]));

        set("exits", 
        ([ //sizeof() == 4
                "west" : __DIR__"zhuque-s2",
        ]));

        set("objects", 
        ([ //sizeof() == 1
                __DIR__"npc/yang" : 1,
                "/d/obj/misc/tables" : 1,
                "/d/obj/misc/chairs" : 2,
        ]));


//        set("outdoors", "changan");
   set("no_clean_up", 0);
        setup();
   replace_program(ROOM);
}

