class Solution {
public:
    int romanToInt(string s) {
        map<char, int> mp = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int no = 0;
        if(s.size() == 1){
            if (mp.find(s[0])!= mp.end()){
                // Direct vaule in map
                return mp[s[0]];
            }
        }
        for(int i=0;i<s.size()-1;i++){
            if(mp[s[i]] >= mp[s[i+1]]){ //if Right letter is smaller or equal
                no = no + mp[s[i]]; 
                if(i == s.size()-2) no = no + mp[s[i+1]];
            }
            else{ // If right letter is bigger (we need to subtract)
                no = no + abs(mp[s[i]]-mp[s[i+1]]);
                i++; // two letters covered at once
                if(i == s.size()-2) no = no + mp[s[i+1]];
            }
            //cout<<no<<"\n";
        }
        return no;
    }
};