#include <iostream>
#include <queue>
using namespace std;

// Time Notes:_
// Push, Pop -> log n
// top -> 1

int main(){
    // A priority queue implemented using max heap:-
    // Keeps largest element at top ie at max priority

    priority_queue<int> pq;

    pq.push(3); // {5}
    pq.push(2); // {5, 2}
    pq.push(8); // {8, 5, 2}
    pq.emplace(5); // {8, 5, 3, 2}
    pq.emplace(9); // {9, 8, 5, 3, 2}

    cout << "Top: (Has to be max element for max heap) " << pq.top() << endl;
    pq.pop(); // pops max element ie 9

    // FOR MIN HEAP
    priority_queue<int, vector<int>, greater<int>> mpq;

    mpq.push(3); // {3}
    mpq.push(2); // {2, 3}
    mpq.push(8); // {2, 3, 8}
    mpq.emplace(5);  // {2, 3, 5, 8}
    mpq.emplace(9); // {2, 3, 5, 9}

    cout << "Top: (Has to be min element for min heap) " << pq.top() << endl;
    mpq.pop(); // pops min element ie 2

    return 0;
}