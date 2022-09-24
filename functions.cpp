#include <iostream>

using namespace std;


pair<int, int> makePair(int x, int y){
    if (x > y){
        return make_pair(y, x);
    }
    return make_pair(x, y);
}

void print(string text){
    cout << text << endl;
}

int add(int x, int y){
    return x + y;
}

void printNTimes(int n, string text){
    for (int i=0; i<n; i++){
        print(text);
    }
}

void refSwap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

void ptrSwap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a = 2, b = 3;
    refSwap(a, b);
    cout << a << endl;
    cout << b << endl;
    ptrSwap(&a, &b);
    cout << a << endl;
    cout << b << endl;
}
