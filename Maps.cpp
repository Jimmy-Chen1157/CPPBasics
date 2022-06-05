#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    map<char, int> mp = {
        {'A', 1},
        {'B', 2},
        {'C', 3}
    };

    mp['D'] = 4;
    pair<char, int> p1('E', 5);
    mp.insert(p1);
    mp.erase(p1.first);
    // mp.clear();
    // cout << mp['E'] << endl;
    cout << mp.empty() << endl;
    cout << mp.size() << endl;

    for (map<char, int>::iterator itr = mp.begin(); itr != mp.end(); itr++){
        cout << itr->first << " ";  // (*itr).second = itr->second
        cout << itr->second << endl;
    }

    string test = "Hello World my name is masld";

    map<char, int> freq;

    for (int i=0; i<test.size(); i++){
        char letter = test[i];
         if (freq.find(letter) == freq.end()){
            freq[letter] = 0;
         }
         freq[letter]++;
    }

    for (auto itr = freq.begin(); itr != freq.end(); itr++){
        cout << itr->first << " " << itr->second << endl;
    }

}
