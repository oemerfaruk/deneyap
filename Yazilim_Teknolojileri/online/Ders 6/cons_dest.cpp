#include <iostream>
using namespace std;

class Insan{
    private:
        string ad;
        int yas;
        string sehir;
    public:
        // Yapıcı (Kurucu) fonksiyon - Constructor
        Insan(string n, int y, string s){
            ad = n;
            yas = y;
            sehir = s;
        }
        void bilgi(){
            cout << "Ad: " << ad << "\tŞehir: " << sehir << "\tYaş: " << yas <<endl;
        }
        // Yıkıcı fonksiyon - Destructor
        ~Insan(){
            cout << "Nesne silindi..." << endl;
        }
};

int main(){
    Insan insan1("Ömer Faruk", 28, "İstanbul");
    insan1.bilgi();

    return 0;
}