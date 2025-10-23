#include <iostream>
using namespace std;

string name = "oemerfaruk";

void selamla(int iter, string param = "Dünya!"){
    for(int i = 0; i < iter; i++){
        cout << "Merhaba " << param << endl;
    }
}
int topla(int a, int b, int c = 0, int d = 0){
    return a + b + c + d;
}

// iter fonksiyonlar -- kendini çağıran fonksiyonlar
int func(int param){
    if (param == 0)
        return param;
    return param + func(param - 1);
}
int topla2(int param){
    int result = 0;
    for(int i = 0; i <= param; i++){
        result += i; // result = result + i
    }
    return result;
}

int main(){
    // cout << name << endl;

    // selamla(5);
    // selamla(3, "oemerfaruk");

    // int result = topla(4,5,6) + 7;

    // cout << result + 2 << endl;

    cout << func(5) << endl;

    return 0;
}