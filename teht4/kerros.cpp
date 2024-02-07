#include "kerros.h"

Kerros::Kerros() {
    cout<<"Kerros konstruktori"<<endl;
}

void Kerros::maaritaAsunnot(){

    cout<<"Maaritetaan 4 kpl kerroksen asuntoja"<<endl;

    as1.maarita(2, 100);
    as2.maarita(2, 100);
    as3.maarita(2, 100);
    as4.maarita(2, 100);
}

double Kerros::laskeKulutus(double hinta){
    int KerrosAs1 = hinta * as1.asukasMaara * as1.neliot;
    int KerrosAs2 = hinta * as2.asukasMaara * as2.neliot;
    int KerrosAs3 = hinta * as1.asukasMaara * as1.neliot;
    int KerrosAs4 = hinta * as2.asukasMaara * as2.neliot;

    double kerrosKulutus = KerrosAs1 + KerrosAs2 + KerrosAs3 + KerrosAs4;

    return kerrosKulutus;
}
