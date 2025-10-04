#include <iostream>
using namespace std;

int main(){
    char grade;
    cout << "Harf notunu girin: ";
    cin >> grade;

    switch (grade)
    {
    case 'A':
        cout << "Mukkemel gectin" << endl;
        break;
    // ....
    
    default:
        cout << "Gecersiz not" << endl;
        break;
    }

    return 0;
}