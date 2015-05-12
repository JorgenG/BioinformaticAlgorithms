//
// Created by grondj on 12.05.2015.
//

#ifndef BIOINFORMATICSALGORITHMS_FREQUENTWORDSPROBLEM_H
#define BIOINFORMATICSALGORITHMS_FREQUENTWORDSPROBLEM_H


#include <iostream>
#include <unordered_map>

class FrequentWordsProblem
{
public:
    FrequentWordsProblem(std::string& dna);

    int calculateMostFrequentWords(int sizeOfWords);


    std::string getWord(int index) const;

private:
    const std::string m_dna;
    std::unordered_map<std::string, int> map;

};


#endif //BIOINFORMATICSALGORITHMS_FREQUENTWORDSPROBLEM_H
