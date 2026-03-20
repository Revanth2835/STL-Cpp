#include <bits/stdc++.h>
using namespace std;

int main() {
    deque<int> myDeque;
    
    // Pushing elements
    myDeque.push_back(1);        // Add 1 to the back
    myDeque.push_front(2);       // Add 2 to the front
    myDeque.emplace_back(3);     // Emplace 3 at the back
    myDeque.emplace_front(4);    // Emplace 4 at the front
    
    // Popping elements
    myDeque.pop_back();          // Remove the last element
    myDeque.pop_front();         // Remove the first element
    
    // Accessing elements
    int backElement = myDeque.back();   // Get the last element
    int frontElement = myDeque.front(); // Get the first element
    return 0;
}