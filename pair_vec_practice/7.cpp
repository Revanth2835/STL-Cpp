/*
## Q7 — Student Grade System 🟠
```
Store name, subject, marks.
Print students who scored ABOVE average.

Input:              Output:
4                   Alice 90
Alice Maths 90      David 80
Bob Science 60
Charlie Maths 75
David Science 80*/

#include<bits/stdc++.h>
using namespace std;

vector<pair<string,pair<string,int>>> students;
//         name      subject  marks

void addStudent(string name, string subject, int marks) {
    // hint : push {name, {subject, marks}}
}

double calculateAverage() {
    // hint : sum all .second.second (marks)
    // return sum / students.size()
}

void printAboveAverage() {
    // hint : call calculateAverage() first
    // loop and print where .second.second > average
}

int main(){
    int n; cin >> n;
    for(int i=0; i<n; i++){
        string name, subject; int marks;
        cin >> name >> subject >> marks;
        addStudent(name, subject, marks);
    }
    printAboveAverage();
}
