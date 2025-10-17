#include <iostream>
using namespace std;

int main(){
    // int a = rand() % 101;
    // cout << a << endl;

    int liste [5] = {};

    for(int i = 0; i < 5; i++){
        liste[i] = rand() % 101;
        cout << i << ". index: " << liste[i] << endl;
    }

    return 0;
}