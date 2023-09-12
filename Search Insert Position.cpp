class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i = 0; i<nums.size();i++){
            if(nums[i] == target){
                return i;
            }
            else if(target < nums[i]){
                return i;
            }
            else if(i == nums.size() - 1){
                if (nums[i] != target){
                    return i+1;
                }
            }
        }
        return {};
    }
};
