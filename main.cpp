//
// Created by Jennifer Langford on 3/24/22.
//
#include "std_lib_facilities.h"

int main()  // C++ programs start by executing the function main
{
    cout << "Hello, World!\n";  // output "Hello, World!"
    keep_window_open();
    /* wait for a character to be entered - This is a peculiarity/feature of Windows, not of C++.
     * keep_window_open is defined in std_lib_facilities.
     * The std lib can be found at https://www.stroustrup.com/Programming */
    return 0;
}
