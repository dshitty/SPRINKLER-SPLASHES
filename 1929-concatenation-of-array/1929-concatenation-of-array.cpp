class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector <int> v1;
        int c = 0;
        while(c < 2)
        {
            for(int i = 0; i < nums.size(); i++)
            {
                v1.push_back(nums[i]);
            }
            c++;
        }
        return v1;
    }
};