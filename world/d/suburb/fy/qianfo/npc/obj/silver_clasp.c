#include <armor.h>
#include <weapon.h>
inherit HEAD;
void create()
{
        set_name( "����" , ({ "clasp" }) );
        set_weight(100);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "֧");
                set("value", 800);
                set("material", "silver");

                set("armor_prop/armor", 1);
                set("armor_prop/personality", 2);
                set("female_only", 1);
                set("wear_msg", "$Nϸ�ĵؽ�һ֧$n���ڷ����ϡ�\n");

                set("wield_msg", "$N��$n�������У�����һ��ذ�ס�\n");
        }
        setup();
}