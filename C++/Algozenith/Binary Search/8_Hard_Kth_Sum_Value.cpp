#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pi;
typedef pair<ll,ll> pl;
typedef __int128_t lll;
#define UM unordered_map
#define US unordered_set
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define For(i,a,b) for (int i = a; i <= b; i++)
//mast question hai , try again, double binary search ka
bool check(vl &a, vl &b, ll k, ll mid){
    ll cnt = 0;
    int n = a.size();
    for(int i = 0; i < n; i++){
        ll val = a[i];
        //a[i] + b[j] <= mid;
        val = mid - val;
        cnt += upper_bound(b.begin(),b.end(),val) - b.begin();
    }
    return cnt >= k;
}
void solve(){
    ll n,m,k; cin>>n>>m>>k;
    vl a(n),b(m);
    For(i,0,n-1) cin>>a[i];
    For(i,0,m-1) cin>>b[i];

    if(n > m){
        swap(n,m);
        swap(a,b);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    ll low = 0, high = a[n-1] + b[m-1];
    ll res = high;
    while(low <= high){
        ll mid = low + (high - low) / 2;
        if(check(a,b,k,mid)){
            res = min(res, mid);
            high = mid-1;
        }
        else low = mid + 1;
    }
    cout<<res<<'\n';
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}

/*
Kth Sum Value

Time Limit: 3 sec
Memory Limit: 256 MB

Description

Given two arrays A of size N and B of size M and an integer K.
Create a new array C of size N × M consisting of A[i] + B[j]
for 1 ≤ i ≤ N and 1 ≤ j ≤ M.

Find the K-th smallest element in the array C.

Input Format

The first line contains T, the number of test cases.

Each test case begins with three space-separated integers N, M, K where:

1 ≤ N ≤ 10^6
1 ≤ M ≤ 10^6
1 ≤ K ≤ N × M

The next line contains N space-separated integers representing:
A1, A2, ..., AN

The next line contains M space-separated integers representing:
B1, B2, ..., BM

It is guaranteed that:

Sum of min(N, M) over all test cases ≤ 10^5

Output Format

For each test case print the K-th smallest element in the array C.

Constraints

1 ≤ T ≤ 10000

1 ≤ N ≤ 10^6
1 ≤ M ≤ 10^6

1 ≤ K ≤ N × M

0 ≤ Ai ≤ 10^4
0 ≤ Bi ≤ 10^4

Sum of min(N, M) over all test cases ≤ 10^5

Sample Input

1
3 3 6
1 2 3
4 5 6

Sample Output

7

Explanation

All pairwise sums are:

1+4 = 5
1+5 = 6
1+6 = 7

2+4 = 6
2+5 = 7
2+6 = 8

3+4 = 7
3+5 = 8
3+6 = 9

C = [5, 6, 7, 6, 7, 8, 7, 8, 9]

After sorting:

[5, 6, 6, 7, 7, 7, 8, 8, 9]

The 6th smallest element is 7.
*/