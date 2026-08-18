class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
       int largest = nums[0];
       int sLargest = -1;
       for(int i = 1; i<nums.size(); i++)
       {
        if(nums[i]>largest)
        {
            sLargest = largest;
            largest = nums[i];
        }
        else if( nums[i] != largest && nums[i] > sLargest)
        {
            sLargest = nums[i];
        }
       }
       return sLargest;
    }
};