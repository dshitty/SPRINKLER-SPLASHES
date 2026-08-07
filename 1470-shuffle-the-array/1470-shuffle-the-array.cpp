class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector <int>  v1;
        int i = 0, c = 0;
        while(c != nums.size())
        {
            v1.push_back(nums[i]);
            if(i < n)
            i = i + n;
            else
            {
            i = i - n;
            i++;
            }
            c++;
        }
        return v1;
    }
};