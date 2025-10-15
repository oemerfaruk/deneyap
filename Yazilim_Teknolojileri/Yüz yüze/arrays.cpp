#include <iostream>
using namespace std;

int main(){
    int array[5] = {1, 2, 3, 4, 5};
    char c[]={'o','m','e','r',65};
    string name = "Oemer Faruk";
    // cout << c[4] << endl;
    // cout << name[2] << endl;
    

    int matris[2][3] = {{1,2,3},{4,5,6}};

    for( int i = 0; i < 2; i++){
        for(int k = 0; k < 3; k++ ){
            cout << matris[i][k] << endl;
        }
    }

    
    return 0;
}