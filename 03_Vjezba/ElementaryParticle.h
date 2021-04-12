// sadrzi definiranje svih klasa

#include<iostream>

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

        void printInfo();

        void setP(float p_x, float p_y, float p_z);

        void transP();
};
