class Solution {
public:
    void Combination(int i, vector<int>& candidates, int target,vector<vector<int>> &ans,vector<int> &temp ){
        //Base case
        if(i>=candidates.size()){//reached last index
            if(target == 0) ans.push_back(temp); //valid combination
            return;//if target not 0
        }
        if(candidates[i] <= target){//valid pick
            temp.push_back(candidates[i]);//pick
            Combination(i, candidates, target-candidates[i], ans, temp);
            temp.pop_back();//remove element after recusion completes
        }
        Combination(i+1, candidates, target, ans, temp);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        Combination(0, candidates, target, ans, temp);
        return ans;
    }
};