#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> s;
    s.insert(3);
    s.insert(5);
    s.insert(6);
    s.insert(2);
    s.insert(56);
    s.insert(334);
    s.insert(0);

    for(auto it = s.begin(); it != s.end(); it++){
        cout<<*it<<" ";
    }//in increasing order printing
    cout<<"\n";
    for(auto it = s.rbegin(); it != s.rend(); it++){
        cout<<*it<<" ";
    }//this will not work in unodered_set;
    //this will print in decending order;
    cout<<endl;
    //this will print largest value in set, not in unordered_set;
    auto it = s.end(); it--;
    cout << *it << "\n";

    // The function find(x) returns an iterator that points to an element whose
    // value is x. However, if the set does not contain x, the iterator will be end.
    auto it1 = s.find(563);
    if (it1 == s.end()) {
    // x is not found
        cout<<"Not found the element\n";
    }
    else cout<<"Found the element \n";

    // For example, the following code finds the element nearest to x:
    int x = 50;
    auto it2 = s.lower_bound(x);
    if (it2 == s.begin()) {
        cout << *it2 << "\n";
    } else if (it2 == s.end()) {
        it2--;
        cout << *it2 << "\n";
    } else {
        int a = *it2; it2--;
        int b = *it2;
        if (x-b < a-x) cout << b << "\n";
        else cout << a << "\n";
    }
}