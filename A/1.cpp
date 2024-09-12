#include <iostream>
using namespace std;

void ord(int *a, int *b);

int main(){
    int x,y;
    cin >> x >> y;
    ord(&x,&y);
    cout << x << " " << y;

}

void ord(int *a, int *b){
    int aux;
    if(*a>*b){
        aux = *a;
        *a = *b;
        *b = aux;
    }
}