class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int n = nums.size();
        int count = 0 ; 
        for(int i = 0 ; i < n ; i++ )
        {
            for(int j = i ; j < n ; j++)
            {
                if( i !=j &&nums[i] + nums[j] < target)
                {
                    count++;
                }
            }
        }

        return count;

    }
};