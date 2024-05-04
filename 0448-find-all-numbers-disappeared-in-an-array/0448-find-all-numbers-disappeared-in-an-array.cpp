class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        
        int n = nums.size();
         
        vector<int> check(n+1 , 0);
        
        for(int i = 0 ; i < n ; i++)
        {
            check[nums[i]] += 1;
        }
        
        
        vector<int> ans;
        
        for(int i = 1 ; i < n+1 ; i++)
        {
            if(check[i] == 0)
            {
                ans.push_back(i);
            }
        }
        
        return ans;
        
    }
};