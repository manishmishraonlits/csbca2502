#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{
    string text;
    ifstream fin("sometext.txt");
    if (!fin)
    {
        cout << "File not found!";
        return 1; // Exit with an error code
    }
    fin >> text;
    fin.close();
    cout << text;
    cout << "Aal is well!";
    return 0;
}