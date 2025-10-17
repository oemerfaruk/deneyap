#include <iostream>
#include <cstring>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    char sifre[9];
    for (int i = 0; i < 8; i++) {
        char karakter;
        do {
            karakter = rand() % 255;
        } while(!isalnum(karakter));
        sifre[i] = karakter;
    }
    sifre[8] = '\0';
    cout << "Sifreniz: " << sifre << endl;
}
