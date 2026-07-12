// Vector is a container that stores elements in similar fashion as arrays
#include <iostream>
#include <vector>
using namespace std;

void traverse(vector<int> v){
    for(int val: v){
        cout << val << " ";
    }
    cout << endl;
}

int main(){
    // The important speciality of vectors is that they are dynamic in nature
    // Their size changes dynamically
    vector<int> v;
    v.push_back(1); // 1
    v.emplace_back(2); // 1, 2

    // On pushing an element if the size is full, it doubles it size
    v.push_back(3); // 1, 2, 3, _
    cout << "size: " << v.size() << ", capacity: " << v.capacity() <<endl;

    // To make vector of size n = 5
    vector<int> v2(5); //Pre initialises values to 0
    vector<int> v3(5, 100); // Makes vector of size 5 with all values 100

    // Copying a vector
    vector<int> copy_v3(v3); // We can pass the vector we want to copy as the argument

    return 0;
}