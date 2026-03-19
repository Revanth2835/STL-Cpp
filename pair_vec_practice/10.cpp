/*```

---

## Q10 — Mini E-Commerce System 🔴
```
AP name cat price qty → Add product
UP name newQty        → Update quantity
DP name               → Delete product
SC category           → Show category + revenue
TR                    → Total revenue all categories

Input:              Output:
6                   Electronics:
AP Laptop Elec 1000 2   Laptop 1000 x 2 = 2000
AP Phone Elec 500 3     Phone 500 x 5 = 2500
AP Apple Food 1.5 100   Category Revenue: 4500.00
UP Phone 5          Total Revenue: 4650.00
SC Elec
TR*/
#include<bits/stdc++.h>
using namespace std;

//      name     category   price    qty
vector<pair<string,pair<string,pair<double,int>>>> products;

void addProduct(string name, string cat, double price, int qty){
    // hint : push {name, {cat, {price, qty}}}
}

void updateQuantity(string name, int newQty){
    // hint : find by name
    // update it->second.second.second = newQty
}

void deleteProduct(string name){
    // hint : find by name using iterator
    // erase if found
}

void showCategory(string category){
    // hint : loop and filter where .second.first == category
    // print each product and sum category revenue
}

double totalRevenue(){
    // hint : total += price * qty for ALL products
    // return total
}

int main(){
    int n; cin >> n;
    while(n--){
        string op; cin >> op;
        if(op == "AP"){
            string name, cat; double price; int qty;
            cin >> name >> cat >> price >> qty;
            addProduct(name, cat, price, qty);
        }
        else if(op == "UP"){
            string name; int qty;
            cin >> name >> qty;
            updateQuantity(name, qty);
        }
        else if(op == "DP"){
            string name; cin >> name;
            deleteProduct(name);
        }
        else if(op == "SC"){
            string cat; cin >> cat;
            showCategory(cat);
        }
        else if(op == "TR"){
            cout << fixed << setprecision(2)
                 << totalRevenue() << endl;
        }
    }
}
