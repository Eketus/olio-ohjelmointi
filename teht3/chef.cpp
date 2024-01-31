#include "chef.h"

Chef::Chef(string x) {
    name = x;
    cout<<"Chef "<<name<<" konstruktori" << endl;
}


void Chef::makeSalad(){
 cout<<"Chef "<<name<<" tekee salaattia" << endl;
};


void Chef::makeSoup(){
 cout<<"Chef "<<name<<" tekee nyt soppa!a" << endl;
};

Chef::~Chef(){
 cout<<"Chef "<<name<<" destruktori" << endl;
}
