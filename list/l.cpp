#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> list1;
    
    list1.push_back(1);  // Adds 1 at back of list
    
    list1.emplace_back(2);  // Adds 2 at back of list
    
    list1.push_front(3);  // Adds 3 at front of list
    
    list1.emplace_front(4);  // Adds 4 at front of list
    
    // cout << list[0] << endl; --> gives an error
    
    list1.pop_back();  // pops last element of the list
    
    list1.pop_front();  // pops first element of the list
    
    cout << "First Element: " << list1.back() << endl;
    cout << "Last Element: " <<  list1.front() << endl;
    return 0;
}