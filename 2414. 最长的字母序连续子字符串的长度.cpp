class Solution {
public:
    int longestContinuousSubstring(string s) {
        int n = s.length();
        int ans = 1;
        for(int i =1;i<n;i++){
            int temp = 1;
            for(int k = i;k<n;k++){
                if(s[k] == s[k-1]+1){
                    temp++;
                }
                else{
                    i = k;
                    break;
                }
            }
            ans = max(ans,temp);
        }
        return ans;
    }
};
