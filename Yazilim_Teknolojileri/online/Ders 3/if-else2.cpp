#include <iostream>
using namespace std;

int main(){
    int irtifa;

    cout << "İrtifa (km): ";
    cin >> irtifa;

    if(irtifa > 0){
        if(irtifa > 0 && irtifa < 50){
            cout << "Daha çok yolunuz var" << endl;
        }
        else if(irtifa >= 50 && irtifa <= 100){
            cout << "Az kalmış, pes etme" << endl;
        }
        else{
            cout << "Helal olsun, artık uzaydasın Aslan parçası.\nSanki Alper Gezeravcı..." << endl;
        };
    }
    else if(irtifa == 0){
        cout << "Sen daha yerdesin. Önce havalan." << endl;
    }
    else{
        cout << "Sen yanlışlıkla denizaltına binmişsin!" << endl;
    }
    
    
    return 0;
}