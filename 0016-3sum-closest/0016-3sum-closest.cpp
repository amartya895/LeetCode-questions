class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        int n = nums.size(), sum = 0 , ans = 0;

        int diff = INT_MAX;
        sort(nums.begin() , nums.end());
        if(n == 3)
        {
            return nums[0]+nums[1]+nums[2];
        }
        for(int i = 0 ; i < n ; i++)
        {
             if( i > 0 && nums[i] == nums[i-1]) continue;
             int first = nums[i];
             int j = i+1;
             int k = n-1;

             while(j < k)
             {
                 sum = first + nums[j] + nums[k];
                 if(sum == target) return target;
                 else if(abs(target - sum) < diff)
                 {
                     diff = abs(target - sum);
                     ans = sum;
                 }
                 if(sum > target)
                 {
                     k--;
                 }
                 else
                 {
                     j++;
                 }
             }
        }

        return ans;
    }
};