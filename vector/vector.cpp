#include <bits/stdc++.h>
using namespace std;
/*all the functions of the vector are : 
1. size() - returns the number of elements in the vector
2. clear() - removes all the elements from the vector
3. push_back() - adds an element at the end of the vector
4. emplace_back() - adds an element at the end of the vector (faster
5. pop_back() - removes the last element of the vector
6. erase() - removes an element from the vector 
7. insert() - inserts an element at a specific position in the vector
8. swap() - swaps the contents of two vectors
9 .empty() - returns true if the vector is empty, false otherwise
*/ 


int main(){

    // creating a vector
    vector<int> v = {1,2,3,4,5};


    //size vector.size()
    cout << v.size() << endl; 

    //clear vector.clear()


    // adding an element at the end of the vector
    v.push_back(6);
    v.emplace_back(7);
    

    // other approaches for declaration of vector
    vector<int> v1(5,0); // creates a vector of size 5 with all elements initialized to 0
     

    // copying a vector
    vector<int> v2(v); // creates a copy of vector v
     

    // vector of integer pairs
    vector<pair<int,int>> vp;

    vp.push_back({1,2});
    cout << vp[0].first<<endl;

    vp.emplace_back(3,4);
    //cout << vp[1].first << " " << vp[1].second << endl;

    cout<<vp[1].first;


//iterator 

    vector<int>::iterator it = v.begin(); // points to the first element of the vector
    cout << *it << endl; // prints the first element of the vector
    cout<<*(it+1) << endl; // prints the second element of the vector
    cout<<*(it+2) << endl; // prints the third element of the vector2

    vector<int>::iterator it1 = v.end(); // points to the position after the last element of the vector
    vector<int>::reverse_iterator it2 = v.rbegin(); // points to the last element of the vector
    vector<int>::reverse_iterator it3 = v.rend(); // points to the position before the first element of the vector


    //priting the vector using iterators
    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout << *it << " ";
    }
    cout<<endl;

    for(auto it=v.begin();it!=v.end();it++){
        cout << *it << " ";
    }
    cout<<endl;

     // for each loop to print the vector
    cout << endl;
    for(int x:v){
        cout << x << " ";
    }

    cout << endl;


    //delete Func

    v.pop_back(); // removes the last element of the vector
    v.erase(v.begin()); // removes the first element of the vector
    v.erase(v.begin()+1); // removes the second element of the vector
    v.erase(v.begin(),v.begin()+2); // removes the first two elements of the vector , end is exclusive


    //insert Func
     vector<int> v3 = {11,12,31,4,45};
    v3.insert(v.begin(),10); // inserts 10 at the beginning of the vector
    v3.insert(v.begin()+1,20); // inserts 20 at the second position of the vector
    v3.insert(v.begin()+2,2,20); // inserts 2 copies of 20 at the third position of the vector
    v3.insert(v.end(),30); // inserts 30 at the end of the vector

    vector <int> v4 = {30,35};
    v3.insert(v3.begin(),v4.begin(),v4.end()); //  inserts the elements of vector v4 at the start of vector v3

    vector <int> v5 = {40,45};
    vector <int> v6 = {50,55};

    v5.swap(v6); // swaps the contents of vector v5 and v6

    cout << v5.empty() << endl;  
    cout << v6.empty() << endl; 
    return 0;
}