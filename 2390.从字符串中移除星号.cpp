class Solution {
public:
    deque<char> ans;
    string removeStars(string s) {
        int n = s.length();
        for(int i = 0; i< n;i++){
            if(s[i]!='*'){
                ans.push_back(s[i]);
            }
            else{
                if(!ans.empty()){
                    ans.pop_back();
                }
            }
        }
        string res = "";
        while(!ans.empty()){
            res+= ans.front();
            ans.pop_front();
        }
        return res;
    }
};
