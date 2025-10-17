#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(0); // Sabit seed
    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;


    srand(time(0)); // Sistemin o anki zamanını seed olarak alır
    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;

    
    srand(time(0)); // seed ayarı
    int sayi = rand() % 100; // 0–99 arası
    cout << sayi << endl;
}
