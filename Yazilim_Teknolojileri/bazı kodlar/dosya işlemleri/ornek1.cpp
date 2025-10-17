#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream dosya("deneyap.txt");
    dosya << "Merhaba Deneyap!" << endl;
    dosya.close();
}
