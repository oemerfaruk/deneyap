#include <iostream>
using namespace std;

int main(){

    char grade = 'A';

    cout << "Notunuzu girin: ";
    cin >> grade;

    switch (grade){
        case 'A':
            cout << "Mükemmel not" << endl;
            break;
        case 'B':
            cout << "İyi Not" << endl;
            break;
        case 'C':
            cout << "Geçtin ama daha iyisi olabilirdi" << endl;
            break;
        case 'D':
            cout << "Kaldın" << endl;
            break;
        
        default:
            cout << "Geçersiz not" << endl;
            break;
    }

    return 0;
}