#include<iostream>
#include<tuple>


using namespace std;

int main(){
    // Accessing tuple values
    tuple<int, string> person(20, "Jimmy");
    cout << get<1>(person) << '\n';
    get<1>(person) = "Chad";
    cout << get<1>(person) << '\n';

    // Swapping
    tuple<int, int> thing1 = make_pair(1, 2);
    tuple<int, int> thing2 = make_pair(3, 4);
    thing1.swap(thing2);
    cout << get<0>(thing1) << endl;
    cout << get<0>(thing2) << endl;

    // Decomposing
    tuple<int, int> t1 = make_tuple(5, 6);
    int x, y;
    tie(x, y) = t1;
    cout << x << endl;
    cout << y << endl;
    cout << get<0>(t1) << endl;
    cout << get<1>(t1) << endl;

    // Concatenating
    tuple<int, char> e1(10, 'T');
    tuple<char, string> e2('R', "Hello World");
    auto t3 = tuple_cat(e1, e2);
    cout << get<0>(t3) << endl;
    cout << get<1>(t3) << endl;
    cout << get<2>(t3) << endl;
    cout << get<3>(t3) << endl;

}
