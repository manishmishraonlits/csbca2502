#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{
    ofstream fout("sometext.txt");
    fout << "This is the first time we are working with files in C++.";
    fout.close();
    cout << "Aal is well!";
    return 0;
}