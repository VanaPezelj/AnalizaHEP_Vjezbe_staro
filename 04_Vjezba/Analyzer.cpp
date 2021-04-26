
#include "Analyzer.h"

// constructor declaration
Analyzer::Analyzer()
{
}

// destructor declaration
Analyzer::~Analyzer()
{
}

void Analyzer::ReadFile(string filename)
{
    //c_str()  Return const pointer to null-terminated contents. This is a handle to internal data.

    myReadFile.open(filename.c_str());   

    skipFirstLine = true;

    if(myReadFile.is_open())  
    {
        while (getline(myReadFile,line))
        {
            // object linestream, class stringstream
            // linestream is name of an object
            stringstream linestream(line); 

            // We skip the first line of file 
            if (skipFirstLine)
            {
                skipFirstLine = false;
                continue;
            }

            // Read output and send it to dedicated variables
            linestream >> _EventNumber >> _DecayParticle1_name >> _DecayParticle1_boson >>  _DecayParticle1_mass >> _DecayParticle1_px 
                                       >> _DecayParticle1_py >> _DecayParticle1_pz >> _DecayParticle1_E >> _DecayParticle1_pt 
                                       >> _DecayParticle2_name >> _DecayParticle2_boson >> _DecayParticle2_mass >> _DecayParticle2_px 
                                       >> _DecayParticle2_py >> _DecayParticle2_pz >> _DecayParticle2_E >> _DecayParticle2_pt;


            cout << _DecayParticle1_boson << '\n' ;

        }
        
    }

    myReadFile.close();     
}

