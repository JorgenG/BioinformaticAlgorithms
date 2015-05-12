#include <iostream>

#include "FrequentWordsProblem.h"


int main()
{
    std::string dna("ACGTTGCATGTCGCATGATGCATGAGAGCT");
    FrequentWordsProblem problem(dna);

    int wordsFound = problem.calculateMostFrequentWords(4);
    int occurances = problem.getOccurances();

    std::cout << dna << std::endl;
    std::cout << "Occurances: " << occurances << ", Words: ";
    for(int i = 0; i < wordsFound; i++ )
    {
        std::cout << problem.getWord(i) << " ";
    }
    std::cout << std::endl;
    return 0;
}