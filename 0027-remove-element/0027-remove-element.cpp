class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>v1;
        for(int i = 0; i < nums.size(); i++)
        {
            if(val != nums[i])
            v1.push_back(nums[i]);
        }
        nums = v1;
        return nums.size();
    }
};