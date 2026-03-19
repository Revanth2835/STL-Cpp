/*Store names and marks of n students.
Print the name of student with HIGHEST marks.

Input:
3
Alice 85
Bob 92
Charlie 78

Output:
Bob*/

#include <bits/stdc++.h>
using namespace std;

vector<pair<string,int>> students; 

void addStudent(string name, int marks) {
    students.push_back({name, marks});
}

string highestMarks() {
    int greatest = students[0].second;
    string topS = students[0].first;

    for(auto i : students){
        if(i.second > greatest){
            greatest = i.second;
            topS = i.first;
        }
    }
    return topS;
}

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string name;
        int marks;
        cin >> name >> marks;
        addStudent(name, marks);
    }

    cout << highestMarks() << endl;
}
