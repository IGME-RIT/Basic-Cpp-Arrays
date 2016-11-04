/*
Arrays
(c) 2016
Author: David Erbelding
Written under the supervision of David I. Schwartz, Ph.D., and
supported by a professional development seed grant from the B. Thomas
Golisano College of Computing & Information Sciences
(https://www.rit.edu/gccis) at the Rochester Institute of Technology.
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or (at
your option) any later version.
This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/



// Include iostream for output during the program.
#include <iostream>
// Use std to avoid writing std:: everywhere.
using namespace std;


// Start of main function
int main() 
{
    // An array is a block of memory that contains multiple objects of the same type in a row.
    {
        // Arrays allow you to manage several of the same object without needing unique names for all of them.

        // With an array, instead of doing this:
        int number1, number2, number3, number4, number5, number6, number7, number8, number9, number10;

        // You can do this:
        int numberArray[10]; // this makes space for 10 integers.



                                    // You can't do this though.
        //int length = 3;           // The length of an array has to be known when your code is compiled.
        //int badArray[length];     // To us it may be obvious that the length won't change, but the compiler can't be sure. )







        // Instead of this:
        number1 = 5;

        // Do this:
        numberArray[0] = 5; // The number inside of [] is the offset in memory to the object.
                            // Since the number is added to the memory position of numberArray, the first element is at index 0.

        // this is much more convenient when initializing each variable:
        number1 = 1;
        number2 = 4;
        number3 = 9;
        number4 = 16;
        number5 = 25;
        number6 = 36;
        number7 = 49;
        number8 = 64;
        number9 = 81;
        number10 = 100;

        // Since the offset is a number we can do it in a for loop
        for (int i = 0; i < 10; i++)
        {
            numberArray[i] = (i+1)*(i+1);
        }

        // Since the offset is a number we can do it in a for loop
        cout << "Printing numbers from array:" << endl;
        for (int i = 0; i < 10; i++)
        {
            cout << numberArray[i] << endl;
        }
    }
    cin.get();




    {
        // All of the values in your array will contain junk data.
        int uninitializedArray[5];

        cout << "printing uninitialized array:" << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << uninitializedArray[i] << endl;  // Index into array and print number.
        }
        cin.get();



        // It's possible to initialize the values in an array like this:
        int initializedArray[5] = { 2, 33, 35, 90, 9 };

        cout << "printing initialized array:" << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << initializedArray[i] << endl;    // Index into array and print number
        }
        cin.get();



        // If you don't give enough elements, only those are initialized.
        int partlyInitializedArray[5] = { 1, 2, 3 };

        cout << "printing partially initialized array:" << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << partlyInitializedArray[i] << endl;    // Index into array and print number
        }
        cin.get();



        // If you don't give any elements, they are all defaulted.
        int defaultInitializedArray[5] = {};

        cout << "printing default initialized array:" << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << defaultInitializedArray[i] << endl;    // Index into array and print number
        }
        cin.get();

        // end of this section.
    }





    {
        // fun example: make an array of characters.
        char letters[24] = { 'N', 'e', 'v', 'e', 'r', ' ', 'g', 'o', 'n', 'n', 'a', ' ', 'g', 'i', 'v', 'e', ' ', 'y', 'o', 'u', ' ', 'u', 'p', '.' };

        cout << "printing an array of characters:" << endl;
        for (int i = 0; i < 24; i++)
        {
            cout << letters[i]; // no endl, print all characters on the same line.
        }

        cout << endl;
    }
    cin.get();




    return 0;   // End Program.
}