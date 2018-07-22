/* 
 * Project: TwoDimensionArray
 * File:   main.cpp
 * Author: Jimmy Maher
 * Created on May 13, 2018, 5:07 PM
 * Copyright © 2018 James Meagher. All rights reserved.
 * Purpose: Demonstrate nested for loop by outputting a 2D Array.
 */

// Import input and output stream library
#include <iostream>

// Import the C standard library
#include <cstdlib>

int main( ) {
    
    using namespace std;
    
    // initialization and declare a two dimension array with
    // 2 rows and two columns, 4 elements total.
    int x [2][2] = {
        {1,2}, 
        {3,4}
    };
    
    // read the elements in array x and display to user.
    for(int j = 0; j < 2; j++) {
        
        for(int k = 0; k < 2; k++) {
            
            cout << "Element at x[" << j << "][" << k << "]: ";
            cout << x[j][k]<<endl;
        }// end of the inner for loop
    }// end of the outer for loop
     
    EXIT_SUCCESS;
}// end of main function

