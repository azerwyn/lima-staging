/* Do not remove the headers from this file! see /USAGE for more info. */

inherit VERB_OB;

//: COMMAND
// USAGE
//
//  |  ``light <something>``
//  |  ``light <something> with <something>``
//
// Light the fireplace, light the candle with a match.
//
// .. TAGS: RST

void do_light_obj(object ob)
{
   ob->do_light();
}

void do_light_obj_with_obj(object ob, object with)
{
   ob->do_light(with);
}

int need_to_see()
{
   return 0;
}

void create()
{
   add_rules(({"OBJ", "OBJ with OBJ"}));
}
