#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(){
    set<char> s1 = {'c', 'd', 'd', 'c', 'a'};
    s1.insert('b');
    s1.erase('c');

    if (s1.find('c') == s1.end()){
        cout << "c not found" << endl;
    }
    else{
        cout << "found c" << endl;
    }

    for (auto itr=s1.begin(); itr!=s1.end(); itr++){
        cout << *itr << endl;
    }

    string test = "This is a test iii jjj oo l";
    string find = "hello";
    set<char> findLetters;

    for (int i=0; i<find.size(); i++){
        char letter = find[i];
        findLetters.insert(letter);
    }

    for (int i=0; i<test.size(); i++){
        char letter = test[i];
        findLetters.erase(letter);
    }

    if (findLetters.size() > 0){
        cout << "No, it does not have all of the letters." << endl;
    }
    else{
        cout << "Yes, it has all of the letters." << endl;
    }

}
