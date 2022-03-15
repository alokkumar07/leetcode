class Solution {
public:
    string removeKdigits(string num, int k) {
    int n =num.size();
        stack<char> st;
        for(char c: num)
        {
         while(!st.empty() && k>0 && st.top()>c)  //monotonic peak element 
         { st.pop(); k-=1; }
             
            if(!st.empty() || c!='0')
                st.push(c);
        }
        
        // now remove largest values from the top of the stack 1 2 3 k=2
        
        while(!st.empty() && k--)
            st.pop();
        if(st.empty())
            return "0";  // 1 0 0 1 = 0 0 = 0
        
        while(!st.empty()) //retrieve the number from stack into a string from right side  
        {
           num[n-1] =st.top();
            st.pop();
            n-=1;
        }
          return num.substr(n);                        
        
    }
};