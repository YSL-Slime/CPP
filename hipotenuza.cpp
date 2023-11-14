#include <iostream>
#include <cmath>

int main(){
    double a, b, c;
    
    std::cout << "Enter a: ";
    std::cin >> a;
    std::cout << "Enter b: ";
    std::cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << c;

    return 0;
}