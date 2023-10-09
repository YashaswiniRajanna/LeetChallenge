class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> temp;
        vector<int> res;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                temp.push_back(i);
            }
        }
        if(temp.size()==0){
            res.push_back(-1);
            res.push_back(-1);
        }
        else if(temp.size()==1){
            res.push_back(temp[0]);
            res.push_back(temp[0]);
        }
        else{
            res.push_back(temp[0]);
            res.push_back(temp[temp.size()-1]);
        }
        
       return res; 
    }
};