# Algo_project_3
Project #3
Submit a zipped folder containing your C++ code files and a PDF with your sample outputs. Your folder should include an appropriate Makefile ready to compile your program files (On the COE Linux Machines) (This project should be done in teams of 2 or 3 students)

Word Search Project. The sorting algorithms and the matrix file are attached. A glossary file, and other sample grid files are also attached.

Annotated Lecture 25 file: Lecture25_Word_Search_Annotated.pdf

Annotated Project Description: Project_3_Description_Annotated.pdf  

Matrix class: d_matrix-1.hDownload d_matrix-1.h

All Sorting Algorithms: sort_algorithms.h Download sort_algorithms.h 

======== input files ========

Glossary.txtDownload Glossary.txt

input15.txt Download input15.txt 

input30.txtDownload input30.txt

input50.txt Download input50.txt 

======== sample output files =======

Just to verify your sorting is working correctly: Glossary-sorted.txtDownload Glossary-sorted.txt

15x15s.txt Download 15x15s.txt 

30x30s.txt Download 30x30s.txt 

50x50s.txt Download 50x50s.txt 

Note: Locations of found words is not included in the sample outputs above. Your output should include the locations (row, col) as indicated in the write-up below.

For testing your program in grids different from those provided, you can generate new grids at http://tools.atozteacherstuff.com/word-search-maker/wordsearch.phpLinks to an external site. and create new files

Project Description:

Write a program that solves a word search puzzle. The program reads an  grid of letters from a file and the list of k words from glossary file with unsorted words. The program prints out all the candidate words from the grid that can be found in the glossary. Candidate words can be found in the grid by starting from any letter and reading left, right, up, down, or along any of the four diagonals. Words can also wrap around the edges of the grid. Words must be at least 5 characters long. Even though some words in the glossary are less than 5 characters long, your algorithm should only match words with at least 5 characters.

The goal is to find an algorithm that solves this problem that runs as quickly as possible for large n and k. Several sample word search puzzle grids are also provided.

Part a

Implement a class called WordFinder that reads the words from the glossary file and stores them in a vector, and which includes:
    (a) a function to read the words from the glossary file,

    (b) an overloaded output operator “<< “ to print the word list, e.g., cout << words; prints the entire list of words from the vector.

    (c) a function that sorts the words using SelectionSort algorithm. The sort algorithms studied in class are attached above. Do not use the system library STL sort function.

    (d) a function to handle word lookups using binary search algorithm.

 

Implement a class called LetterGrid that reads the letters in the grid from a file and stores them in a matrix.
     (a) Also provide a function for this class that can print out the n x n grid of letters read from the file

   NOTE: The above two classes can have additional helper functions where necessary.

Implement a global function matchWords() that is passed the WordFinder and the LetterGrid obects as parameters and prints out candidate words that can be found in the glossary. That is, scan the grid to get all possible words and search each possible word in the glossary, using binary search algorithm from the WordFinder class. If found, print out the word using the format:
   Found: pos_x( row ), pos_y( col ) –-> wordFound

row and col should be the actual indices of the starting location of words found from the grid.

 

Implement a global function wordSearch() which
    (1) asks the user to input and reads the name of the grid file from the keyboard (e.g., input15.txt, input30.txt, or input50.txt)

    (2) read the data from input files for the grid and glossary, 

    (3) sorts the glossary vector using SelectionSort, and

    (4) prints out candidate words from the grid that can be found in the glossary by calling the matchWords() function.

Example grid:

Picture1.png

Part b

In this part, solve the word search puzzle by using the QuickSort algorithm and the HeapSort algorithm to sort the words in the glossary.

Implement a member function of class WordFinder that sorts the words using QuickSort.
Implement a member function of class WordFinder that sorts the words using HeapSort.
Modify the global function wordSearch() which reads the name of the grid file from the keyboard and prints out all candidate words that can be found in the glossary. The function should also ask the user to input an integer value [1, 2, or 3] used to select the sorting algorithm to use: (SelectionSort, QuickSort, or HeapSort).
Implement the timing functionality used to evaluate the sorting algorithms in the previous homework to determine how long (in seconds) each of the 3 sorting algorithms take to sort the vector of words from the glossary file. 
Note: They all use Binary Search to look up the words. No need to time this. Only time the sort algorithm selected.
Run your program 3 times with the following user inputs and note and submit your sample outputs with your final submission:
   ./search (Run 1)
   Name of Grid file? input15.txt
   Specify Sort Algorithm [1, 2, or 3]: 1  (for SelectionSort)

   ./search (Run 2)
   Name of Grid file? input30.txt
   Specify Sort Algorithm [1, 2, or 3]: 2  (for QuickSort)

   ./search (Run 3)
   Name of Grid file? input50.txt
   Specify Sort Algorithm [1, 2, or 3]: 3  (for HeapSort)

// sample output:

Using Selection Sort to sort the list...
Time required to sort = 123 seconds

// Then print the words found in the format:

Found: pos_x( row ), pos_y( col ) –-> wordFound
