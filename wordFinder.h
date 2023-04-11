#ifndef _wordsFinder 
#define _wordsFinder


class WordFinder
{
    private: 
    vector<string> words; 

    public: 

    void readwords(); 
    
    WordFinder();
    void readwords(string filename); 

    friend ostream& operator<<(ostream& out, const WordFinder &wordList);
    string retrieveword(const string& target); 

}; 

#include "wordFinder.cpp"
#endif
