#include <iostream>

using std::cout;
using std::cin;
using str = std::string;

int main(){
    str name;
    cout << "Enter your name: ";
    // cin >> name; //jedna rijec
    std::getline(cin >> std::ws, name); //recenica

    cout << "Hello " << name << "!\n";

    return 0;
}