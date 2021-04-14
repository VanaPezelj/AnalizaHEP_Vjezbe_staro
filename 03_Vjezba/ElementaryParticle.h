// sadrzi definiranje svih klasa

#include <iostream>
#include <math.h>
#include <cstdlib>
#include <ctime>

using namespace std;

class ElementaryParticle
{
    public:
        string ime;
        float masa;
        bool bozon;

        float px,py,pz,E;

        ElementaryParticle(string ime, float mass, bool bozon); //Constructor
        ~ElementaryParticle(); //Destructor

        ElementaryParticle();

        void printInfo();

        void setP(float p_x, float p_y, float p_z);

        void transP();

        void bosonDecay(ElementaryParticle* particle1, ElementaryParticle* particle2);

        void setInfo(string ime, float mass, bool bozon); //metoda, radi isto sto i konstruktor

    private:
        int random_num;
        int random_px, random_py, random_pz;
        
};
