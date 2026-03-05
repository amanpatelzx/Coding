#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pb push_back
#define endl "\n"
#define all(x) (x).begin(), (x).end()
#define mod 1000000007
#define PI 3.141592653589793238
 
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
// Check Prime
bool isPrime(ll n)
{
    if (n < 2)
        return false;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
 
// Sieve of Eratosthenes
vector<bool> sieve(int n)
{
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= n; j += i)
                isPrime[j] = false;
        }
    }
    return isPrime;
}
 
// GCD & LCM
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
 
// Power
ll power(ll a, ll b)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}
 
// Modular Power
ll modPower(ll a, ll b, ll m = mod)
{
    ll res = 1;
    a %= m;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
 
ll modInverse(ll a, ll m = mod)
{
    return modPower(a, m - 2, m);
}
 
// Decimal to Binary
string decimalToBinary(ll n)
{
    if (n == 0)
        return "0";
    string bin = "";
    while (n > 0)
    {
        bin += char('0' + (n % 2));
        n /= 2;
    }
    reverse(all(bin));
    return bin;
}
 
// Binary to Decimal
ll binaryToDecimal(string s)
{
    ll res = 0;
    for (char c : s)
    {
        res = res * 2 + (c - '0');
    }
    return res;
}
 
int main()
{
    fastIO();
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<vector<ll int>> arr(n);
        ll int c = 0;
 
        for (int i = 0; i < n; i++)
        {
            ll int x, y;
            cin >> x;
 
            for (int j = 0; j < x; j++)
            {
                cin >> y;
                arr[i].push_back(y);
            }
            reverse(arr[i].begin(), arr[i].end());
            unordered_set<ll> st;
            vector<ll> temp;
 
            for (int j = 0; j < arr[i].size(); j++)
            {
                if (st.find(arr[i][j]) == st.end())
                {
                    st.insert(arr[i][j]);
                    temp.push_back(arr[i][j]);
                }
            }
 
            arr[i] = temp;
            c += arr[i].size();
           
        }
 
        vector<ll> vis(1e6 + 1, 0);
 
        while (c > 0 && !arr.empty())
        {
            sort(arr.begin(), arr.end());
 
            vector<vector<ll>> brr;
 
            if (!arr[0].empty())
            {
                for (int i = 0; i < arr[0].size(); i++)
                {
                    if (!vis[arr[0][i]])
                    {
                        cout << arr[0][i] << " ";
                        vis[arr[0][i]] = 1;
                        c--;
                    }
                }
            }
 
            arr.erase(arr.begin());
 
            for (int i = 0; i < arr.size(); i++)
            {
                vector<ll> temp;
                for (int j = 0; j < arr[i].size(); j++)
                {
                    if (!vis[arr[i][j]])
                        temp.push_back(arr[i][j]);
                }
                if (temp.size())
                    brr.push_back(temp);
            }
 
            arr = brr;
        }
 
        cout << endl;
    }
    return 0;
}