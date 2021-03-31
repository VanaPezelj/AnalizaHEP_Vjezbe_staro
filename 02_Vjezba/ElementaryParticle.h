#include<iostream>

using namespace std;

class ElementaryParticle
{
    public:
        string ime;
        float masa;
        bool bozon;

        ElementaryParticle(string ime, float mass, bool bozon);
        ~ElementaryParticle(); //Destructor



        void printInfo();
};