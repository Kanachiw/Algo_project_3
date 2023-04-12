
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
    void SelectionSort();
    void QuickSort();
    void HeapSort();
   

  public:
    
    WordFinder();
    string sort(int sortType); 
    bool retrieveWords(const string& target); 
    friend ostream& operator << (ostream& out, WordFinder& wordList);
};

#include "wordFinder.cpp"
#endif
