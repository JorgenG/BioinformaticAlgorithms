//
// Created by grondj on 12.05.2015.
//

#include "FrequentWordsProblem.h"

FrequentWordsProblem::FrequentWordsProblem(std::string& dna)
:
    m_dna( dna )
{

}

int FrequentWordsProblem::calculateMostFrequentWords(int sizeOfWords)
{
    std::string word;
    for (int i = 0; i < m_dna.size() - sizeOfWords; ++i)
    {
        word = m_dna.substr(i, sizeOfWords);
        if( map.count(word) > 0 )
        {
            map.at(word)++;
        }
        else
        {
            map.insert( {word, 1} );
        }
    }

    for( auto elem : map )
    {
        std::cout << "Name: " << elem.first << " Count: " << elem.second << std::endl;
    }

    return 0;
}

std::string FrequentWordsProblem::getWord(int index) const
{
    return "test";
}
