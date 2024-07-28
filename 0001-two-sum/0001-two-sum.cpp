class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /*
        //soln1
        vector<int> result;
          sort(nums.begin(),nums.end());
          int l=0;int sum=0;
          int r=nums.size()-1;

          while(l<r)
          {

               sum=nums[l]+nums[r];
               if(target==sum)
               {
                  result.push_back(l);
                  result.push_back(r);
               }
              if(sum>target)
              {
                  r--;
              }else if(sum<target)
              {
                  l++;
              }
          }
          return result;
          */

        vector<int> result;
        unordered_map<int, int> map;
        int res;

        for (int i = 0; i < nums.size(); i++) {
            res = target - nums[i];
            if (map.find(res) != map.end()) {
                result.push_back(i);
                result.push_back(map.at(res));

            } else {
                map[nums[i]] = i;
            }
        }

        return result;
    }
};