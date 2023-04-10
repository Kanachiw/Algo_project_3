
#ifndef _wordsFinder 
#define _wordsFinder


class WordFinder
{
    private: 
    vector<string> words; 

    public: 
    
    WordFinder();
    void readwords(string filename); 
    friend ostream& operator<<(ostream& out, const WordFinder &wordList);
    string retrieveword(const WordFinder &wordList); 

}; 

#include "wordFinder.cpp"
#endif