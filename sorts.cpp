#include <iostream>

void bubble(int a[], int s);

int main(){
    int a[] = {10, 5, 7, 3, 4, 2, 8, 1, 9, 6};
    int s = sizeof(a)/sizeof(a[0]);

    bubble(a, s);

    for(int i : a) std::cout << i << " ";
}

void bubble(int a[], int s){
    int t;
    for (int i = 0; i < s-1; i++){
        for (int j = 0; j < s-i-1; j++){
            if(a[j] > a[j + 1]){
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
        
    }
    
}