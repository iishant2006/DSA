#include <iostream>
#include <deque>
using namespace std;

int main(){
    // Similar to list
    // But is implemented using fragmented array
    // Indexing is allowed
    deque<int> dq = {1, 2, 3};

    dq.push_back(4);
    dq.emplace_back(5);
    dq.push_front(0);
    dq.emplace_front(-1);

    // Iterators work here too
    deque<int>::iterator i = dq.begin();
    auto i = dq.begin();

    // Remaining vector functions work too
    // Insert, Erase, Clear, Empty, swap
    return 0;
}