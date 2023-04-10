
#ifndef _wordsFinder 
#define _wordsFinder


class WordFinder
{
    private: 
    vector<string> words; 

    public: 
    void readwords(); 
    friend ostream& operator<<(ostream& out, const WordFinder &wordList);
    string retrieveword(const string& target); 

}; 

#include "wordFinder.cpp"
#endif
