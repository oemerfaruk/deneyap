#include <iostream>
using namespace std;

int main(){

    cout << "3'e tam bölünen öğrenci numaları" << endl;

    for(int i = 1; i <= 160; i = i + 3){
        // cout << i << endl;

        // if(i % 3 == 0){
        //     cout << i << endl;
        // }

        // if(i == 10){
        //     break;
        // }

        if (i % 10 == 0){
            continue;
        }
        cout << i << endl;
    }
    
    
    return 0;
}