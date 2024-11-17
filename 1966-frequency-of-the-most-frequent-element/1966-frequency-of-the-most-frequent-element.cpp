class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {

  sort(nums.begin(), nums.end());

        int l = 0, r = 0;
        long long sumTill = 0; 
        int maxFreq = 0;

        while (r < nums.size()) {
            sumTill += nums[r];

            while ((long long)nums[r] * (r - l + 1) > sumTill + k) {
                sumTill -= nums[l];
                l++; 
            }
            maxFreq = max(maxFreq, r - l + 1);
            r++;
        }

        return maxFreq;
        
    }
};