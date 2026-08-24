class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = -1;
        int count = 0;
        for (auto num : nums) {
            if (count == 0) {
                candidate = num;
                count = 1;
            } else if (candidate == num)
                count++;
            else
                count--;
        }
        count = 0;
        for (auto num : nums)
            if (candidate == num)
                count++;

        return count > nums.size() / 2 ? candidate : -1;
    }
};