#include <iostream>
using namespace std;

int topla(int a, int b = 0){
    return a + b;
}
// override
float topla(float a, float b){
    return a + b;
}
int eksilt(int a, int b = 0){
    return a - b;
}
// override
int eksilt(int a, int b, int c, int d=0){
    return a - b - c - d;
}


int main(){
    int sayi1 = 5;
    int sayi2 = 3;

    int result = topla(sayi1, sayi2);

    cout << result << endl;
    cout << eksilt(15,2) << endl;

    cout << topla(15.2, 7) << endl;
    cout << eksilt(20, 5, 3 ,7) << endl;


    return 0;
}