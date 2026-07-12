#include <iostream>
#include <stack>
using namespace std;

// Stack is a data structure that follows LIFO
// LIFO - Last In p-> First out
// ie the element that goes in last comes out first

int main(){
    stack<int> st;
    
    st.push(1);    // {1}
    st.push(2);    // {2, 1}
    st.push(3);    // {3, 2, 1}
    st.push(4);    // {4, 3, 2, 1}
    st.emplace(5); // {5, 4, 3, 2, 1}

    cout << st.top() << endl; // 5 - Indexing is not allowed 

    st.pop(); // Top element is popped
    // {4, 3, 2, 1}
    
    cout << st.top() << endl; // 4
    cout << st.size() << endl;; // 4
    cout << st.empty() << endl; // False

    // Swap also works
    stack<int> st1, st2;
    st1.swap(st2);
    return 0;
}