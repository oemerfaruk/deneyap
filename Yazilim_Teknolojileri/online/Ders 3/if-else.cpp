#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Bir sayı girin: ";
    cin >> a;

    if(a > 0){
        cout << "Girdiğiniz sayı pozitif" << endl;
    }
    else if(a < 0){
        cout << "Girdiğiniz sayı negatif" << endl;
    }
    else{
        cout << "Girdiğiniz sayı 0" << endl;
    }


    cout << "if-else blokları bitti" << endl;
    
    
    return 0;
}