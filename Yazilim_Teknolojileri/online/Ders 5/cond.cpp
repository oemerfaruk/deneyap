#include<iostream>
using namespace std;

int number = 5;

void kosul1(){
    if(number == 5){
        int number = 3;
        cout << number << endl;
    }
    else
        cout << "Sayı 5 değil" << endl;
}
void kosul2(){
    switch (number){
    case 3:
        cout << "Sayı üç" << endl;
        break;
    case 5:
        cout << "Sayı beş" << endl;
        break;
    default:
        cout << "sayı üç ya da beş değil" << endl;
        break;
    }
}

int main(){
    cout << number << endl;
    kosul1();
    cout << number << endl;
    number = 3;
    kosul2();

    

    return 0;
}