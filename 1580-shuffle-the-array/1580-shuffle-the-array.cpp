class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int i=0;
        vector<int> temp;
        for(int i=0;i<n;i++)
        {
         temp.push_back(nums[i]);
         temp.push_back(nums[i+n]);
        
        }

        return temp;
    }
};