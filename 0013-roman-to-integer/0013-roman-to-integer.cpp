class Solution {
public:
    int romanToInt(string s) {
        int n=s.size();
        int ans=0;
        unordered_map<char,int>h{{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        for(int i=0;i<n;i++){
            if(h[s[i]]<h[s[i+1]]){
                ans-=h[s[i]];
            }
            else
                ans+=h[s[i]];
        }
        return ans;
    }
};