#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Bir sayı girin: ";
    cin >> a;

    if(a > 0){
        cout << "Girdiğiniz sayı pozitifdir" << endl;
    }
    else if(a < 0){
        cout << "Girdiğiniz sayı negatifdir" << endl;
    }
    else{
        cout << "Girdiğiniz sayı sıfırdır" << endl;
    }

    return 0;
}