class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector <int> temp;
        int cap = (nums.size()-k);
        if(cap<0)
         cap = nums.size() - (k % nums.size());
        for(int i = cap; i < nums.size(); i++)
        {
            temp.push_back(nums[i]);
        }
        for(int i = 0; i < cap; i++)
        {
            temp.push_back(nums[i]);
        }
        nums = temp;
    }
};