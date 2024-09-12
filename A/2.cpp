#include <iostream>
using namespace std;

void decomp(double *x);

int main(){
    double n;
    cin >> n;
    decomp(&n);
}

void decomp(double *x){
    int a;
    float b;
    a = int(*x);
    b = *x - a;
    cout << "inteiro: " << a << endl;
    cout << "fracionario: " << b << endl;
}