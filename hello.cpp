#include <iostream>
#include <vector>

typedef std::string Astr_t;
// ali bolje je koristiti using
using str_t = std::string;

namespace f{
    int x = 1;
}

namespace s{
  int x = 2;  
} 


int main(){
    // ide gas bato
    /*
        Ide gas
    */



   const double PI = 3.14159;

   std::string name = "Rok";

    std::cout << "I like ass" << std::endl;
    std::cout << "Hello " << name << "\n";
    std::cout << "I like ass!\n";

//namespace
    int x = 0;

    using std::cout;
    using std::cin;
    using std::string;

    cout << x << '\n';
    cout << f::x << '\n';
    cout << s::x << '\n';

    str_t ime = "Gaser";
    cout << ime;


    return 0;
}