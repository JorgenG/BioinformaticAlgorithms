#include <iostream>

#include "FrequentWordsProblem.h"
#include "ReverseComplement.h"

void solveDna(std::string dna, int kmerSize )
{
    FrequentWordsProblem problem(dna);

    int wordsFound = problem.calculateMostFrequentWords(kmerSize);
    int occurances = problem.getOccurances();

    std::cout << dna << std::endl;
    std::cout << "Occurances: " << occurances << ", Words: ";
    for(int i = 0; i < wordsFound; i++ )
    {
        std::cout << problem.getWord(i) << " ";
    }
    std::cout << std::endl;
}

int main()
{
    // Frequent Words Problem
    std::string dna("ACGTTGCATGTCGCATGATGCATGAGAGCT");
    solveDna(dna, 4);
    // Extra dataset
    dna = "CGGAAGCGAGATTCGCGTGGCGTGATTCCGGCGGGCGTGGAGAAGCGAGATTCATTCAAGCCGGGAGGCGTGGCGTGGCGTGGCGTGCGGATTCAAGCCGGCGGGCGTGATTCGAGCGGCGGATTCGAGATTCCGGGCGTGCGGGCGTGAAGCGCGTGGAGGAGGCGTGGCGTGCGGGAGGAGAAGCGAGAAGCCGGATTCAAGCAAGCATTCCGGCGGGAGATTCGCGTGGAGGCGTGGAGGCGTGGAGGCGTGCGGCGGGAGATTCAAGCCGGATTCGCGTGGAGAAGCGAGAAGCGCGTGCGGAAGCGAGGAGGAGAAGCATTCGCGTGATTCCGGGAGATTCAAGCATTCGCGTGCGGCGGGAGATTCAAGCGAGGAGGCGTGAAGCAAGCAAGCAAGCGCGTGGCGTGCGGCGGGAGAAGCAAGCGCGTGATTCGAGCGGGCGTGCGGAAGCGAGCGG";
    solveDna(dna, 12);

    std::string dnaString("AAAACCCGGT");
    ReverseComplement reverseComplementProblem(dnaString);

    std::cout << dnaString << " transforms into " <<  reverseComplementProblem.getComplement() << std::endl;


    return 0;
}