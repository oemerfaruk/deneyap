#include <iostream>
using namespace std;

// Base Class - Temel Sınıf
class Hayvan{
    public:
        void yemek(){cout<< "Yemek yeniyor...\n";}
};

// Derived Class - Türetilmiş Sınıf
// Hayvan sınıfı miras alındı - Inheritance
class Kedi:public Hayvan{
    public:
        void miyav(){
            cout << "Miyav..." << endl;
        }
};
// Derived Class - Türetilmiş Sınıf
// Hayvan sınıfı miras alındı - Inheritance
class Kirpi:public Hayvan{
    public:
        void diken(){
            cout << "Diken fırlatıldı..." << endl;
        }
};

int main(){

    Kedi tekir;

    tekir.miyav();
    tekir.yemek();


    Kirpi sonic;
    sonic.diken();
    sonic.yemek();

    return 0;
}