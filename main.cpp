#include <iostream> 
#include <string> 
#include "letterGrid.h"
#include "wordFinder.h"
using namespace std;

void matchWords(WordFinder wfd, LetterGrid ltg) {

  string word; 
  //sort glossary of words before calling binary search function
  wfd.sort();
  //dont think this is the correct way to determine size of rows/cols but 
  //gridsizerow is private
  int rows = sizeof(ltg);
  int cols = sizeof(ltg); 
  // Loop over every cell in the grid 
  for (int i = 0; i < rows * cols; i++) {
    int row = i / cols;
    int col = i % cols;
    // Loop over every possible direction from this cell
    for (int dx = -1; dx <= 1; dx++) {
      for (int dy = -1; dy <= 1; dy++) {
        // Skip the direction (0, 0) because that's the current cell
        if (dx == 0 && dy == 0) {
          continue;
        }
        int x = row;
        int y = col;
        // Start building the word by moving in the current direction
        while (true) {
          //need to figure out a way to get indices from ltg matrix
          word += ltg.get(x, y);
          x += dx;
          y += dy;
          // Wrap around to the opposite side of the grid if we hit an edge
          if (x < 0) {
            x += rows;
          } 
          else if (x >= rows) {
            x -= rows;
          }
          if (y < 0) {
            y += cols;
          } 
          else if (y >= cols) {
            y -= cols;
          }
          // Stop building the word if we loop back around to the starting cell
          if (x == row && y == col) {
            break;
          }
          // Check if the current word is in the glossary
          if (word.size() >= 5 && wfd.retrieveWord(word)) {
            cout << "Found: pos_x(" << row << "), pos_y(" << col << ") - " << word << endl;
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