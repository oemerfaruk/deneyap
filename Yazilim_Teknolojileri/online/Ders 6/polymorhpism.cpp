#include <iostream>
using namespace std;

// Base Class - Temel Sınıf
class Hayvan{
    public:
        virtual void ses(){
            cout << "Hayvan sesleniyor..." <<endl;
        }
};

// Derived Class - Türetilmiş Sınıf
class Kedi:public Hayvan{
    public:
        void ses() override{
            cout << "Miyav..." << endl;
        }
};


int main(){

    Kedi badem;

    badem.ses();

    return 0;
}