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
    string words; 
    vector<string> glossary; 

  public:
    WordFinder(string w = "Unknown");
    void readFile(); 
    void sort();
    int binarySearch(vector<string> glossary, const string& target);
    friend ostream& operator << (ostream& out, WordFinder& wordList);
};

#include "WordFinder1.cpp"
#endif