// Set stores UNIQUE elements in SORTED order
#include <iostream>
#include <set>
using namespace std;

// Insert, Erase - Takes logarithmic time
int main(){
    set<int> st;

    st.insert(1); // {1}
    st.emplace(2); // {1, 2}
    st.insert(2); // {1, 2}
    st.insert(4); // {1, 2, 4}
    st.insert(3); // {1, 2, 3, 4}
    st.emplace(5); // {1, 2, 3, 4, 5}

    // begin(), end(), rbegin(), rend(), size()
    // empty() and swap() are same
    // Iterators work
    // find() - new function
    set<int>:: iterator i = st.find(3); // Gives the itertor on 3
    auto i = st.find(6); // Points to the end because 6 comes after 5 that is end
    auto i = st.begin();

    // Unlike vectors in sets, erase can take ITERATORS as well as VALUES
    st.erase(5); // Removes 5 - take log n time

    st.erase(st.find(3), st.find(4)); // You can erase by giving range too

    // We will discuss lower and upper bound in detail later
    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);
    return 0;
}