#include<iostream>
using namespace std;

class ElementaryParticle{
    public:
        string ime;
        float masa;
        bool bozon;
        void printInfo();
        //void inicijalizacija(string i, float m, bool b);
        ElementaryParticle(string i, float m, bool b);

};


ElementaryParticle::ElementaryParticle(string i, float m, bool b)
{
    ime=i;
    masa=m;
    bozon=b;
}

/*void ElementaryParticle::inicijalizacija(string i, float m, bool b)
{
    ime=i;
    masa=m;
    bozon=b;
}*/

void    ElementaryParticle::printInfo()
        {
            cout << "Ime čestice: " << ime << "\n" ;
            cout << "Masa čestice: " << masa << "GeV/c^2\n" ;
            if(bozon)
                cout << "Bozon: da \n" ;
            else
                cout << "Bozon: ne \n" ;
        }


int main(){
    ElementaryParticle Higgs_bozon("Higgsov bozon",124.97,true);
    //Higgs_bozon.inicijalizacija("Higgsov bozon",124.97,true);
    ElementaryParticle Top_kvark("Top kvark",173.1,false);
    //Top_kvark.inicijalizacija("Top kvark",173.1,false);
    ElementaryParticle Z_bozon("Z bozon",91.2,true);
    //Z_bozon.inicijalizacija("Z bozon",91.2,true);
    ElementaryParticle *ptrZ_bozon;
    ptrZ_bozon=&Z_bozon;

    /*
    ILI

    ElementaryParticle *ptrZ_bozon;
    ptrZ_bozon=new ElementaryParticle("Z bozon",91.2,true);
    .
    .
    .
    .
    delete ptrZ_bozon;

    // na ovaj način ne stvaramo objekt koji zauzima memoriju

    */

    ptrZ_bozon->printInfo();
    Higgs_bozon.printInfo();
    Top_kvark.printInfo();
    return 0;
}

