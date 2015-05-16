//
// Created by grondj on 12.05.2015.
//

#include "ReverseComplement.h"

ReverseComplement::ReverseComplement(std::string &dna)
:
    m_dna( dna )
{
    calculateComplement();
}

std::string ReverseComplement::getComplement()
{
    return m_complementDna;
}

void ReverseComplement::calculateComplement()
{
    char complementary[m_dna.size() + 1];
    int index = m_dna.size();
    complementary[index--] = '\0';
    for( char letter : m_dna )
    {
        complementary[index] = getComplementaryNucleotide(letter);
        index--;
    }
    m_complementDna = complementary;
}

char ReverseComplement::getComplementaryNucleotide(char nucleotide)
{
    switch( nucleotide )
    {
        case 'A':
            return 'T';
        case 'T':
            return 'A';
        case 'G':
            return 'C';
        case 'C':
            return 'G';
        default:
            return 'x';
    }
}
