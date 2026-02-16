class Solution {
public:
    vector<int> arr;
    bool is_balanced(){
        int count = 0;
        for(int i = 0; i < 26; i++){
            if(arr[i] == 0) continue;
            else{
                count = arr[i];
                break;
            }
        }
        for(int i = 0; i < 26; i++){
            if(arr[i] != 0 && arr[i] != count) return false;
        }
        return true;
    }
    int longestBalanced(string s) {
        int n = s.size();
        if(n == 0) return 0;
        int result = 1;
        for(int i = 0; i < n; i++){
            arr.clear();
            arr.resize(26);
            arr[s[i] - 'a']++;
            for(int j = i+1; j < n; j++){
                arr[s[j] - 'a']++;
                if(is_balanced()) result = max(result , j - i+1);
            }
        }
        return result;
    }
};