#include <iostream>
using namespace std;

int main(){
    int irtifa;
    cout << "irtifa (km): ";
    cin >> irtifa;

    if(irtifa > 0){
        if(irtifa > 0 && irtifa < 50){
            cout << "Daha çok tırmanman lazım" << endl;
        }
        else if(irtifa >= 50 && irtifa < 100){
            cout << "Az kaldı, pes etme." << endl;
        }
        else{
            cout << "Helal olsun aslan parçası, uzaya çıkmışsın.\nYoksa sen Alper gezeravcı mısın?" << endl;;
        }
    }
    else if(irtifa == 0) {
        cout << "Sen daha yerdesin, önce havalan." << endl;
    }
    else{
        cout << "Sen yanlışlıkla denizaltına binmişsin." << endl;
    }

    return 0;
}