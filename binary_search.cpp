int BinarySearch(vector<int>& nums, int target, int low, int high){
    if (high >= low){
        int mid = (high+low)/2;
        if(nums[mid] == target) return mid;
        else if (target > nums[mid]) return BinarySearch(nums, target, mid +1, high);
        else return BinarySearch(nums, target, low, mid-1);
    }
    return -1;
}