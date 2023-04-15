#include <iostream> 
#include <string> 
#include <ctime>
#include "letterGrid.h"
#include "wordFinder.h"
#include <stdlib.h>
#include <iomanip>
using namespace std;
 

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
        cout<< "Enter a input filename to read from (e.g input15.txt): "; 
        cin>>filename; 

        /* (2) read the data from input files for the grid and glossary,
        (3) sorts the glossary vector using SelectionSort, and*/

        LetterGrid ltg(filename); //reads the data from input file into the letter grid 
       
       int sortType; 
       int i=0;
        do {

        if (i>0) {
            cout<<"Sorry that wasn't an option, Try again!"<<endl;
        }

        cout<<"Choose number of the sorting method you would like to use\n"
            <<"[1] Selection Sort\n"
            <<"[2] Quick Sort\n"
            <<"[3] Heap Sort\n"
            <<"Enter option: "; 
        cin>> sortType; 
       }
       while (sortType<=1 || sortType >=3); 

        WordFinder wfd; 
        string typeW = wfd.sort(sortType); //reads the data from glossary into a wordfinder vector and sorts it using a sorting algorithm 
        cout<< "using " <<typeW <<" to sort the list..."<<endl;
        matchWords(wfd, ltg); //calls match words which prints out the candidate functions 
    }
int main(){
    char key; 

   do{

    srand (time(NULL)); 
    time_t start, finish;  
    time(&start);  

    wordSearch(); 

    time(&finish); 
    cout<<endl; 

    cout << "Time required to sort= " << difftime(finish, start) << " seconds"<<endl;
    cout<<"Enter any key to continue or 1 to exit:";
    cin>>key;  
   }
   while (key !='1');
   {
    /* code */
   }
   
}