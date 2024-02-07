#include <iostream>
#include "chef.h"
#include "italianchef.h"


using namespace std;

int main()
{
    Chef Leevi("Eke");

    ItalianChef Kakka("Martti");

    Kakka.makeSalad();

    Leevi.makeSoup();




    // Chef GordonRamsay("Eke");

    // GordonRamsay.makeSalad();

    // GordonRamsay.makeSoup();

    // Chef Martti("Arttu");

    // Martti.makeSalad();

    // Martti.makeSoup();

    return 0;
}

