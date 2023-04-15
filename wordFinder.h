
#ifndef _wordsFinder 
#define _wordsFinder
#include <vector> 
#include <string> 
#include <iostream>
using namespace std; 

class WordFinder {
  private:
  //private memeber type 
    vector<string> words; 
//prive fuctions to read word
    void readWords(string filename); 

  // private member to select sort the words
    void SelectionSort();
 // private member to quick sort the words
    void QuickSort();
  // private member to heap sort the words
    void HeapSort();
   

  public:
    
    WordFinder();
    string sort(int sortType); 
    bool retrieveWords(const string& target); 
    friend ostream& operator << (ostream& out, WordFinder& wordList);
};

#include "wordFinder.cpp"
#endif
