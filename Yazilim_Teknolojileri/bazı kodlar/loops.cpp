#include<iostream>
using namespace std;

int number = 5;

int liste1[5] = {};
char liste2[] = {'o','e','m','e','r'};
int liste3[3] = {10,20,30};
float matris[2][3] = {{15,30,45},{20,40,60}};

void dongu1(){
    for(int i = 0; i < number; i++){
        cout << i << endl;
    }
}
void dongu2(){
    for(int i = 0; i < 5; i++){
        cout << liste2[i] << endl;
        cout << "------" << endl;
    }
}
void dongu3(){
    for(int i = 0; i < 2 ; i++){
        for( int k = 0; k < 3 ; k++){
            cout << matris[i][k] << endl;
            cout << "------" << endl;
        }
    }
}
void dongu4(int param = number){
    while (param < number){
        cout << param++ << endl;
    }
}

int main(){
    // dongu1();
    // dongu2();
    // dongu3();
    // dongu4(0);
    dongu4();

    return 0;
}