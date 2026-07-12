#include <iostream>
#include <vector>
using namespace std;

int main(){
    // HOW TO ACCESS ELEMENTS IN A VECTOR
    // Traditional method:-
    // cout << v3[4]; // indexing

    vector <int> vec = {1, 2, 3, 4, 5};

    // Iterators- Iterators behave like pointers and are used to traverse containers.
    vector<int>:: iterator i = vec.begin(); // *i = 1
    i++; // move iterator forward.. now it is at second element
    cout << *i << " "; // 2

    i+=2;
    cout << *i << endl; // 4

    // v.end() returns an iterator one pos after the last position
    vector<int>::iterator it = vec.end(); // Dereferencing means undefinned behaviour

    // Reverse iterators
    vector<int>:: reverse_iterator ri = vec.rbegin(); // Begins at end
    vector<int>:: reverse_iterator rit = vec.rend(); // One pos before first element

    // Note- i++ means move forward
    //  but the meaning for move forward for reverse itertor is something that is move backward for us


    // Lets traverse using itertors
    for(vector<int>::iterator i = vec.begin(); i != vec.end(); i++){
        cout << *i << " "; // 1 2 3 4 5
    }

    cout << "\n";

    // Reverse Iterators
    for(auto i = vec.rbegin(); i!= vec.rend(); i++){
        cout << *i << " "; // 5 4 3 2 1
    }
    return 0;
}