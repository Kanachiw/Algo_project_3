#include <iostream>
#include <string> 
#include "d_matrix.h"
#include <fstream>
using namespace std;  

const char Blank = ' '; 
char ch; 
int row,col; 

/*reads the letters in the grid from a file and stores them in a matrix*/ 
LetterGrid::LetterGrid(string filename)
{

ifstream fin;
//opening the file 
fin.open(filename);
if (!fin)

{
	cerr << "Cannot open "<< filename << endl;
	exit(1);
}
 // Read the board size from the first two integers in the file
fin >> boardSizeRow >> boardSizeCol;

ltgMatrix.resize(boardSizeRow, boardSizeCol);

initializeGrid(fin); //reading each line drom the file and adding it to the board 

fin.close(); //closing the file 

    
}
void LetterGrid::clearLetters(){

    
   for (int i = 0; i < boardSizeRow; i++){
   
      for (int j = 0; j < boardSizeCol; j++)
      {
        
         ltgMatrix[i][j] = Blank;


      }
   }
}

void LetterGrid::initializeGrid(ifstream &fin){
clearLetters();	// clear the board first

//inputs the values into the matrix 
for (int i = 0; i < boardSizeRow; i++)
   { 

      for (int j = 0; j < boardSizeCol; j++)
	    {
	       fin>> ch;
        
           ltgMatrix[i][j] = ch; 
		}
    }
    
}
void LetterGrid::printLetters(){

    //prints out the letters in the matrix 
    cout<<"printing grid...."<<endl;
	for (int i = 0; i < boardSizeRow; i++)
    {
      for (int j = 0; j < boardSizeCol; j++)
	    {

           cout<<ltgMatrix[i][j]<<" "; 
		}
        cout<<endl; 
    }
    
}
