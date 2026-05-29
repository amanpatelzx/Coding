#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll MOD = 1000000007LL;

class RunningStats {
public:
    
    ll sum = 0;
    ll cnt = 0;

    // ---------- MODE ----------
    unordered_map<ll,ll> freq;

    set<pair<ll,ll>> modeSet;
    // stores {-freq, value}

    // ---------- MEDIAN ----------
    multiset<ll> leftPart;   // smaller half
    multiset<ll> rightPart;  // larger half

    // ---------- POWER ----------
    ll power(ll a, ll b){
        ll res = 1;

        a %= MOD;

        while(b){
            if(b & 1){
                res = (res * a) % MOD;
            }

            a = (a * a) % MOD;
            b >>= 1;
        }

        return res;
    }

    ll modDivide(ll p, ll q){
        p %= MOD;
        ll inv = power(q, MOD - 2);

        return (p * inv) % MOD;
    }

    // ---------- BALANCE ----------
    void balance(){

        while(leftPart.size() > rightPart.size() + 1){
            auto it = prev(leftPart.end());

            rightPart.insert(*it);
            leftPart.erase(it);
        }

        while(leftPart.size() < rightPart.size()){

            auto it = rightPart.begin();

            leftPart.insert(*it);
            rightPart.erase(it);
        }
    }

    // ---------- INSERT ----------
    void insertValue(ll x){

        // mean
        sum += x;
        cnt++;

        // mode
        if(freq.count(x)){
            modeSet.erase({-freq[x], x});
        }

        freq[x]++;

        modeSet.insert({-freq[x], x});

        // median
        if(leftPart.empty() || x <= *prev(leftPart.end())){
            leftPart.insert(x);
        }
        else{
            rightPart.insert(x);
        }

        balance();
    }

    // ---------- REMOVE ----------
    void removeValue(ll x){

        // mean
        sum -= x;
        cnt--;

        // mode
        modeSet.erase({-freq[x], x});

        freq[x]--;

        if(freq[x] > 0){
            modeSet.insert({-freq[x], x});
        }

        // median
        auto it = leftPart.find(x);

        if(it != leftPart.end()){
            leftPart.erase(it);
        }
        else{
            it = rightPart.find(x);
            rightPart.erase(it);
        }

        balance();
    }

    // ---------- GET MEAN ----------
    void getMean(){

        if(cnt == 0){
            cout << -1 << '\n';
            return;
        }

        if(sum % cnt == 0){
            cout << sum / cnt << '\n';
        }
        else{
            cout << modDivide(sum, cnt) << '\n';
        }
    }

    // ---------- GET MODE ----------
    void getMode(){

        if(cnt == 0){
            cout << -1 << '\n';
            return;
        }

        cout << modeSet.begin()->second << '\n';
    }

    // ---------- GET MEDIAN ----------
    void getMedian(){

        if(cnt == 0){
            cout << -1 << '\n';
            return;
        }

        // odd count
        if(cnt & 1){

            cout << *prev(leftPart.end()) << '\n';
        }
        else{

            ll a = *prev(leftPart.end());
            ll b = *rightPart.begin();

            ll num = a + b;

            if(num % 2 == 0){
                cout << num / 2 << '\n';
            }
            else{
                cout << modDivide(num, 2) << '\n';
            }
        }
    }
};

void solve(){

    int q;
    cin >> q;

    RunningStats ds;

    while(q--){

        string s;
        cin >> s;

        if(s == "insert"){

            ll x;
            cin >> x;

            ds.insertValue(x);
        }

        else if(s == "remove"){

            ll x;
            cin >> x;

            ds.removeValue(x);
        }

        else if(s == "getMean"){

            ds.getMean();
        }

        else if(s == "getMedian"){

            ds.getMedian();
        }

        else if(s == "getMode"){

            ds.getMode();
        }
    }
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while(T--){
        solve();
    }

    return 0;
}