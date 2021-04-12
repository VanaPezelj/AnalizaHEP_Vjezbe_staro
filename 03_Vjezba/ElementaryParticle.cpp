// sadrzi definiranje metoda

#include <math.h>
#include "ElementaryParticle.h"

using namespace std;

ElementaryParticle::ElementaryParticle(string i, float m, bool b)
{
    ime=i;
    masa=m;
    bozon=b;
}

ElementaryParticle::~ElementaryParticle()    //Destructor
{

}

void ElementaryParticle::printInfo()
{
    cout << "\n";
    cout << "Ime čestice: " << ime << "\n" ;
    cout << "Masa čestice: " << masa << "GeV/c^2\n" ;
    if(bozon)
        cout << "Bozon: da \n" ;
    else
        cout << "Bozon: ne \n" ;
}

void ElementaryParticle::setP(float p_x, float p_y, float p_z)
{
    px = p_x;
    py = p_y;
    pz = p_z;
    E = sqrt(px*px + py*py + pz*pz + masa*masa);

    cout << "\nEnergija " << ime << " :  " << E << "\n\n" ;
}


void ElementaryParticle::transP()
{
    cout << "\nTrans. kol. gib." << ime << " :   " << sqrt(px*px +py*py) << "\n\n";
}


