class Solution {
public:
    vector<int> plusOne(vector<int>& nums) {

        int n = nums.size();
        
        int carry = 1;

        for(int i = n-1 ;i >= 0 ; i--)
        {
            nums[i] += carry;
            carry = nums[i]/10;
            nums[i] = nums[i]%10;

            if(carry == 0)
            {
                break;
            }
        }

        if(carry > 0)
        {
            nums.insert(nums.begin() , 1);
        }

        return nums;

        
    }
};