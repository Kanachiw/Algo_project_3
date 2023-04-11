#include <iostream>
#include <fstream>
#include <iomanip>
#include "sort_algorithms.h"
#include "d_matrix.h"
#ifndef WORD_FINDER
#define WORD_FINDER
using namespace std; 

/* class WordFinder that reads words from glossary file and stores them in a vector*/
class WordFinder {
  private:
    vector<string> words; 

  public:
    WordFinder();
    void readWords(); 
    void sort();
    bool retrieveWord(const string& target);
    friend ostream& operator << (ostream& out, WordFinder& wordList);
};

#include "WordFinder1.cpp"
#endif