/*Jennifer Langford, 03/30/2022, SDEV-240-45
Week 2: Assignment 1 - File Output
*/
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream out("week2.txt");
    for (int i = 0; i < 15; ++i) {
        for (int t = 0; t <= i; ++t) {
            out << "a";
        }
        out << endl;
    }
    out.close();
    return 0;
}