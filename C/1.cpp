#include <iostream>
#include <time.h>
using namespace std;

void maiorMenorNum(int x[], int n, int *max, int *min);
void media(int x[],int n);
void numPositiv(int x[], int n);
void insertVal(int x[], int n);

int main(){
    srand(time(NULL));
    cout << "Numeros aleatorios gerados:" << endl;
    int n = 4, v[n], max=-5,min=5;
    insertVal(v,n);
    for(int i=0;i<=n;i++){
        cout << v[i] << " ";
    }
    cout << endl;
    numPositiv(v, n);
    maiorMenorNum(v,n,&max,&min);
    media(v, n);
}

void maiorMenorNum(int x[],int n,int *max, int *min){
    int *ma = max, *mi = min;
    for(int i=0;i<=n;i++){
        if(x[i]>*ma){
            *ma = x[i];
        }
    }
    for(int i=0;i<=n;i++){
        if(x[i]<*mi){
            *mi = x[i];
        }
    }
    cout << "Maior numero: " << *max << endl;
    cout << "Menor numero: " << *min << endl;
}

void media(int x[],int n){
    int m;
    for(int i=0;i<=n;i++){
        m += x[i];
    }
    cout << "Media: " << m/n << endl;
}

void numPositiv(int x[], int n){
    int np=0;
    for(int i=0;i<=n;i++){
        cout << "x = "<< x[i] << endl;
        if(x[i]>0){
            np++;
            cout << np << endl;
        }
    }
    
    cout << "Numero de elementos positivos: " << np << endl;
}

void insertVal(int x[], int n){
    for(int i=0;i<=n;i++){
        x[i] = rand() %10-5;
    }
}