// sadrzi pozive metoda i instanciranje objekata

#include <iostream>
#include "ElementaryParticle.h"

using namespace std;

int main()
{
    ElementaryParticle Higgs_bozon ("Higgsov bozon",124.97,true); //Higgs_bozon je istanca klase Elem...
    ElementaryParticle Top_kvark ("Top kvark",173.1,false);
    ElementaryParticle *ptrZ_bozon;
    ptrZ_bozon = new ElementaryParticle("Z bozon",91.2,true);

    ptrZ_bozon->printInfo();
    ptrZ_bozon->~ElementaryParticle(); //poziv destructora
    Higgs_bozon.printInfo();
    Top_kvark.printInfo();

    Higgs_bozon.setP(10.0,0.,10.0);
    Top_kvark.setP(5.,5.,5.);

    Top_kvark.transP();

    return 0;
}