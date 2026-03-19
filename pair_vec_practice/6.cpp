/*## Q6 — Word Frequency Counter 🟡
```
Count how many times each word appears.

Input:              Output:
7                   apple 3
apple banana        banana 2
apple orange        orange 2
banana apple
orange*/

#include<bits/stdc++.h>
using namespace std;

vector<pair<string,int>> frequency;

void addWord(string word) {
    // hint : loop with iterator to find word
    // if found  → it->second++ (increment count)
    // if not found → push_back({word, 1})
}

void printFrequency() {
    // hint : loop and print word with its count
}

int main(){
    int n; cin >> n;
    for(int i=0; i<n; i++){
        string word; cin >> word;
        addWord(word);
    }
    printFrequency();
}
