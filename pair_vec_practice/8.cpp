/*
## Q8 — Order Management 🟠
```
E name price qty → Enter product
U name newPrice  → Update price only
R name           → Remove product
T                → Print total inventory value

Input:              Output:
5                   1800.00
E Laptop 1000 2
E Phone 500 3
U Phone 600
R Laptop
T*/

#include<bits/stdc++.h>
using namespace std;

vector<pair<string,pair<double,int>>> orders;
//         name       price   qty

void enterProduct(string name, double price, int qty) {
    // hint : push {name, {price, qty}}
}

void updatePrice(string name, double newPrice) {
    // hint : find by name using iterator
    // update it->second.first = newPrice
}

void removeProduct(string name) {
    // hint : find by name using iterator
    // erase if found
}

double totalInventoryValue() {
    // hint : total += price * qty for each item
    // return total
}

int main(){
    int n; cin >> n;
    while(n--){
        char op; cin >> op;
        if(op == 'E'){
            string name; double price; int qty;
            cin >> name >> price >> qty;
            enterProduct(name, price, qty);
        }
        else if(op == 'U'){
            string name; double newPrice;
            cin >> name >> newPrice;
            updatePrice(name, newPrice);
        }
        else if(op == 'R'){
            string name; cin >> name;
            removeProduct(name);
        }
        else if(op == 'T'){
            cout << fixed << setprecision(2)
                 << totalInventoryValue() << endl;
        }
    }
}
