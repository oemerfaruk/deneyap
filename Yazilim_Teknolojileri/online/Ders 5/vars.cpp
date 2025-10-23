#include <iostream>
// global variables
string name = "Kahvekokanfizikçi";

void selamla(){
    name = "oemerfaruk"
    std::cout << name << std::endl;
}

int main(){
    // yerel değişkenler  - local variables
    string name = "Ömer Faruk";
    
    int a, b;

    const float pi = 3.14;
    const float g = 9.0;
    const int h_ion = 350;

    char c = 'A';
    char d = 72;

    std::cout << pi << std::endl;
    std::cout << d << "-" << int(d) << std::endl;
    std::cout << char(d + 15) << std::endl;
    std::cout << name << std::endl;
    return 0;
}