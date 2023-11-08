class Solution {
public:
    int partitionIndex(vector<int>& nums , int start , int end)
    {
        int pivot = nums[start];
        int i = start;
        int j = end;

        while(i < j)
        {
            while(nums[i] <= pivot &&  i <= end - 1)
            {
                i++;
            }

            while(nums[j] >= pivot && j >= start +1 )
            {
                j--;
            }

            if(i < j) swap(nums[i] , nums[j]);
        }

        swap(nums[start] , nums[j]);
        return j;
    }

    void quickSort(vector<int>&nums , int start , int end)
    {
        if(start >= end)
        {
            return;
        }

        int i = partitionIndex(nums , start , end);

        quickSort(nums , start , i-1);
        quickSort(nums , i+1 , end);
    }
    vector<int> sortArray(vector<int>& nums) {
            
            sort(nums.begin() ,nums.end());
            return nums;

    }
};