#include<iostream>
#include "ElementaryParticle.h"

using namespace std;

int main()
{
    ElementaryParticle Higgs_bozon ("Higgsov bozon",124.97,true);
    ElementaryParticle Top_kvark ("Top kvark",173.1,false);
    ElementaryParticle *ptrZ_bozon;
    ptrZ_bozon = new ElementaryParticle("Z bozon",91.2,true);

    ptrZ_bozon->printInfo();
    ptrZ_bozon->~ElementaryParticle();
    Higgs_bozon.printInfo();
    Top_kvark.printInfo();

    return 0;
}