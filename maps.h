//
// Created by einat on 12/17/18.
//

#ifndef PORCJECT_MAP_H
#define PORCJECT_MAP_H

#include <map>
#include <string>
#include <iterator>

enum Maps {Map_command, Symbols_table, Map_path, Operator_Priority_map};
using namespace std;

class maps {
    private:
        map<string,int> s_map_command;
        map<string,double > s_symbole_tables;
        map<string,Maps> s_map_map;
        map<string,string> s_map_path;
        map<char,int> s_map_operator_priority ;

    public:
        maps();
        void set_double(string table,string key,double value);
        void set_string(string table,string key, string path);
        int get_int(string table,string key);
        int get_int(string table,char key);
        double get_double(string table, string key);
        string get_string(string table,string key);
        map<string,Maps>create_map_map();
        map<string, int>create_map_command();
        map<char,int> create_map_operator_priority() ;
        bool is_value_in_map(string table, string value);
};


#endif //PORCJECT_MAP_H