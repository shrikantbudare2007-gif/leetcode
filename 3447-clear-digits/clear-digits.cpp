class Solution {
public:
    string clearDigits(string s) {
        stack<char>sh;
        for(char ch:s){
         if(isalpha(ch)){
            sh.push(ch);
         }
         else{
            sh.pop();
         }
        }
        string ans="";
        while(!sh.empty()){
            ans+=sh.top();
            sh.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};