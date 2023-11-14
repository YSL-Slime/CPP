#include <iostream>
#include <ctime>
#include <cmath>

int getD(const int n);
int sumOdd(const std::string cN);
int sumEven(const std::string cN);

int main(){
    std::string cN;
    int res = 0;

    std::cout << "Enter a card number: \n";
    std::getline(std::cin, cN);

    res = sumOdd(cN) + sumEven(cN);

    if(res % 10) std::cout << "Number " << cN << " is not valid!";
    if (!(res % 10)) std::cout << "Number " << cN << " is valid!";


    return 0;
}

int getD(const int n){
    return n % 10 + (n/10);
}

int sumOdd(const std::string cN){
    int sum = 0;
    for(int i = 1; i < 16; i+=2){
        sum += cN[i] - '0';
    }
    return sum;
}

int sumEven(const std::string cN){
    int sum = 0;
    for(int i = 0; i < 16; i+=2){
        sum += getD((cN[i] - '0') * 2);
    }
    return sum;
}