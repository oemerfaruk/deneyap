#include <iostream>
using namespace std;

int main(){
    int ay;
    cout << "12 - 1 - 2 Kış\n3 - 4 - 5 İlk Bahar\n6 - 7 - 8 Yaz\n9 - 10 - 11 Sonbahar" << endl;
    cout << "-------------------" << endl;
    cout << "Kaçıncı ay: ";
    cin >> ay;

    switch (ay){
        case 12:
        case 1:
        case 2:
            cout << "Kış" << endl;
            break;
        case 3:
        case 4:
        case 5:
            cout << "İlk Bahar" << endl;
            break;
        case 6:
        case 7:
        case 8:
            cout << "Yaz" << endl;
            break;
        case 9:
        case 10:
        case 11:
            cout << "Son Bahar" << endl;
            break;
        
        default:
            cout << "Geçersiz bir değer girdiniz." << endl;
            break;
    }

    return 0;
}