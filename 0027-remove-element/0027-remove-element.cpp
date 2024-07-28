class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> temp;int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=val)
            {
                temp.push_back(nums[i]);
            }
        }

        for(int i=0;i<temp.size();i++)
        {
            nums[i]=temp[i];
            count=count+1;
        }

        return count;
    }
};