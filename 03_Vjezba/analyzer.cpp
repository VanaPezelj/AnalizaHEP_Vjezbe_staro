// sadrzi pozive metoda i instanciranje objekata

#include <iostream>
#include <fstream>      // sadrži klase za pisanje u fileove
#include <string.h>

#include "ElementaryParticle.h"

using namespace std;

int main()
{

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

    srand(time(NULL));

    ofstream myfile;                        // stvaramo objekt myfile iz klase ofstream
    myfile.open ("Analysis.txt", ios::out);           // otvaramo file, imena Analysis.txt

    int rand_x, rand_y, rand_z;          // stvaramo varijable za random brojeve     

    ElementaryParticle *Higgs_bozon;
    Higgs_bozon = new ElementaryParticle("Higgsov bozon",124.97,true);

    ElementaryParticle *decayParticle_1, *decayParticle_2;
    decayParticle_1 = new ElementaryParticle();
    decayParticle_2 = new ElementaryParticle();

    myfile << "EventNumber DecayParticle1_ime DecayParticle1_bozon DecayParticle1_mass DecayParticle1_px DecayParticle1_py DecayParticle1_pz DecayParticle1_E DecayParticle1_pt" <<
                         " DecayParticle2_ime DecayParticle2_bozon DecayParticle2_mass DecayParticle2_px DecayParticle2_py DecayParticle2_pz DecayParticle2_E DecayParticle2_pt" << endl;

    for (int i = 0; i < 10000; i++)
    {
        // uzimamo 1000 umjesto 100 zbog vece mogucnosti (preciznosti)

        rand_x= -1000 + rand()%2000;
        rand_y= -1000 + rand()%2000;
        rand_z= -1000 + rand()%2000;    
        
        //dijelimo s 10 jer nam treba velicina od -100 do 100
        Higgs_bozon -> setP(rand_x/10.,rand_y/10., rand_z/10.);

        Higgs_bozon -> bosonDecay(decayParticle_1, decayParticle_2);

        myfile << i+1 << " " << decayParticle_1->ime << " "<< decayParticle_1->bozon << " " << decayParticle_1->masa << " "
                           << decayParticle_1->px << " " << decayParticle_1->py << " " << decayParticle_1->pz << " " << decayParticle_1->E << " "  << decayParticle_1->pt << " "
                           << decayParticle_2->ime << " "<< decayParticle_2->bozon << " " << decayParticle_2->masa << " "
                           << decayParticle_2->px << " " << decayParticle_2->py << " " << decayParticle_2->pz << " " << decayParticle_2->E << " " << decayParticle_2->pt << endl;

    }
    
 
        myfile.close();      //zatvaramo file

        Higgs_bozon->~ElementaryParticle();
        decayParticle_1->~ElementaryParticle();
        decayParticle_2->~ElementaryParticle();
   
    
    
    return 0;
}