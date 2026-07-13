// Multiset are similar to sets, but they can store duplicates too
#include <iostream>
#include <set>
using namespace std;

int main(){
    multiset<int> ms;

    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    ms.erase(1); // Erases all occurance of 1 ⭐
    int count = ms.count(1); // Counts 1

    ms.erase(ms.find(1)); // Erases one occurance of 1 ⭐

    // To remove two occurance of 1
    // ms.erase(ms.find(1), ms.find(1)+2); // [Start, End)
    return 0;
}