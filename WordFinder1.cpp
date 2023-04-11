#include <iostream>
#include <fstream>
#include <iomanip>
#include "sort_algorithms.h"
#include "d_matrix.h"
#include "WordFinder1.h"



WordFinder::WordFinder() {
  
}
//function using selection sort to sort thru glossary vector words
void WordFinder::sort() {
  selectionSort(words);
}

//function to read glossary file and store words in a vector
void WordFinder::readWords() {
  vector<string> words; 
  string word;
  ifstream fin;
    string fileName = "Glossary.txt";
      fin.open(fileName.c_str());
      if (!fin) {
        cerr << "Cannot open 'Glossary.txt'" << endl; 
          exit(1);
      }        
      while (getline(fin, word)) {
        words.push_back(word); //use matrix class to store in a vector
      }
      fin.close();
}
//binary search algorithm to search for words in glossary vector
bool WordFinder::retrieveWord(const string& target) { 
  int low = 0; 
  string word;
  int high = words.size() - 1; 
  while (low <= high) {
    int mid = (low + high) / 2; 
    if (words[mid] == word) {
      return true;
    }
    else if (words[mid] < word) {
      low = mid + 1; 
    }
    else { 
    high = mid - 1; 
    } 
  }
  return false;   
}
//overloaded ostream operator to output list of words in glossary vector
ostream& operator << (ostream& out, WordFinder& wordList) {
  out << wordList << endl; 
  return out;
}
