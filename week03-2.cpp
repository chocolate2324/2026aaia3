//week03-2.cpp ¾Ç²ß­pµe Basic 8
//Leetcode 283. Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k =0;
        for(int num : nums){
            if(num !=0){
                nums[k]=num;
                k++;
            }
        }
        for(int i=k;i<nums.size();i++){
            nums[i]=0;
        }

    }
};
