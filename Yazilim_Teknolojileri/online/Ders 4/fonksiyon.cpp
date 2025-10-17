#include <iostream>
using namespace std;

void selamla(string name = "İnsan"){
    cout << "Merhaba " << name << endl;
}


int main(){
    selamla("kahvekokanfizikçi");

    selamla();

    return 0;
}