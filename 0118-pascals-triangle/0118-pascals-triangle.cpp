class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        ans.push_back({1});
        if(numRows == 1)
        return ans;
        ans.push_back({1,1});
        if(numRows == 2)
        return ans;
        vector<int> temp = {1,1};
        int counter = numRows-2;
        while(counter!=0)
        {
            vector<int> temp2;
            temp2.push_back(1);
            for(int i = 0; i < temp.size()-1; i++)
            {
                int sum = temp[i]+temp[i+1] ;
                temp2.push_back(sum);
            }
          
            temp2.push_back(1);
            temp = temp2;
            ans.push_back(temp2);
            counter--;
        }
        return ans;
    }
};