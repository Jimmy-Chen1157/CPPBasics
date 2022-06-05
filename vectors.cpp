#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v1 = {1, 2, 3, 4};
    cout << v1[1] << endl;
    v1.push_back(7);
    v1.pop_back();
    v1.shrink_to_fit();
    cout << v1.front() << endl;
    cout << v1.back() << endl;
    cout << v1.size() << endl;
    cout << v1.capacity() << endl;

    vector<int> v2 = {1,2,3,4};
    v2.insert(v2.begin(), 5);
    v2.insert(v2.begin()+1, 6);
    cout << v2[0] << endl;
    cout << v2[1] << endl;
    v2.erase(v2.begin());
    cout << v2[0] << endl;

    vector<int> v3 = {1,2,3,4};

    for (int i=0; i<v3.size(); i++){
        cout << v3[i] << endl;
    }

    for (auto itr = v3.begin(); itr != v3.end(); itr++){
        cout << *itr << endl;
    }
}
