class Solution {
    public int majorityElement(int[] nums) {
        Arrays.sort(nums);
        int majority_element = (nums[nums.length/2]);
        return majority_element;
    }
}
