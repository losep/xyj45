// waiter.c

inherit NPC;
inherit F_VENDOR;

void create()
{
	set_name("��С��", ({ "waiter" }) );
	set("gender", "����" );
	set("age", 22);
	set("long",
		"��λ��С����Ц�����æ��������ʱ������ڲ����ϵ�Ĩ��������\n");
	set("combat_exp", 10000);
	set_skill("dodge", 300);
	set("attitude", "friendly");
	set("rank_info/respect", "С����");
	set("vendor_goods", ([
		"ذ��": "/obj/example/dagger",
		"��": "/obj/example/wineskin",
		"����": "/obj/example/dumpling",
		"����": "/obj/example/chicken_leg",
 	]) );
	setup();
}

void init()
{	
	object ob;

	::init();
	if( interactive(ob = this_player()) && !is_fighting() ) {
		remove_call_out("greeting");
		call_out("greeting", 1, ob);
	}
	add_action("do_vendor_list", "list");
}

void greeting(object ob)
{
	if( !ob || environment(ob) != environment() ) return;
	switch( random(3) ) {
		case 0:
			say( "��С��Ц�����˵������λ" + RANK_D->query_respect(ob)
				+ "�������ȱ��裬ЪЪ�Ȱɡ�\n");
			break;
		case 1:
			say( "��С���ò����ϵ�ë��Ĩ��Ĩ�֣�˵������λ" + RANK_D->query_respect(ob)
				+ "����������\n");
			break;
		case 2:
			say( "��С��˵������λ" + RANK_D->query_respect(ob)
				+ "�������ȼ���С��ĺ�ưɣ��⼸��Ŵӽ����￪���Ӵ��\n");
			break;
	}
}

void relay_say(object ob, string msg)
{
	object cake;

	if( (strsrch(msg,"ES2")>=0 || strsrch(msg, "es2")>=0) && strsrch(msg,"���տ���")>=0 ) {
		command("jump");
		command("say ���տ���!");
		seteuid(getuid());
		if( !present("cake", ob) ) {
			cake = new("/obj/example/cake");
			cake->move(ob);
			message_vision("$N��$nһ�鿴��������������ˮ�ĵ��⡣\n", this_object(), ob);
		}
	}
}