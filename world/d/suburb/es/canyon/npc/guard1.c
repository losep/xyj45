// shiao.c

inherit NPC;

void create()
{
	set_name("С��", ({ "guard" }) );
	set("gender", "����");
	set("age", 24);
	set("long",
        	"��ɳ���棬�޾���ɣ��������������ӣ���������������\n"
                "�����ؾ���\n");

	set("attitude", "peaceful");

	set("str", 26);
	set("int", 24);

	set("combat_exp", 40000);
	
	set("force", 300);
	set("max_force", 300);
	set("force_factor", 5);
	
	set_skill("unarmed", 40);
	set_skill("parry", 60);
	set_skill("dodge", 50);

	setup();

}