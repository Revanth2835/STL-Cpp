#include <iostream>
#include <queue> 
using namespace std;

int main() {
    priority_queue<int> pq; // Creating a max heap priority queue
    
    // Push elements into the priority queue
    pq.push(30); // pq = {30}
    pq.push(10); // pq = {30,10}
    pq.push(50); // pq = {50, 30, 10}
    pq.push(20); // pq = {50, 30, 20, 10}
    
    // Print the top element (element with the highest priority) without removing it
    cout << "Top element: " << pq.top() << endl; // 50
    
    // Pop the top element
    pq.pop();
    
    // Get the size of the priority queue
    cout << "Size of the priority queue: " << pq.size() << endl; // 3
    
    // Check if the priority queue is empty
    if (pq.empty()) {
        cout << "The priority queue is empty." << endl;
    } else {
        cout << "The priority queue is not empty." << endl; // Not empty
    }
    
    // Create a second priority queue
    priority_queue<int> pq2;
    
    // Swap the content of the first priority queue with the second one
    pq.swap(pq2);
    cout << "After swapping, the first priority queue size: " << pq.size() << endl; // 0
    cout << "After swapping, the second priority queue size: " << pq2.size() << endl; // 3
    return 0;
}