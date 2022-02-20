class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ref_str = strs[0];
        if (ref_str == "") return "";
        string ans = "";
        for(int i=0;i<ref_str.size();i++){
            int c = 0;
            for(int j=1;j<strs.size();j++){
                if(strs[j][i] == ref_str[i]){
                    c++;
                }
            }
            if(c != strs.size()-1){
                return ans;
            }
            else{
                ans += ref_str[i];
            }
        }
        return ans;
    }
};