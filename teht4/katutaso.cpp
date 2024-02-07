#include "katutaso.h"



Katutaso::Katutaso() {
    cout<<"Katutaso konstruktori"<<endl;
}


void Katutaso::maaritaAsunnot() {

    cout<<"Maaritetaan 2 kpl katutason asuntoja"<<endl;

    as1.maarita(2, 100);
    as2.maarita(2, 100);

}

double Katutaso::laskeKulutus(double hinta) {
    int KatuAs1 = hinta * as1.asukasMaara * as1.neliot;
    int KatuAs2 = hinta * as2.asukasMaara * as2.neliot;

    double katuKulutus = KatuAs1 + KatuAs2;

    return katuKulutus;
}
