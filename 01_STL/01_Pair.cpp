#include <iostream>
using namespace std;

int main(){
    // Pairs
    pair <int, int> p = {1, 2}; // This pair contains both integers
    pair <int, char> p2 = {1, 'A'}; // This pair contains an int and a character

    // How to access values in pair
    // pair_name.first -> first element
    // pair_name.second -> second_element

    cout << "p: " << p.first << p.second<< endl;
    cout << "p2: " << p2.first << p2.second << endl;

    // We can also make array of pairs..
    pair <int, char> ascii[] = { {1, 'A'}, {2, 'B'}, {3, 'C'}};

    // You can nest pairs too
    pair < int, pair<int, int> > nested_pair1 = {1, {2, 3}};
    pair < pair<int, int>, pair<char, char> > nested_pair2 = {{1, 2}, {'A', 'B'}};

    cout << "nested_pair: " << nested_pair2.first.first << nested_pair2.second.first << endl;
    cout << "nested pair: " << nested_pair2.second.first << nested_pair2.second.second << endl;

    return 0;
}