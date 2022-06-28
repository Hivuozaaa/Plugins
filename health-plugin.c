#include <amxmodx>
#include <fun>

public plagin_init() {
    register_plugin("health", "0.1", "Hivuozaaa")
    register_clcmd("say /health" "give_health")
    register_clcmd("say /armor" "give_armor")
}

public give_health(id)
{
    if(is_user_alive(id) && get_user_flags(id) & ADMIN_LEVEL_H)
    {
        set_user_health(id, get_user_health(id) +100)
    }
    else if(is_user_alive(id))
    {
        set_user_health(id, get_user_health(id) +50)
    }
    else
    {
        set_hudmessage(255, 255, 0, -1.0, 0.18, 0, 6.0, 3.0, 0.06, 2.0, true);
        show_hudmessage(id, "You are dead!")
    }
}

public give_armor(id)
{
    if(is_user_alive(id) && get_user_flags(id) & ADMIN_LEVEL_H)
    {
        set_user_armor(id, get_user_armor(id) +100)
    }
    else if(is_user_alive(id))
    {
        set_user_armor(id, get_user_armor(id) +25)
    }
    else
    {
        set_hudmessage(255, 255, 0, -1.0, 0.18, 0, 6.0, 3.0, 0.06, 2.0, true);
        show_hudmessage(id, "You are dead!")
    }
}


