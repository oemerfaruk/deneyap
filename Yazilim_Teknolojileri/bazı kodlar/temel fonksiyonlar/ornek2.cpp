#include <iostream> // giriş/çıkış
#include <cstring> // karakter dizisi işlemleri
using namespace std;

/*
isalpha('A') // Harf mi?
isdigit('9') // Rakam mı?
toupper('g') // 'G' döndürür
*/

int main() {
    char ad[20];
    cout << "Adinizi giriniz: ";
    cin >> ad;

    for (int i = 0; i < strlen(ad); i++) {
        if (!isalpha(ad[i])) {
            cout << "Isminizde rakam olamaz!";
            return 0;
        }
    }
    cout << "Merhaba " << ad;
}
