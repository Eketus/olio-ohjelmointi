#include "asunto.h"

Asunto::Asunto() {
    cout<<"Asunto konsturktori"<<endl;
}


void Asunto::maarita(int a, int b){
    asukasMaara = a;
    neliot = b;
    cout<<"Asunto maaritetty, asukkaita = "<<a<<" ja nelioita = "<<b<<endl;
}

double Asunto::laskeKulutus(double hinta){
    int result = hinta * asukasMaara * neliot;
    cout<<"Asunnon kulutus on "<<result<<", kun hinta = "<<hinta<<endl;
    return result;
}
