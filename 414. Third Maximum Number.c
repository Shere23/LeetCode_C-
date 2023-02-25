// Given an integer array nums, return the third distinct maximum number in this array. If the third maximum does not exist, return the maximum number.

 
int thirdMax(int* nums, int numsSize){

int tmp,res;
int cnt = 1;

   for(int i = 0 ; i < numsSize - 1 ; i++){
       for(int j = 0 ; j < numsSize - i - 1 ; j++){
            if(nums[j] < nums[j+1]){
                tmp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = tmp;
            }
       }
   } 


res = nums[0];

for(int i = 1 ; i < numsSize ; i++){
    if(nums[i] != res){
         cnt++;
         res = nums[i];
    }
           
    
    if(cnt == 3)
        return res;
 }
    

    
    return nums[0];

}
