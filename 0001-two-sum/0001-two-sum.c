/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *adhi=(int*)malloc(2*sizeof(int));
    for(int i=0;i<numsSize;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if(nums[i]+nums[j]==target)
            { adhi[0]=i;
             adhi[1]=j;
             *returnSize=2;
             return adhi;}
        }
    } 
       returnSize = 0;  // If no solution is found, return size 0
       return NULL;
}
