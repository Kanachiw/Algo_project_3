#include <iostream>
#include <fstream>
#include <iomanip>
#include "sort_algorithms.h"
#include "d_matrix.h"
#include "WordFinder1.h"



WordFinder::WordFinder(string w) : words(w) {
  
}
//function using selection sort to sort thru glossary vector words
void WordFinder::sort() {
  selectionSort(glossary);
}
//function to read glossary file and store words in a vector
void WordFinder::readFile() {
  vector<string> glossary; 
  ifstream fin;
    string fileName = "Glossary.txt";
      fin.open(fileName.c_str());
      if (!fin) {
        cerr << "Cannot open 'Glossary.txt'" << endl; 
          exit(1);
      }        
      while (fin >> words) {
        glossary.push_back(words); //use matrix class to store in a vector
      }
      fin.close();
}
//binary search algorithm to search for words in glossary vector
int WordFinder::binarySearch(vector<string> glossary, const string& target) {
  int low = 0; 
  int high = glossary.size(); 

  while (low <= high) {
    int mid = (low + high) / 2; 

    if (glossary[mid] == target) {
      return mid;
    }
    else if (glossary[mid] < target) {
      low = mid + 1; 
    }
    else {
      high = mid - 1; 
    }
  }
  return -1; 
}
//overloaded ostream operator to output list of words in glossary vector
ostream& operator << (ostream& out, WordFinder& wordList) {
  out << wordList.words << endl; 
  return out;
}
