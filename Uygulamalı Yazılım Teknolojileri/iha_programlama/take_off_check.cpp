#include<iostream>
using namespace std;

int wind(int speed){
    if (speed > 40) return 0;
    else return 1;
}
int gps(int signal){
    if (signal < 50) return 0;
    else return 1;
}
int battery(int battery){
    if (battery < 40) return 0;
    else return 1;
}
int weight(int weight){
    if (weight > 10) return 0;
    else return 1;
}
void status(int w,int g, int b,int we){
    if(!wind(w) || !gps(g) || !battery(b) || !weight(we)){
        if(!wind(w)) cout << "\t- Şiddetli rüzgar\n";
        if(!gps(g)) cout << "\t- GPS Sinyali yetersiz\n";
        if(!battery(b)) cout << "\t- Düşük batarya seviyesi\n";
        if(!weight(we)) cout << "\t- Yüksek ağırlık\n";

        cout << "sebeblerinden dolayı uçuşa izin verilmemektedir.";

    }
    else cout << "Uçuş için elverişli şartlar." << endl;
}

int main(){
    int w, g, b, we;
    cout << "Rüzgar hızını girin (km/s): ";
    cin >> w;
    cout << "GPS sinyal gücü: ";
    cin >> g;
    cout << "Batarya seviyesini girin: ";
    cin >> b;
    cout << "Ağırlık giriniz(kg): ";
    cin >> we;

    cout << endl << "------------" << endl;

    status(w,g,b,we);

    return 0;
}