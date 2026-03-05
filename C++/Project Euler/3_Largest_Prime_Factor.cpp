// #include<bits\stdc++.h>
// using namespace std;
// bool is_prime(long n){
//     if(n <= 1) return false;
//     for(long i = 2; i <= sqrt(n); i++){
//         if(n % i == 0) return false;
//     }
//     return true;
// }
// int main(){
//     int t;
//     cin >> t;
//     for(int a0 = 0; a0 < t; a0++){
//         long n;
//         cin >> n;
//         bool check = false;
//         for(long i = 1; i <= sqrt(n); i++){
//             if((n) % (n/i) == 0 && is_prime(n/i)){
//                 cout<<(n/i)<<"\n";
//                 check = true;
//                 break;
//             }
//         }
//         for(long i = sqrt(n); i > 1; i--){
//             if(check) break;
//             if((n) % i == 0 && is_prime(i)){
//                 cout<<(i)<<"\n";
//                 break;
//             }
//         }
//     }
    
//     return 0;
// }

// my Solution is of O(n);

//but down is O(sqrt(n));
#include <bits/stdc++.h>
using namespace std;

long largestPrimeFactor(long n) {
    long maxPrime = -1;
    // remove factor 2
    while(n % 2 == 0){
        maxPrime = 2;
        n /= 2;
    }
    // check odd factors
    for(long i = 3; i * i <= n; i += 2){
        while(n % i == 0){
            maxPrime = i;
            n /= i;
        }
    }
    // if n is prime and > 2
    if(n > 2)
        maxPrime = n;
    return maxPrime;
}
int main(){
    int t;
    cin >> t;

    while(t--){
        long n;
        cin >> n;
        cout << largestPrimeFactor(n) << "\n";
    }
}
