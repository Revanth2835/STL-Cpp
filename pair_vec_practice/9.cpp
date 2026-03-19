/*```

---

## Q9 — Leaderboard Manager 🟠
```
Store player name and score.
Print sorted leaderboard with ranks.
Tied scores get SAME rank!

Input:              Output:
4                   Rank 1: Bob 750
Alice 500           Rank 1: David 750
Bob 750             Rank 3: Alice 500
Charlie 300         Rank 4: Charlie 300
David 750           Bob is Rank 1
Search: Bob*/

#include<bits/stdc++.h>
using namespace std;

vector<pair<string,int>> leaderboard;

void addPlayer(string name, int score) {
    // hint : push name and score as pair
}

bool comparator(pair<string,int> a, pair<string,int> b){
    // hint : return true if a.second > b.second
    // descending order!
}

void sortLeaderboard() {
    // hint : sort with comparator
}

void printLeaderboard() {
    // hint : track rank separately
    // if score == previous score → same rank
    // else rank = current index + 1
}

int getPlayerRank(string name) {
    // hint : loop sorted leaderboard
    // find player and return their rank
}

int main(){
    int n; cin >> n;
    for(int i=0; i<n; i++){
        string name; int score;
        cin >> name >> score;
        addPlayer(name, score);
    }
    sortLeaderboard();
    printLeaderboard();
    string search; cin >> search;
    cout << search << " is Rank "
         << getPlayerRank(search) << endl;
}
