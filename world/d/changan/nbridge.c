// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 
// Room: /changan/nbridge.c
//cglaem...12/12/96.

inherit ROOM;

#define FILE __DIR__"npc/qianmian"

void create ()
{
  set ("short", "��ˮ�ű�");
  set ("long", @LONG

�����������ż�����ǣ������ˮ��������һ����ٵ���ǡ�
˳����ˮ֮��������ȥ���ںӱ��Ų����ε�����ʵ���١�
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"wside1",
  "south" : __DIR__"bridge",
  "north" : __DIR__"nanchengkou",
  "east" : __DIR__"eside1",
]));
  set("outdoors", 1);

  setup();
}

void init()
{
   if(sizeof(children(FILE))<2)
     new(FILE)->move(this_object());
}




