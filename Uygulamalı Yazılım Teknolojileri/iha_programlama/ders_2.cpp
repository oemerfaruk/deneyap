#include <iostream>
#include <string>
using namespace std;

string* gorevHazirigiKontrol(int iha[6][4]){
    static string durum[6];

    for(int i = 0; i < 6; i++){
        if (iha[i][0] > 10){
            durum[i] = "Ağır yük, kalkış reddedildi!";
        }
        else if (iha[i][1] < 50){
            durum[i] = "Düşük pil seviyesi, kalkış reddedildi!";
        }
        else if (iha[i][2] < 50){
            durum[i] = "GPS sinyali zayıf, kalkış reddedildi!";
        }
        else if (iha[i][3] > 40){
            durum[i] = "Rüzgar çok şiddetli, kalkış reddedildi!";
        }
        else{
            durum[i] = "Görev için hazır! Uçuşa izin verildi!";
        }
    }
    return durum;
}

int main(){
    int iha[6][4] = {
        // yük - pil - gps - rüzgar
        {8,70,60,20},   // sorun yok
        {12,90,80,15},  // yük
        {5,35,55,10},   // pil
        {9,60,40,45},   // gps
        {7,50,70,30},   // sorun yok
        {11,80,65,25}   // yük
    };

    string* durum = gorevHazirigiKontrol(iha);

    cout << "İHA Görev hazırlığı durumları:" << endl;
    for(int i = 0; i < 6; i++){
        cout << "IHA " << i + 1 << ": " << durum[i] << endl;
    }
    
    
    return 0;
}