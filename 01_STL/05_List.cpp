// A list behaves similar to vector
#include <iostream>
#include <list>
using namespace std;

int main(){
    // Is implemented using doubly linked list
    // Indexing is not allowed
    // Accessing an element requires traversal
    list<int> ls;

    // List gives push_front too
    ls.push_back(3);
    ls.emplace_back(4);
    ls.push_front(2);
    ls.push_front(1);

    for(list<int>:: iterator i = ls.begin(); i!=ls.end(); i++){
        cout << *i << " ";
    }

    // Remaining vector functions work too
    // Insert, Erase, Clear, Empty, swap
    return 0;
}