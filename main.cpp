#include <iostream>

#include "FrequentWordsProblem.h"


int main()
{
    std::string dna("ACGTTGCATGTCGCATGATGCATGAGAGCT");
    FrequentWordsProblem problem(dna);

    int wordsFound = problem.calculateMostFrequentWords(4);

    for(int i = 0; i < wordsFound; i++ )
    {
        std::cout << problem.getWord(i) << " ";
    }
    std::cout << std::endl;
    return 0;
}