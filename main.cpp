#include <iostream> 
#include <string> 
#include "letterGrid.h"
#include "wordFinder.h"
using namespace std;

void matchWords(WordFinder wfd, LetterGrid ltg){

    /* write code here */

    /*prints out Found: pos_x( row ), pos_y( col ) –-> wordFound
    row and col should be the actual indices of the starting location of words found from the grid.*/
}

void wordSearch(){
        string filename; 
        /* (1) asks the user to input and reads the name of the grid file from the keyboard (e.g., input15.txt, input30.txt, or input50.txt)*/
        cout<< "Enter a input filename to read from: "; 
        cin>>filename; 

        LetterGrid grid(filename); 
        //grid.printLetters(); 
        

        /*read the data from input files for the grid and glossary, */


        /*sorts the glossary vector using SelectionSort*/


        /*prints out candidate words from the grid that can be found in the glossary by calling the matchWords() function.*/


    }
int main(){
    
    wordSearch(); 
}