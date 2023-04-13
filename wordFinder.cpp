
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include "wordFinder.h"
#include "sort_algorithms.h"
#include <fstream>
#include <iomanip>
using namespace std; 
 


WordFinder::WordFinder() {
  string filename = "Glossary.txt";
  readWords(filename); 
  sort(); 
}
//function using selection sort to sort thru glossary vector words
void WordFinder::sort() {
  selectionSort(words);
}

//function to read glossary file and store words in a vector
void WordFinder::readWords(string filename) {
    string word;
    ifstream fin; 
    fin.open(filename.c_str());

    if (!fin)
    {
	 cerr << "Cannot open "<< filename << endl;
	 exit(1);
   }
   while (fin) {
            fin>> word; 
            words.push_back(word); 
   }
    fin.close();
  
}
//binary search algorithm to search for words in glossary vector
bool WordFinder::retrieveWords(const string& target) {
    int left = 0, right = words.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        int result = words[mid].compare(target);
       
        if (result == 0) {
            return true;
        } else if (result > 0) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return false; // target not found in array
}

//overloaded ostream operator to output list of words in glossary vector
ostream& operator << (ostream& out, WordFinder& wordList) {
   for(int i=0; i<wordList.words.size(); i++ ){
    out<< wordList.words[i]<<endl; 
   }
  return out; 
}