class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;

        int l = 0;
        int sum = 0;
        int r = numbers.size() - 1;

        while (l < r) {

            sum = numbers[l] + numbers[r];
            if (target == sum) {
                result.push_back(l + 1);
                result.push_back(r + 1);
                break;
            }
            if (sum > target) {
                r--;
            } else if (sum < target) {
                l++;
            }
        }
        return result;
    }
};