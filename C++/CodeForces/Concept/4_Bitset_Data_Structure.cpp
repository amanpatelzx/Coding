#include<bits/stdc++.h>
using namespace std;
int main(){
    bitset<10> s;
    s[1] = 1;
    s[3] = 1;
    s[4] = 1;
    s[7] = 1;
    cout << s[4] << "\n"; // 1
    cout << s[5] << "\n"; // 0

    bitset<12> s(string("100011101011"));//// from right to left
    cout<<s[3]<<"\n";
    cout<<s.size()<<"\n";
    cout<<s.count()<<"\n";//no. of setbit or 1;
    for(int i = 0; i < s.size(); i++){
        cout<<s[i]<<" ";
    }
    cout<<"\n";
    bitset<10> a(string("0010110110"));
    bitset<10> b(string("1011011000"));
    cout << (a&b) << "\n"; // 0010010000
    cout << (a|b) << "\n"; // 1011111110
    cout << (a^b) << "\n"; // 1001101110
}