//
// Created by grondj on 12.05.2015.
//

#include "FrequentWordsProblem.h"

FrequentWordsProblem::FrequentWordsProblem(std::string& dna)
:
    m_dnaString( dna )
{

}

int FrequentWordsProblem::calculateMostFrequentWords(int sizeOfWords)
{
    std::string word;
    m_map.clear();
    m_wordsVector.clear();

    m_maxCount = 0;
    for (int i = 0; i < m_dnaString.size() - sizeOfWords; ++i)
    {
        word = m_dnaString.substr(i, sizeOfWords);
        if( m_map.count(word) > 0 )
        {
            auto current = ++m_map.at(word);
            if( current > m_maxCount )
            {
                m_maxCount = current;
            }
        }
        else
        {
            m_map.insert( {word, 1} );
            if( m_maxCount < 1 )
            {
                m_maxCount = 1;
            }
        }
    }

    for( auto elem : m_map)
    {
        if( elem.second == m_maxCount )
        {
            m_wordsVector.insert( m_wordsVector.end(), elem.first );
        }
    }

    return m_wordsVector.size();
}

std::string FrequentWordsProblem::getWord(int index) const
{
    return m_wordsVector.at( index );
}

int FrequentWordsProblem::getOccurances()
{
    return m_maxCount;
}
