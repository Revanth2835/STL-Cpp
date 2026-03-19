/*Given a vector of integers, remove ALL duplicate
values and print remaining elements.

Input:                  Output:
7                       1 2 3 4 5
1 2 2 3 4 4 5*/

#include<bits/stdc++.h>
using namespace std;

void removeDuplicates(vector<int> &arr) {
    // hint : loop i from 0 to size
    // for each i, use find() to check
    // if same value exists before index i
    // if yes → erase it using iterator
   for(int i = 0; i < arr.size(); i++){
        // search current element in 0 to i-1 (before it)
        for(int j = 0; j < i; j++){
            if(arr[j] == arr[i]){       // duplicate found!
                arr.erase(arr.begin() + i); // erase at position i
                i--;    // ✅ step back because vector shifted!
                break;  // ✅ stop inner loop after erasing
            }
        }
    }
}

int main(){
    
    vector<int> arr = {1, 2, 2, 3, 4, 4, 5};
    
    removeDuplicates(arr);
   for(int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }

    return 0;
}