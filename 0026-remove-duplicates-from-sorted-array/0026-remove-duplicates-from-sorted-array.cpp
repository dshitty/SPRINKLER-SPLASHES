class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> copy;
        int temp = nums[0];
        copy.push_back(temp);
        int counter = 1;
        for(int i = 0; i < nums.size(); i++)
        {
            if(temp!=nums[i])
            {
                counter++;
                temp = nums[i];
                copy.push_back(temp);
            }
        }
        nums = copy;
        return counter;
    }
};