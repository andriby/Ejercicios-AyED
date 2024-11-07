#include <iostream>
using namespace std;

int mayorArr(int* arr, int n, int mayor, int i = 0){
    if(i == n + 1){
        return mayor;
    }else if(arr[i] > mayor){
        return mayorArr(arr, n, arr[i], i + 1);
    }
    return mayorArr(arr, n, mayor, i + 1);
}

int sumaArr(int* arr, int n, int suma = 0, int i = 0){
    if(i == n + 1){
        return suma;
    }
    return sumaArr(arr, n, suma += arr[i], i + 1);
}

float promedio(int* arr, float n, float suma = 0, int i = 0){
    if(i == n + 1){
        return suma / n;
    }
    return promedio(arr, n, suma += arr[i], i + 1);
}

bool ordenado(int* arr, int n, int i = 0){
    if(arr[i] > arr[i+1]){
        return false;
    }else if(i == n + 1){
        return true;
    }
    return ordenado(arr, n, i + 1);
}

int main(){
    int arrN[] = {1, 2, 3 ,4 ,5 ,6};

    cout << mayorArr(arrN, 5, arrN[0]) << endl;
    cout << sumaArr(arrN, 5) << endl;
    cout << promedio(arrN, 5) << endl;
    cout << ordenado(arrN, 4) << endl;

    return 0;
}