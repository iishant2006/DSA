#include <iostream>
#include <vector>
using namespace std;

int main(){
    // auto - auto assigns type of functions - Not exclusive to vectors
    auto x = 5; // auto defines x as integer

    // Erase - erase(iterator/address)
    vector<int> vec = {1, 2, 3, 4, 5, 6};

    vec.erase(vec.begin() + 1); // erases  2
    vec.erase(vec.begin() + 2, vec.begin() + 4); // {1, 2, 6} - [Start, end)

    
    // Insert Function
    vector<int> v(2, 100); // {100, 100}

    v.insert(v.begin(), 300); // {300, 100, 100}
    v.insert(v.begin() + 1, 1, 2); // {300, 1, 2, 10, 100, 100}

    // You can also insert another vector
    vector<int> another(2, 50);
    v.insert(v.begin(), another.begin(), another.end());

    // .Swap
    // v1 -> {1, 2}
    // v2 -> {3, 4}
    // v1.swap(v2) -> v1 = {3, 4}, v2 - {1, 2}

    v.clear(); // Erases entire vector
    v.empty(); // Gives True or false

    return 0;
}