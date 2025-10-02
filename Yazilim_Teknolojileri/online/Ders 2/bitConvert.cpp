#include <iostream>
using namespace std;

int main(){
    int a = 198; // 1100 0110
    int b = 135; // 1000 0111

    int c = a | b; // 1100 0111 - 199
    int d = a & b; // 1000 0110 - 134

    cout << "a | b sonucu:\t" << c << endl;
    cout << "a & b sonucu:\t" << d << endl;

    return 0;
}