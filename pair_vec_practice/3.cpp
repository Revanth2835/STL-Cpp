/*Given items and quantities, print items
whose quantity is LESS than threshold (low stock!)

Input:              Output:
4  threshold=5      Apple
Apple  3            Mango
Banana 10
Mango  2
Grapes 8*/

#include<bits/stdc++.h>
using namespace std;

vector<pair<string,int>> inventory;

void addItem(string name, int quantity) {
    // hint : push name and quantity as pair
}

void printLowStock(int threshold) {
    // hint : loop through inventory
    // print items where .second < threshold
}

int main(){
    int n; cin >> n;
    for(int i=0; i<n; i++){
        string name; int qty;
        cin >> name >> qty;
        addItem(name, qty);
    }
    int threshold; cin >> threshold;
    printLowStock(threshold);
}
```

---

## Q4 — Phone Book 🟡
```
A name number → Add contact
D name        → Delete contact
S name        → Search (print -1 if not found)

Input:              Output:
4                   12345
A Alice 12345
A Bob 67890
S Alice
D Bob