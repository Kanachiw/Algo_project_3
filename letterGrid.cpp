#include <iostream>
#include <string> 
#include "d_matrix.h"

#include <fstream>
using namespace std;  

const char Blank = ' '; 
char ch; 
int row,col; 

/*reads the letters in the grid from a file and stores them in a matrix*/ 
LetterGrid::LetterGrid(const string &filename)
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
fin >> GridSizeRow >> GridSizeCol;

ltgMatrix.resize(GridSizeRow, GridSizeCol);// resixe the grid 

initializeGrid(fin); //reading each line drom the file and adding it to the board 

fin.close(); //closing the file 

    
}
void LetterGrid::clearLetters(){

    
   for (int i = 0; i < GridSizeRow; i++){
   
      for (int j = 0; j < GridSizeCol; j++)
      {
         //setting all the letters to blank characters 
        
         ltgMatrix[i][j] = Blank;


      }
   }
}

void LetterGrid::initializeGrid(ifstream &fin){
clearLetters();	// clear the board first

//inputs the values into the matrix 
for (int i = 0; i < GridSizeRow; i++)
   { 

      for (int j = 0; j < GridSizeCol; j++)
	    {
         if ( ltgMatrix[i][j]== ' ')
         {
          fin>> ch;
        
           ltgMatrix[i][j] = ch; 
         }
         else
         {
            cerr <<"issue with clearing board"<<endl;
            exit(1); 
         }
         
	       
		}
    }
     
}
void LetterGrid::printLetters(){

    //prints out the letters in the matrix 
    cout<<"printing grid...."<<endl;
	for (int i = 0; i < GridSizeRow; i++)
    {
      for (int j = 0; j < GridSizeCol; j++)
	    {
           cout<<ltgMatrix[i][j]<<" "; 
		}
        cout<<endl; 
    }
}
int LetterGrid::getRowSize(){
  return GridSizeRow;
}

int LetterGrid::getColSize() {
  return GridSizeCol; 
}

int LetterGrid::getLetter(const int &x, const int &y) {
  return ltgMatrix [x][y]; 
}




