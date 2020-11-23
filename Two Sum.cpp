class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mp;
        for(int i=0;i<nums.size();i++){
            int dif = target - nums[i];
            if(mp.count(dif)) // return 1 if key is present, 0 if absent
                return {mp[dif] , i};
            mp[nums[i]] = i;
        }
        return {};
    }
};
