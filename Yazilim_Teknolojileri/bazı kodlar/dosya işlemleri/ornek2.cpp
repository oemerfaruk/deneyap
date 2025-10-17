#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int ogrenciSayisi;
    ofstream dosya("sinav.txt");

    cout << "Kac ogrenci olacak: ";
    cin >> ogrenciSayisi;

    for(int i=0; i<ogrenciSayisi; i++) {
        float notu;
        cout << i+1 << ". ogrenci sonucu: ";
        cin >> notu;
        dosya << notu << endl;
    }
    dosya.close();
}
