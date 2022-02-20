class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // Kadane Algo
        int currMax = 0, maxTillNow = INT_MIN;
        for(int i=0;i<nums.size();i++){
            currMax = max(nums[i], currMax + nums[i]);
            maxTillNow = max(currMax, maxTillNow);
        }
        return maxTillNow;
    }
};