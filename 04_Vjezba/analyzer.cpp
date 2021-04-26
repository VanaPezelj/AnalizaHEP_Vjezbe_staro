
#include "Analyzer.h"

int main()
{
    Analyzer *analyzer;
    analyzer = new Analyzer;

    analyzer->ReadFile("../03_Vjezba/Analysis.txt");

    delete analyzer;

    return 0;

}