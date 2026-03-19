/*#include<bits/stdc++.h>
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
D Bob*/

#include<bits/stdc++.h>
using namespace std;

vector<pair<string,int>> phonebook;

void addContact(string name, int number) {
    // hint : push name and number as pair
}

void deleteContact(string name) {
    // hint : loop with iterator
    // find where it->first == name
    // erase if found
}

int searchContact(string name) {
    // hint : loop with iterator
    // find where it->first == name
    // return it->second if found else -1
}

int main(){
    int n; cin >> n;
    while(n--){
        char op; cin >> op;
        if(op == 'A'){
            string name; int num;
            cin >> name >> num;
            addContact(name, num);
        }
        else if(op == 'D'){
            string name; cin >> name;
            deleteContact(name);
        }
        else if(op == 'S'){
            string name; cin >> name;
            cout << searchContact(name) << endl;
        }
    }
}
