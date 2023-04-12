#include <iostream> 
#include <string> 
#include <ctime>
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
    srand (time(NULL)); 
    time_t start, finish;  
    time(&start);  

    wordSearch(); 

    time(&finish); 
    cout<<endl; 

    cout << "Time required to sort= " << difftime(finish, start) << " seconds";
}