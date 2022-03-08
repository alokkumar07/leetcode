class Solution {
public:
    int titleToNumber(string columnTitle) {
        //int n=columTitle.size();
        int ans=0;
        for(auto m : columnTitle){
           int a =m -'A'+1;
            ans=ans*26+a;
        }
        return ans;
    }
};