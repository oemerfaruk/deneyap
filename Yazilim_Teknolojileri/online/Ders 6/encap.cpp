#include <iostream>
using namespace std;

class BankaHesabi{
    private:
        int bakiye;
    public:
        BankaHesabi(){
            bakiye = 0;
        }
        void paraYatir(int miktar){
            bakiye += miktar; // bakiye = bakiye + miktar
            cout << "Para yatırıldı\nBakiye: " << bakiye << endl;
        }
        void paraCek(int miktar){
            if (miktar <= bakiye && miktar > 0){
                bakiye -= miktar;  // bakiye = bakiye - miktar
                cout << "Para çekildi\nBakiye: " << bakiye << endl;
            }
            else{
                cout << "Geçersiz turar..." << endl;    
            }
        }
        int bakiyeAl(){
            return bakiye;
        }
};

int main(){
    BankaHesabi hesap1;
    cout << hesap1.bakiyeAl() << endl;
    hesap1.paraYatir(100);
    hesap1.paraCek(50);
    hesap1.paraCek(75);

    return 0;
}