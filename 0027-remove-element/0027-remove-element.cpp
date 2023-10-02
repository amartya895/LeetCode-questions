class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        //4722546259112960
        //09/23

        vector<int> temp;

        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i] != val)
            {
                temp.push_back(nums[i]);
            }


        }

        for(int i = 0 ; i < temp.size() ; i++)
        {
            nums[i] = temp[i];
        }

        return temp.size();
    }
};