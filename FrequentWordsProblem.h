//
// Created by grondj on 12.05.2015.
//

#ifndef BIOINFORMATICSALGORITHMS_FREQUENTWORDSPROBLEM_H
#define BIOINFORMATICSALGORITHMS_FREQUENTWORDSPROBLEM_H


#include <iostream>
#include <unordered_map>
#include <vector>

class FrequentWordsProblem
{
public:
    FrequentWordsProblem(std::string& dna);

    int calculateMostFrequentWords(int sizeOfWords);


    std::string getWord(int index) const;

    int getOccurances();

private:
    const std::string m_dnaString;
    std::unordered_map<std::string, int> m_map;
    std::vector<std::string> m_wordsVector;
    int m_maxCount;

};


#endif //BIOINFORMATICSALGORITHMS_FREQUENTWORDSPROBLEM_H
