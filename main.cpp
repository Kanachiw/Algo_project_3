#include <iostream> 
#include <string> 
#include "letterGrid.h"
#include "wordFinder.h"
using namespace std;
/* Global function matchWords() that is passed the WordFinder and the 
LetterGrid objects as parameters and prints out candidate words that can be
found in the glossary. That is, scan the grid to get all possible words and
search each possible word in the glossary, using binary search algorithm
from the WordFinder class. If found, print out the word using the format: 
Found: pos_x(row), pos_y(col) --> wordFound*/
void matchWords(WordFinder wfd, LetterGrid ltg) {

  string word; 
  //Initialize rows and columns with the dimensions of given input word search
  int rows = ltg.getRowSize();
  int cols = ltg.getColSize();
  int x, y; 
  // Loop over every cell in the grid 
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
    // Loop over every possible direction from this cell
    for (int dx = -1; dx <= 1; dx++) {
      for (int dy = -1; dy <= 1; dy++) {
        x = i;
        y = j;
        // Skip the direction (0, 0) because that's the current cell
        if (dx == 0 && dy == 0) {
          continue;
        }
        //Reset string word
        word = ""; 
        // Start building the word by moving in the current direction
        while (true) {
          //Increment the index of the word
          word += ltg.getLetter(x, y);
          x += dx;
          y += dy;
          // Wrap around to the opposite side of the grid if we hit an edge
          if (x < 0) {
            x += rows;
          } 
          else if (x == rows) {
            x = 0;
          }
          if (y < 0) {
            y += cols;
          } 
          else if (y == cols) {
            y = 0;
          }
          // Stop building the word if we loop back around to the starting cell
          if (x == i && y == j) {
            break;
          }
          // Check if the current word is in the glossary and is greater than 5 characters long
          if (word.size() >= 5 && wfd.retrieveWords(word)) {
            //Print found words and their starting indices
            cout << "Found: pos_x(" << i << "), pos_y(" << j << ") --> " << word << endl;
          }
        }
      }
    }
  }
  }
}


void wordSearch(){
        string filename; 
        /* (1) asks the user to input and reads the name of the grid file from the keyboard (e.g., input15.txt, input30.txt, or input50.txt)*/
        cout<< "Enter a input filename to read from: "; 
        cin>>filename; 

        /*read the data from input files for the grid and glossary, */


        /*sorts the glossary vector using SelectionSort*/


        /*prints out candidate words from the grid that can be found in the glossary by calling the matchWords() function.*/


}

int main () {
    string filename = "input15.txt";
    WordFinder wfd = WordFinder();
    LetterGrid ltg = LetterGrid(filename);

    matchWords(wfd, ltg);
return 0;
}

