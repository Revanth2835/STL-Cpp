/*Q5 — Sort by Second Value 🟡
```
Given pairs, sort them by second value ascending.

Input:              Output:
3                   B 1
A 3                 C 2
B 1                 A 3
C 2*/
#include<bits/stdc++.h>
using namespace std;

vector<pair<string,int>> data;

void addPair(string name, int value) {
    // hint : push name and value as pair
}

bool comparator(pair<string,int> a, pair<string,int> b) {
    // hint : return true if a.second < b.second
    // this tells sort() which one comes first
}

void sortByValue() {
    // hint : sort(data.begin(), data.end(), comparator)
}

void printData() {
    // hint : loop and print each pair
}

int main(){
    int n; cin >> n;
    for(int i=0; i<n; i++){
        string name; int val;
        cin >> name >> val;
        addPair(name, val);
    }
    sortByValue();
    printData();
}


