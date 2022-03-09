class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans=0;
        bool fa=false;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]==' ' && fa==true)
            {
                break;
            }
            else if(s[i]!=' ')
            {
                fa=true;
                ans++;
            }

        }
    return ans;
        
    }
};