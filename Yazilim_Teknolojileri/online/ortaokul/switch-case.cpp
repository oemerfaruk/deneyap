#include <iostream>
using namespace std;
int main(){
    char grade;

    cout << "notunu gir: ";
    cin >> grade;

    switch (grade){
        case 'A':
            cout << "Çok iyi not almışsın."<< endl; // end line
            break;
        case 'B':
            cout << "İyi not almışsın"<< endl;
            break;
        case 'C':
            cout  << "Geçtin ama daha iyisi olabilirdi" << endl;
            break;
        case 'D':
            cout << "Kaldın"<< endl;
            break;
        
        default:
            cout << "Geçersiz not girdiniz." << endl;
            break;
    }
    return 0;
}