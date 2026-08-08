class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> temp ((matrix[0].size()), vector<int>(matrix.size()));
        for(int i = 0; i < temp.size(); i++)
        {
            for(int j = 0; j < temp[0].size(); j++)
            {
                temp[i][j] = matrix[j][i];
            }
        }
        return temp;
    
    }
};