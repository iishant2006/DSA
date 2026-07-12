#include <iostream>
#include <queue>
using namespace std;

// A queue is a FIFO Data structure
// First In First Out -> Element that goes in first comes out first
// Its like a line while buying a movie ticket

int main(){
    queue<int> q;
    
    q.push(1); // {1}
    q.push(2); // {1, 2}
    q.push(3); // {1, 2, 3}
    q.emplace(4); // {1, 2, 3}

    cout << "Front: " << q.front() << endl;
    cout << "Back: " << q.back() << endl;

    q.pop(); // pops front(1) -ie the one that was inserted at first
    cout << "New Front: " << q.front() << endl;
    cout << "New Back: " << q.back() << endl;

    cout << "isEmpty: " << q.empty() << endl;

    // Swap also works
    queue<int> q1, q2;
    q1.swap(q2);
    
    return 0;
}