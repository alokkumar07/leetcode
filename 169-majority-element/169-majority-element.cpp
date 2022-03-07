class Solution {
public:
    int majorityElement(vector<int>& nums) {
//           sort(nums.begin(), nums.end());
//         return nums[nums.size()/2];
        int n=nums.size();
        int ans=nums[0], freq=1;
        for(int i=1;i<n;i++){
            if(nums[i]==ans)
                freq++;
            else
            {
                freq--;
                if(freq==0)
                    ans=nums[i],freq=1;
            }
            
        }
        freq=0;
        for(int i=0;i<n;i++)
            if(nums[i]==ans) freq++;
        if(freq>(n/2))
            return ans;
        return -1;
    
        
    }
};