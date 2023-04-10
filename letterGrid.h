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
    int boardSizeRow;
    int boardSizeCol;  

    void initializeGrid(ifstream &fin); 
    void clearLetters(); 
    public: 
    
    LetterGrid(string filename); 
    void printLetters(); 
}; 

#include "letterGrid.cpp"
#endif 