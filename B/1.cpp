#include <iostream>
#include <time.h>
using namespace std;

bool has_zero(int a[], int n);

int main(){
    srand(time(NULL));
    int n = 5, v[n];
    for(int i=0;i<=n;i++){
        v[i] = rand() %10;
    }
    cout << has_zero(v,n) << endl;
    for(int i=0;i<=n;i++){
        cout << v[i] << " ";
    }
}

bool has_zero(int a[], int n){
    bool x = false;
    for(int i=0;i<=n;i++){
        if (a[i] == 0){
            x = true;
        }
    }
    return x;
}