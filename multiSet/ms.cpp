#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> myMultiset;
    // Insert
    myMultiset.insert(5); // {5}
    myMultiset.insert(2); // {2, 5}
    myMultiset.insert(5); // {2, 5, 5}
    myMultiset.insert(8); // {2, 5, 5, 8}
    myMultiset.insert(2); // {2, 2, 5, 5, 8}
    myMultiset.insert(5); // {2, 2, 5, 5, 5, 8}
    myMultiset.insert(9); // {2, 2, 5, 5, 5, 8, 9}
    // Erase
    myMultiset.erase(5); // {2, 2, 8, 9}
    // Find
    auto it = myMultiset.find(2);
    if (it != myMultiset.end()) {
        cout << "Found: " << *it << endl; // Found
    }
    myMultiset.insert(2); // {2, 2, 2, 8, 9}

    myMultiset.erase(myMultiset.find(2)); // {2,2,8,9} -> remove single element from multiple element of 2
    // Count
    int count = myMultiset.count(2);
    cout << "Count of 2: " << count << endl;
    return 0;
}