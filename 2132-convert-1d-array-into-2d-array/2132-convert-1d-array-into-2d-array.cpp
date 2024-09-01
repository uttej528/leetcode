class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int size=original.size();
          vector<vector<int>> ans(m, vector<int>(n));int i,j,k=0;
        if(m*n!=size)
        {
            return {};
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                ans[i][j]=original[k];
                k++;
            }
        }
        return ans;
    }
};