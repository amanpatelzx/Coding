// #include<bits/stdc++.h>//very good question
// using namespace std;
// void solve(){
//     int n;
//     cin>>n;
//     int result = 1;
//     vector<int> nums(n+1, 0);
//     int i = 2;
//     for(int j = 2; j <= n; j++){
//         int i = 2;
//         int a = j;
//         while(a > 1){
//             if(a % i == 0){
//                 int count = 0;
//                 while(a % i == 0){
//                     a /= i;
//                     count++;
//                 }
//                 nums[i] = max(nums[i] , count);
//             }   
//             i++;
//         }
//     }
//     for(int i = 1; i <= n; i++){
//         if(nums[i] != 0){
//             result *= pow(i , nums[i]);
//         }
//     }
//     cout<<result<<"\n";
// }
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         solve();
//     }
// }
//input
// 2
// 3
// 10

//output
// 6
// 2520

// optimise version;

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    
    // Use long long to prevent integer overflow for larger 'n'
    long long result = 1; 
    
    // Sieve to find primes up to 'n'
    vector<bool> is_prime(n + 1, true);
    
    for (int p = 2; p <= n; p++) {
        // If 'p' is prime
        if (is_prime[p]) {
            // Mark all multiples of 'p' as non-prime
            for (int i = p * p; i <= n; i += p) {
                is_prime[i] = false;
            }
            
            // Find the highest power of this prime 'p' that is <= n
            long long current_power = p;
            while (current_power * p <= n) {
                current_power *= p;
            }
            
            // Multiply the highest power into our result
            result *= current_power;
        }
    }
    
    cout << result << "\n";
}

int main(){
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}