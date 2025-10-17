#include <iostream>
using namespace std;

int globalArray [10] = {};
int buyuk = 0;

void uret(){
    for (int i = 0; i < 10; i++){
        globalArray[i] = rand() % 101;
    }
}

void goster(){
    for (int i = 0; i < 10; i++){
        cout << i+1 << " eleman: " << globalArray[i] << endl;
    }
}

// 42 - 56 - 8 - 72 - 2 - 56 - 5
void bul(){
    int _ = 0;
    for(int i = 0; i < 10; i++){
        if (_ < globalArray[i]){
            _ = globalArray[i];
        }
    }
    buyuk = _;
}

void bul2(){
    int _ = 0;

    for(int i = 0; i < 10; i++){
        for(int k = 0; k < 10; k++ ){
            if(globalArray[i] > globalArray[k]){
                _ = globalArray[i];
            }
            else{
                _ = globalArray[k];
            }
        }
        if(_ > buyuk){
            buyuk = _;
        }
    }
}

void bul3(){
    for( int i = 0; i < 10; i++){
        if(globalArray[i] > buyuk){
            buyuk = globalArray[i];
        }
    }
}


int main(){
    // uret fonksiyonunu çağır
    uret();

    // goster fonksiyonunu çağır
    goster();

    // en büyük sayıyı bul
    bul();


    cout << "En büyük sayı: " << buyuk << endl;

    return 0;
}