#include <iostream>
using namespace std;

string name = "kahve kokan fizikçi";

void selamla(){
    cout << "Merhaba " << name << endl;
}

void arafunc(){
    string name = "Akıncılar";
    cout << "ara fonksiyon " << name << endl;
}

void bye(){
    cout << "Güle güle " << name << endl;
}



int main(){

    selamla();

    arafunc();

    name = "Ömer Faruk";
    
    arafunc();

    bye();

    return 0;
}