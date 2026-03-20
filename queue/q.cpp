#include <iostream>
#include <queue>

int main() {
    std::queue<int> myQueue;
    
    // Push elements to the queue
    myQueue.push(10); // {10}
    myQueue.push(20); // {10, 20}
    myQueue.push(30); // front -> {10, 20, 30} -> back
    
    // Front and Back
    std::cout << "Front element: " << myQueue.front() << std::endl; // Output: Front element: 10
    std::cout << "Back element: " << myQueue.back() << std::endl;   // Output: Back element: 30
    
    // Pop the front element
    myQueue.pop();
    std::cout << "After popping, front element: " << myQueue.front() << std::endl; // Output: After popping, front element: 20
    return 0;
}