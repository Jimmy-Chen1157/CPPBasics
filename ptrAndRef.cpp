#include<bits/stdc++.h>


using namespace std;

int main(){


    int var = 9;
    int foo = 10;
    int* ptr;
    int& ref = var;//ref = same location as var

    ptr = &var; //ptr = location of var

    cout << &var << '\n';
    cout << &ptr << '\n';
    cout << &ref;

}
