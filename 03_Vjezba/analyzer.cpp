// sadrzi pozive metoda i instanciranje objekata

#include <iostream>
#include "ElementaryParticle.h"

using namespace std;

int main()
{
    srand(time(NULL));

    /*
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

    //provjera za override konstruktor
    ElementaryParticle *Prazan_kvark;
    Prazan_kvark = new ElementaryParticle();
    Prazan_kvark->printInfo();

    
    //provjera metode bosonDecay()
    Top_kvark.bosonDecay();
    Higgs_bozon.bosonDecay();

   */

    ElementaryParticle *Higgs_bozon;
    Higgs_bozon = new ElementaryParticle("Higgsov bozon",124.97,true);

    ElementaryParticle *decayParticle_1, *decayParticle_2;
    decayParticle_1 = new ElementaryParticle();
    decayParticle_2 = new ElementaryParticle();
    
    Higgs_bozon -> setP(10.0,10.0,10.0);

    Higgs_bozon -> bosonDecay(decayParticle_1, decayParticle_2);
    

    Higgs_bozon->~ElementaryParticle();
    decayParticle_1->~ElementaryParticle();
    decayParticle_2->~ElementaryParticle();


   
    return 0;
}