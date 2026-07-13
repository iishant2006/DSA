#include <iostream>
#include <map>
using namespace std;

int main(){
    // Map stores key value pair
    // Map maps a UNQIUE KEY to a value

    // Keys are stored in sorted order
    map<int, int> m;

    m[1] = 2;
    m.insert({3, 4});
    m.emplace(4, 5);

    // { {2, 3},
    //   {3, 4},
    //   {4, 5} }

    map<int, int> m1, m2;

    // Let's traverse using iterator
    auto it = m.begin(); // Iterator at {1, 2}
    // Iterator gives both key, value "pair"

    for(auto it = m.begin(); it!=m.end(); it++){
        cout << (*it).first << (*it).second << " ";
    }

    // INDEXING IS VALID :- map[key] -> value
    cout << "\n" << m[1]; // 1 -> 2
    cout << m[3]; // 3 -> 4


    // FIND TAKES THE KEY AND GIVES THE ITERATOR
    auto it = m.find(3); // Points to pair with key=3
    cout << (*it).second; // {3, 4}.second = 4

    auto it = m.find(5); // 5 doesn't exists -> points to end


    m1.swap(m2);


    // Lower and Upper bound
    auto it = m.lower_bound(2);
    auto it = m.upper_bound(3);

    return 0;
}