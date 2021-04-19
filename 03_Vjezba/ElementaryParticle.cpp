// sadrzi definiranje metoda

#include "ElementaryParticle.h"

using namespace std;

ElementaryParticle::ElementaryParticle(string i, float m, bool b) //konstuktor
{
    ime=i;
    masa=m;
    bozon=b;
}

ElementaryParticle::ElementaryParticle() //override konstruktor
{
    ime=" ";
    masa=0.;
    bozon=false;
}

ElementaryParticle::~ElementaryParticle()    //Destructor
{

}

/*void ElementaryParticle::printInfo()
{
    cout << "\n";
    cout << "Ime čestice: " << ime << "\n" ;
    cout << "Masa čestice: " << masa << "GeV/c^2\n" ;
    if(bozon)
        cout << "Bozon: da \n" ;
    else
        cout << "Bozon: ne \n" ;
}*/

void ElementaryParticle::setP(float p_x, float p_y, float p_z)
{
    px = p_x;
    py = p_y;
    pz = p_z;
    E = sqrt(px*px + py*py + pz*pz + masa*masa);

    //cout << "\nEnergija " << ime << " :  " << E << "\n\n" ;
}


void ElementaryParticle::transP()
{
    pt = sqrt(px*px +py*py);
    //cout << "\nTrans. kol. gib." << ime << " :   " << pt << "\n\n";
}


void ElementaryParticle::bosonDecay(ElementaryParticle *particle1, ElementaryParticle *particle2)
{
    if (!bozon)
        cout << "\nRaspad nije moguc\n\n";

    random_num = (rand()%1000) + 1;    //random_num je u rasponu od 1 do 1000

    if(random_num < 26)
    {
        particle1->setInfo("Z", 91.2, true);
        particle2->setInfo("Z", 91.2, true);
    }
    else if(random_num < 64 + 26)
    {
        particle1->setInfo("tau+", 1.77, false);
        particle2->setInfo("tau-", 1.77, false);
    }    
    else if(random_num < 214 + 64 + 26) 
    {
        particle1->setInfo("W+", 80.4, true);
        particle2->setInfo("W-", 80.4, true);
    }
    else
    {
        particle1->setInfo("b", 4.18, false);
        particle2->setInfo("b", 4.18, false);
    }

    //radimo random postotke za kolicinu gibanja:

    random_px = (rand()%100) + 1;

    // moramo stavit opciju kad je =100 jer bi onda bilo %0 što ne moze
    if(random_px == 100)
    {
        random_py = 0;
        random_pz = 0;
    }
    else
    {
        random_py = rand() % (100 - random_px) +1 ;
        random_pz = 100 - (random_px + random_py) ;
    }


    // zadajemo random kolicine gibanja cesticama koje metoda prima, tako da im dajemo 
    // odredjeni postotak kolicine gibanja pocetne cestice

    // prvo prvoj cestici odredimo kolicine gibanja i postavimo ih pomocu metode setP
    particle1 -> setP(px*(random_px/100.), py*(random_py/100.), pz*(random_pz/100.));
    particle1 -> transP();

    // sada druga cestica ima preostali iznos komponente kolicine gibanja
    // sada kada je postavljena px, py i pz od cestice 1 mozemo postavit za cesticu 2
    // od kolicine gibanja glavne cestice oduzmemo kolicinu gibanja prve iz raspada
    particle2 -> setP(px - particle1 -> px, py - particle1 -> py, pz - particle1 -> pz);
    particle2 -> transP();


}

void ElementaryParticle::setInfo(string i, float m, bool b)
{
    ime=i;
    masa=m;
    bozon=b;
}


