#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> stk;
    
    // Push or Emplace elements into the stack
    stk.push(10); // {10}
    stk.push(20); // {20, 10}
    stk.push(30); // {30, 20, 10}
    stk.emplace(40); // {40, 30, 20, 10}
    stk.emplace(50); // top -> {50, 40, 30, 20, 10} -> bottom
    
    // Display the top element
    cout << "Top element: " << stk.top() << endl; // 50
    
    // Pop elements from the stack
    stk.pop();  // Removes the top element
    
    // Check if the stack is empty
    if (stk.empty()) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack is not empty." << endl;
    }
    
    // Display the size of the stack
    cout << "Size of stack after pop: " << stk.size() << endl; // 4
    
    stack<int> anotherStk;
    anotherStk.push(99); // {99}
    anotherStk.push(88); // top -> {88, 99} -> bottom
    stk.swap(anotherStk);
    
    // Printing stacks top after swap
    cout << "Stk top: " << stk.top() << " and anotherStk top: " << anotherStk.top() << " "; // Stk top: 88 anotherStk: 40
    return 0;
}