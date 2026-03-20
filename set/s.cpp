#include <iostream>
#include <set>
using namespace std;

int main() {
    // Create a set and insert elements
    set<int> s;
    
    s.insert(1); // {1}
    s.insert(3); // {1, 3}
    s.insert(5); // {1, 3, 5}
    s.insert(7); // {1, 3, 5, 7}
    s.insert(3); // {1, 3, 5, 7} --> 3 doesn't get inserted
    
    // Erase elements from the set
    s.erase(3); // Erase element '3'
    
    auto it7 = s.find(7); // Find iterator for element '7'
    s.erase(it7); // Erase element '7' using iterator

    s = {2, 4, 6, 8, 10};

    int count8 = s.count(8);
    int count5 = s.count(5);
    cout << "Count of 8 in the set: " << count8 << endl; // 1
    cout << "Count of 5 in the set: " << count5 << endl; // 0
    return 0;
}