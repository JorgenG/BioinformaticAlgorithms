//
// Created by grondj on 12.05.2015.
//

#ifndef BIOINFORMATICSALGORITHMS_REVERSECOMPLEMENT_H
#define BIOINFORMATICSALGORITHMS_REVERSECOMPLEMENT_H

#include <string>

class ReverseComplement
{
public:
    ReverseComplement(std::string& dna);
    std::string getComplement();

private:
    std::string m_dna;
    std::string m_complementDna;

    void calculateComplement();
    char getComplementaryNucleotide(char nucleotide);
};


#endif //BIOINFORMATICSALGORITHMS_REVERSECOMPLEMENT_H
