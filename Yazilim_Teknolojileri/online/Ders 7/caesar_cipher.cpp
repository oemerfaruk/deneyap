#include <iostream>
#include <string>
#include <cctype>
#include <fstream>
using namespace std;

void writeFile(string text, string fileName){
    ofstream file(fileName);

    file << text;
    file.close();
}

string readFile(string fileName){
    ifstream file(fileName); // sadece dosya okuma
    string satir, text;

    if(!file){
        // cout << "Dosya bulunamadı..." << endl;
        cerr << "Dosya bulunamadı..." << endl;
        return 0;
    }
    while (getline(file, satir)){
        text.append(satir+'\n');
    }
    file.close();

    return text;
}

string encrypt(string mes, int k){
    string enText;
    for( int i = 0; i < mes.length(); i++){
        enText.append(1, char(int(mes[i]) + k));
    }
    return enText;
}

string decrypt(string mes, int k){
    string deText;
    for( int i = 0; i < mes.length(); i++){
        deText.append(1, char(int(mes[i]) - k));
    }
    return deText;
}

int main(){
    string file_name, encryptedText, decryptedText;
    int key;

    cout << "Enter your file name: ";
    getline(cin, file_name);

    cout << "\nEnter your key: ";
    cin >> key;
    
    encryptedText = encrypt(readFile(file_name), key);
    writeFile(encryptedText, "encrypted_text.txt");

    decryptedText = decrypt(readFile("encrypted_text.txt"), key);
    writeFile(decryptedText, "decrypted_text.txt");

    return 0;
}