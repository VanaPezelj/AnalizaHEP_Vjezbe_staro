#include "ElementaryParticle.h"

using namespace std;

ElementaryParticle::ElementaryParticle(string i, float m, bool b)
{
    ime=i;
    masa=m;
    bozon=b;
}

ElementaryParticle::~ElementaryParticle()
{

}

void ElementaryParticle::printInfo()
     {
        cout << "Ime čestice: " << ime << "\n" ;
        cout << "Masa čestice: " << masa << "GeV/c^2\n" ;
        if(bozon)
            cout << "Bozon: da \n" ;
        else
            cout << "Bozon: ne \n" ;
     }

