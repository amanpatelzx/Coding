#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
bool is_prime(long n){
    if(n <= 1) return false;
    for(long i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        bool check = false;
        for(long i = 1; i <= sqrt(n); i++){
            if((n) % (n/i) == 0 && is_prime(n/i)){
                cout<<(n/i)<<"\n";
                check = true;
                break;
            }
        }
        for(long i = sqrt(n); i > 1; i--){
            if(check) break;
            if((n) % i == 0 && is_prime(i)){
                cout<<(i)<<"\n";
                break;
            }
        }
    }
    
    return 0;
}
