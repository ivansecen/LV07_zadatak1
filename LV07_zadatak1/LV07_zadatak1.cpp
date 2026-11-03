#include <iostream>
using namespace std;

int main() {
    char naredba;

    // U?itavanje znaka
    cin >> naredba;

    // Switch provjera s grupiranim velikim i malim slovima
    switch (naredba) {
    case 'N':
    case 'n':
        cout << "NAPRIJED" << endl;
        break;
    case 'L':
    case 'l':
        cout << "LIJEVO" << endl;
        break;
    case 'D':
    case 'd':
        cout << "DESNO" << endl;
        break;
    case 'S':
    case 's':
        cout << "STANI" << endl;
        break;
    default:
        cout << "NEPOZNATA NAREDBA" << endl;
        break;
    }
    return 0;
}