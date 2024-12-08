#include <iostream>
using namespace std;

int mcd(int a, int b){
    if(a == b){
        return a;
    }else if(a < b){
        return mcd(a, b - a );
    }else if(a > b){
        return mcd(a - b, b);
    }
}

int main(){
    int a, b;

    cin >> a >> b;

    cout << mcd(a,b);
}