#include <iostream>

int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }else{
        return n * factorial(n - 1);
    }
}

int combinatoria(int n, int r){
    if(n == 0 || n == 1 || r == 0 || r == 1){
        return 1;
    }else {
        return factorial(n) / factorial(n - r);
    }
}

int main(){
    int n = 5, r = 2;

    int resultado = combinatoria(n, r);

    std::cout << resultado;

    return 0;
}