//
// Created by einat on 12/21/18.
//

#include "var.h"
using namespace std ;

var:: var(string variable, maps* map)
{
    s_variable = variable;
    s_map = map;
}

void var:: execute ()
{
   bool check_variable = s_map->is_value_in_map("symbols_tables",s_variable);
   //if the variable already in the tables the var commend is not legal
   if(check_variable)
   {
       exit(1);
   }
   //add the variable to the map with out value
   else
   {
       s_map->set_double("symbols_tables",s_variable,0.0);
   }

}