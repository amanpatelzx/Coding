class Solution {
public:
    int singleCharacter(string &s){
        int maxAns = 1;
        int count = 1;
        for(int i = 0; i < s.size()-1; i++){
            if(s[i] == s[i+1]){
                count++;
                maxAns = max(maxAns , count);
            }
            else count = 1;
        }
        return maxAns;
    }
    int doubleCharacter(string &s , char ch1 , char ch2){
        int maxAns = 0;
        int countCh1 = 0 , countCh2 = 0;
        unordered_map<int,int> mp;
        for(int i = 0; i < s.size(); i++){
            if(s[i] != ch1 && s[i] != ch2){
                mp.clear();
                countCh1 = 0;
                countCh2 = 0;
                continue;
            }
            else {
                if(s[i] == ch1) countCh1++;
                if(s[i] == ch2) countCh2++;
                if(countCh1 == countCh2) maxAns = max(maxAns , countCh1 + countCh2);
                int diff = countCh1 - countCh2;
                if(mp.count(diff)){
                    maxAns = max(maxAns , i - mp[diff]);
                }
                if(!mp.count(diff)) mp[diff] = i;
            }
        }
        return maxAns;
    }
    int trippleCharacter(string &s , char ch1 , char ch2 , char ch3){
        int maxAns = 0;
        int countCh1 = 0, countCh2 = 0, countCh3 = 0;
        // unordered_map<pair<int,int>, int> mp;//we can't store key here becouase c++ dont store key of pair;
        unordered_map<string, int> mp;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ch1) countCh1++;
            if(s[i] == ch2) countCh2++;
            if(s[i] == ch3) countCh3++;
            int diff1 = countCh1 - countCh2;
            int diff2 = countCh1 - countCh3;
            if(countCh1 == countCh2 && countCh1 == countCh3) maxAns = max(maxAns , countCh1 + countCh2 + countCh3);
           string key = to_string(diff1) + "," + to_string(diff2);
            if(mp.count(key)){
                maxAns = max(maxAns , i - mp[key]);
            }
            if(!mp.count(key)) mp[key] = i;
        }
        return maxAns;
    }
    int longestBalanced(string s) {
        int result = 0;
        result = max(result , singleCharacter(s));
        result = max(result , doubleCharacter(s , 'a' , 'b'));
        result = max(result , doubleCharacter(s , 'a' , 'c'));
        result = max(result , doubleCharacter(s , 'b' , 'c'));
        result = max(result , trippleCharacter(s , 'a' ,'b' , 'c'));

        return result;
    }
};