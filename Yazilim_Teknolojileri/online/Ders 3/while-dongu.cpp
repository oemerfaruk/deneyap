#include <iostream>
using namespace std;

int main(){
    int a = 1;
    /*
    while(a <= 10){
        if(a % 2 == 0 ){
            a++;
            continue;
        }
        else{
            cout << a << endl;
            a++;
        }
    }
    */

    while(true){
        cout << "irtifa: " << a << " km" << endl;
        if (a > 100){
            cout << "Artık uzaydasınız..." << endl;
            break;
        }
        a++;
    }

    cout << "while döngüsü bitti" << endl;

    return 0;
}