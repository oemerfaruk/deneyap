#include <iostream>
using namespace std;

class Araba{
    public:
        string marka;
        int yil;
        void bilgi(){
            cout << "Marka: " << marka << ", yıl: " << yil << endl;
        }
};


int main(){
    // Public değerlere erişebilir
    Araba a1;
    a1.marka = "TOGG";
    a1.yil = 2025;
    a1.bilgi();

    Araba a2;
    a2.bilgi();

    return 0;
}