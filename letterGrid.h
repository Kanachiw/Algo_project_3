/*
@file letterGrid.h */
 
#ifndef _letterGrid
#define _letterGrid
#include <iostream>
#include <string> 
#include "d_matrix.h"



/*
class called LetterGrid that reads the letters in the grid from a file and stores them in a matrix.
*/
class LetterGrid{
    private:
    matrix<char> ltgMatrix; 
    int GridSizeRow; //Grid size row count
    int GridSizeCol; // Grid size column count

    /* private helper funtion to ensure the grid is cleared before i add new letters*/
    void clearLetters(); 

    /*privat helper funtion to create the grid */ 
    void initializeGrid(ifstream &fin); 
  
    public: 

    /*read letters into a grid 
    @param n is the filename of the input file*/
    LetterGrid(string filename); 

    /*prints the letters of the grid */
    void printLetters(); 
}; 

#include "letterGrid.cpp"
#endif 
