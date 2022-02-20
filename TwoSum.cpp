class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        map<int,int> mp;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(mp.find(target - nums[i]) != mp.end()){
                result.push_back(mp[target - nums[i]]);
                result.push_back(i);
            }
            mp[nums[i]] = i;
        }
        return result;
    }
};