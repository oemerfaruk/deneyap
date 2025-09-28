#include <iostream>
using namespace std;

int main(){
    const int r = 6378;
    const float pi = 3.14;
    const float G = 9.81;

    char c = 'D';
    bool varMi = true;

    int result1;
    float result2;


    cout << "Dunyanin yaricapi: " << r << endl;
    cout << "Pi: " << pi << "\n" << "G: " << G << endl;
    cout << "Gezegenizin adi \"dunya\". Ona iyi bakin" << endl;

    result1 = pi * r*r;
    result2 = pi * r*r;

    cout << result1 << endl << result2<< endl;

    return 0;
}