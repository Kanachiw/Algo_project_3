
#ifndef _wordsFinder 
#define _wordsFinder
#include <vector> 
#include <string> 
#include <iostream>
using namespace std; 

class WordFinder {
  private:
    vector<string> words; 
    void readWords(string filename); 
    void sort();

  public:
    WordFinder();
    bool retrieveWords(const string& target); 
    friend ostream& operator << (ostream& out, WordFinder& wordList);
};

#include "wordFinder.cpp"
#endif
