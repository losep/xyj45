// stick.c

#include <ansi.h>
#include <weapon.h>

inherit STAFF;

void create()
{
	set_name( "ɮ��", ({ "monk stick", "stick" }) );
	set_weight(3000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long", "һ���ִ��ֳ�ɮ���������ѱ�ĥ��ʮ�ֹ⻬��\n");
		set("value", 100);
		set("material", "wood");
		set("wield_msg", "$N�ó�һ��$n�������С�\n");
		set("unwield_msg", "$N�������е�$n��\n");
	}

	init_staff(13);
	setup();
}