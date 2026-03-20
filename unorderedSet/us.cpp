#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    // Creating an unordered set
    unordered_set<int> mySet;
    
    // Insert operation
    mySet.insert(3);
    mySet.insert(4);
    mySet.insert(2);
    mySet.insert(0);
    mySet.insert(3); // Duplicate, won't be added
    mySet.insert(2); // Duplicate, won't be added
    mySet.insert(3); // Duplicate, won't be added

    // Elements will be unique and unordered, for example:
    // mySet = {3, 4, 0, 2} -> the order can be different, but elements are unique
    
    // Display the elements in the set
    for (int element : mySet) {
        cout << element << " ";
    }
    cout << endl;

    // Erase operation
    mySet.erase(2); // Erases element '2'
    
    // Find operation
    auto it = mySet.find(3);
    
    if (it != mySet.end()) {
        cout << "Found " << *it << endl; // Found
    } else {
        cout << "Not found" << endl;
    }
    
    // Count operation
    int count = mySet.count(0);
    cout << "Count of 0: " << count << endl; // 1
    return 0;
}