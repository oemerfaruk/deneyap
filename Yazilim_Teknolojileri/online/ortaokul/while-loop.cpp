#include <iostream>
using namespace std;

int main(){
    int a = 0;

    // while(a <= 5){
    //     cout << a << ". Merhaba, Dünya!" << endl;
    //     a++;
    // }

    while(true){
        cout << "İrtifa: " << a << " km" << endl;

        if(a > 100){
            cout <<   "Tebrikler, artık uzaydasınız.." << endl;
            break;
        }
        
        a++;
    }

    return 0;
}