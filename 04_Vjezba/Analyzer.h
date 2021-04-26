
#include <iostream>
#include <fstream>      // library for working with files (three classes: ofstream, ifstream, fstream)
#include <sstream>      // library for streaming strings
//#include <cstdlib>

using namespace std;

class Analyzer
{
    public:
        Analyzer();                         // constructor declaration
        ~Analyzer();                        // destructor declaration

        void ReadFile(string _filename);
    
    private:

        int _EventNumber;
        string _DecayParticle1_name;
        float _DecayParticle1_boson;
        float _DecayParticle1_mass;
        float _DecayParticle1_px;
        float _DecayParticle1_py;
        float _DecayParticle1_pz;
        float _DecayParticle1_E;
        float _DecayParticle1_pt;

        string _DecayParticle2_name;
        float _DecayParticle2_boson;
        float _DecayParticle2_mass;
        float _DecayParticle2_px;
        float _DecayParticle2_py;
        float _DecayParticle2_pz;
        float _DecayParticle2_E;
        float _DecayParticle2_pt;

        //Declaration of file we want to read
        ifstream myReadFile;
        string line;
        bool skipFirstLine;

};  