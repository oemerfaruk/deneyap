#include <iostream>
using namespace std;

int main(){
    cout << "3'e tam bölünen öğrenci numaraları" << endl;


    for(int i = 1; i <= 160; i++){
        if(i == 50){
            // break;
            continue;
        }

        // if(i % 3 == 0){
            //cout << "Öğrenci numarası: " << i << endl;
            // continue;
        // }

        cout << "Öğrenci numarası: " << i << endl;
    }

    return 0;
}