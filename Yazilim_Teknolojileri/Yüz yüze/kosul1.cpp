#include <iostream>
using namespace std;

int main(){
    int a,b,c ;

    cout << a << ">"<< b << ">"<< c << endl;
    cout << " A sayisini girin:\t";
    cin >> a;

    if(a > 0){
        cout << "Sayi pozitif" << endl;
    }
    else if(a < 0){
        cout << "Sayi negatif" << endl;
    }
    else{
        cout << "sayi sifir" << endl;
    }

    return 0;
}