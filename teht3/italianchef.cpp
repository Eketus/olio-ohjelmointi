#include "italianchef.h"




ItalianChef::ItalianChef(string x):Chef(x) {

    cout<<getName()<<" konstruktori" << endl;
}




string ItalianChef::getName(){

    return name;
}

void ItalianChef::makePasta() {
     cout<<"Chef "<<name<<" tekee PASTAA" << endl;
}
