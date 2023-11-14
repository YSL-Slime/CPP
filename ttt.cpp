#include <iostream>
#include <ctime>

void draw(char *spaces);
void pM(char *spaces, char p);
void cM(char *spaces, char c);
bool W(char *spaces, char p, char c);
bool T(char *spaces);

int main(){
    char spaces[9];
    for(int i = 0; i < 9; i++) spaces[i] = ' ';
    char p = 'X';
    char c = 'O';
    int run = 1;

    draw(spaces);

    while(run){
        pM(spaces, p);
        draw(spaces);
        cM(spaces, c);
        draw(spaces);
    }

    return 0;
}

void draw(char *spaces){
    std:: cout << '\n';
    std:: cout << "   |   |   " << '\n';
    std:: cout << " " << spaces[0] <<" | "<< spaces[1] <<" | " << spaces[2] <<" \n";
    std:: cout << "___|___|___" << '\n';
    std:: cout << "   |   |   " << '\n';
    std:: cout << " " << spaces[3] <<" | "<< spaces[4] <<" | " << spaces[5] <<" \n";
    std:: cout << "___|___|___" << '\n';
    std:: cout << "   |   |   " << '\n';
    std:: cout << " " << spaces[6] <<" | "<< spaces[7] <<" | " << spaces[8] <<" \n";
    std:: cout << "   |   |   " << '\n';
    std:: cout << '\n';
}

void pM(char *spaces, char p){
    int x;
    std::cout << "Your move: ";
    std:: cin >> x;
    spaces[x] = p; 
}

void cM(char *spaces, char c){
    int x;
    srand(time(NULL));
    while(1){
        x = rand() % 9;
        if(spaces[x] == ' '){
            spaces[x] = c;
            break;
        }
    }
}

bool W(char *spaces, char p, char c){
    return 0;
}

bool T(char *spaces){
    return 0;
}