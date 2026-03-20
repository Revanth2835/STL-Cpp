#include <iostream>
#include <queue>
using namespace std;

int main() {
    // Creating a min heap priority queue
    priority_queue<int, vector<int>, greater<int>> min_prq;
    
    // Push elements into the min heap priority queue
    min_prq.push(30); // {30}
    min_prq.push(10); // {10, 30}
    min_prq.push(50); // {10, 30, 50}
    min_prq.push(20); // {10, 20, 30, 50}
    min_prq.push(5);  // {5, 10, 20, 30, 50}
    
    // Print the top element (element with the lowest priority) without removing it
    cout << "Top element: " << min_prq.top() << endl; // 5
    
    // Pop the top element
    min_prq.pop();
    
    // Get the size of the min heap priority queue
    cout << "Size of the priority queue: " << min_prq.size() << endl; // 4
    
    // Check if the min heap priority queue is empty
    if (min_prq.empty()) {
        cout << "The priority queue is empty." << endl;
    } else {
        cout << "The priority queue is not empty." << endl; // Not Empty
    }
    
    // Create a second min heap priority queue
    priority_queue<int, vector<int>, greater<int>> min_prq2;
    
    // Swap the content of the first min heap priority queue with the second one
    min_prq.swap(min_prq2);
    cout << "After swapping, the first priority queue size: " << min_prq.size() << endl; // 0
    cout << "After swapping, the second priority queue size: " << min_prq2.size() << endl; // 4
    return 0;
}