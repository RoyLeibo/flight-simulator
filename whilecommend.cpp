//
// Created by einat on 12/21/18.
//

#include "whilecommend.h"

whilecommend::whilecommend(vector<vector<string>> vec, maps* map)
{
    s_vec = vec;
    s_map = map;
}
void whilecommend:: execute()
{
    bool flg = true;
    double variable_one  = 0;
    double variable_two = 0;
    if(s_map->is_value_in_map("symbols_tables",s_vec[0][1]))
    {
        variable_one = s_map->get_double("symbols_tables",s_vec[0][1]);
    }
    else if(s_map->is_value_in_map("read_map",s_vec[0][1]))
    {
        variable_one = s_map->get_double("read_map",s_vec[0][1]);
    }
    else
    {
        variable_one = stod(s_vec[0][1]);
    }

    if(s_map->is_value_in_map("symbols_tables",s_vec[0][3]))
    {
        variable_two = s_map->get_double("symbols_tables",s_vec[0][3]);
    }
    else if(s_map->is_value_in_map("read_map",s_vec[0][3]))
    {
        variable_two = s_map->get_double("read_map",s_vec[0][3]);
    }
    else
    {
        variable_two = stod(s_vec[0][3]);
    }
    switch(s_map->get_int("map_operators",s_vec[0][2]))
    {
        case 1:
            if(variable_one < variable_two)
            {
                do_while(vec);
                flg = false;
            }
        case 2:
            if(variable_one > variable_two)
            {
                do_while(vec);
                flg = false;
            }
        case 3:
            if(variable_one == variable_two)
            {
                do_while(vec);
                flg = false;
            }
        case 4:
            if(variable_one != variable_two)
            {
                do_while(vec);
                flg = false;
            }
        case 5:
            if(variable_one >= variable_two)
            {
                do_while(vec);
                flg = false;
            }
        case 6:
            if(variable_one <= variable_two)
            {
                do_while(vec);
                flg = false;
            }

    }


}