class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>> temp(image.size(), vector <int> (image[0].size()));
        for(int i = 0; i < image.size();i++)
        {
          int  k = image[i].size()-1;
            for(int j = 0; j < image[0].size(); j++)
            {
                temp[i][j] = image[i][k] ^ 1;
                k--;
            }
        }
        return temp;
    }
};