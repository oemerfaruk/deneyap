#include <iostream>
using namespace std;

class Araba{
    private:
        int yakit;
        int yolcu;
        int hiz;
    public:
        void setYakit(int a){ yakit = a; }
        void setYolcu(int b){ yolcu = b; }
        void setHiz(int c){ hiz = c; }

        string surusGuvenligi(){
            if(yakit <= 5) return "Kritik yakıt seviyesi, hareket etme";
            else if(yolcu > 5) return "Çok fazla yolcu var, sürüş güvenli değil.";
            else if(hiz > 140) return "Araç aşırı hızlı, artık kullanma";
            else return "güvenli sürüş";
        }

        void arabaDurum(string name){
            cout << "Araba: " << name << endl
                << "Yakıt: " << yakit << "%" << endl
                << "Yolcu: " << yolcu << " Kişi" << endl
                << "Hız: " << hiz << " km/saat" << endl
                << "------" << endl;
        }
};

int main(){
    Araba araba1, araba2, araba3, araba4;

    araba1.setYakit(3);
    araba1.setYolcu(2);
    araba1.setHiz(90);

    araba2.setYakit(88);
    araba2.setYolcu(6);
    araba2.setHiz(75);

    araba3.setYakit(95);
    araba3.setYolcu(3);
    araba3.setHiz(150);

    araba4.setYakit(95);
    araba4.setYolcu(3);
    araba4.setHiz(100);

    araba1.arabaDurum("araba 1");
    cout << araba1.surusGuvenligi() << endl << "#####" << endl;

    araba2.arabaDurum("araba 2");
    cout << araba2.surusGuvenligi() << endl << "#####" << endl;

    araba3.arabaDurum("araba 3");
    cout << araba3.surusGuvenligi() << endl << "#####" << endl;

    araba4.arabaDurum("araba 4");
    cout << araba4.surusGuvenligi() << endl << "#####" << endl;
}