class NumArray {
public:
    vector<int> prefixSum;
    NumArray(vector<int>& nums) {
        int sum = 0;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            sum += nums[i];
            prefixSum.push_back(sum);
        }
    }
    
    int sumRange(int left, int right) {
        
        int ans = prefixSum[right];
        
        if(left - 1 >= 0)
        {
            ans -= prefixSum[left-1];
        }
        
        return ans;
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */