#include <iostream>
using namespace std; 

int main(){

    // store two values in a single variable
    pair <int , char> p1 ={98,68};
    cout<<p1.first << " " << p1.second << endl;

    // store 3 or more values in a single variable
    pair<int ,pair<int,int>> p2 = {1,{2,3}};
    cout<<p2.first << " " << p2.second.first << " " << p2.second.second << endl;

    // creating an array of pairs
    pair<int ,int> arr[]= {{1,2},{3,4},{5,6}};
    for(int i=0;i<3;i++){
        cout<<arr[i].first << " " << arr[i].second << endl;
    }


    return 0;
}

