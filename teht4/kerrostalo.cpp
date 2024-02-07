#include "kerrostalo.h"

Kerrostalo::Kerrostalo() {
    cout<<"Kerrostalo konstruktori"<<endl;

    cout<<"Maaritellaan koko kerrostalon kaikki asunnot"<<endl;

    eka.maaritaAsunnot();
    toka.maaritaAsunnot();
    kolmas.maaritaAsunnot();
    kakka.maaritaAsunnot();
}


double Kerrostalo::laskeKulutus(double hinta){

    double kerrostaloKulutus = eka.laskeKulutus(hinta) + toka.laskeKulutus(hinta) + kolmas.laskeKulutus(hinta) + kakka.laskeKulutus(hinta);

    return kerrostaloKulutus;
}
