#include <iostream>
#include <ctime>
#include <cmath>

void hb(std::string n);

int main(){

    std::string name = "Rok"; 

    hb(name);
    hb(name);
    hb(name);
    hb(name);
    hb(name);

    return 0;
}

void hb(std::string n){
    std::cout << "HB " << n << "!\n";
}