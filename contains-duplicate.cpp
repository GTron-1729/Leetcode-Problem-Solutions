class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> nos;
        for(int i=0;i<nums.size();i++){
            if(nos.find(nums[i]) != nos.end()){
                return true;
            }
            nos.insert(nums[i]);
        }
        return false;
    }
};