/*
@file letterGrid.h */
 
#ifndef _letterGrid
#define _letterGrid
#include <iostream>
#include <string> 
#include "d_matrix.h"



/*
Implement a class called LetterGrid that reads the letters in the grid from a file and stores them in a matrix.
     (a) Also provide a function for this class that can print out the n x n grid of letters read from the file

   NOTE: The above two classes can have additional helper functions where necessary.
*/
class LetterGrid{
    private:
    matrix<string> ltgMatrix; 
    public: 
    LetterGrid(string filename); 
    void printletters(); 
}; 

#include "letterGrid.cpp"
#endif 