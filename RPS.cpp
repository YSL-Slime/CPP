#include <iostream>
#include <ctime>

char getU();
char getC();
void W(char p, char c);

int main(){
    char player, computer;
    
    player = getU();
    computer = getC();

    std::cout << "You: " << player << " vs. Computer: " << computer << "\n";

    W(player, computer); 

    return 0;
}

char getU(){
    char x;
    std::cout << "Choose: R P S\n";
    std::cin >> x;
    return x;
}

char getC(){
    char y;
    srand(time(NULL));
    int x = rand() % 3;
    switch (x)
    {
    case 0:
        y = 'R';
        break;
    case 1:
        y = 'P';
        break;
    case 2:
        y = 'S';
        break;
    }

    return y;
}

void W(char p, char c){
    if ((p == 'R' && c == 'P') || (p == 'P' && c == 'S') || (p == 'S' && c == 'R')) std::cout << "YOU LOSE!";
    else if ((p == 'R' && c == 'S') || (p == 'P' && c == 'R') || (p == 'S' && c == 'P')) std::cout << "YOU WIN!";
    else std::cout << "A TIE!";
}