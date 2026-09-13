class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string a,b;
        int n = s.size()-1, m = t.size()-1;
        while(n>=0 || m>=0){
            int c = 0;
            while(n>=0) {
               if(s[n] == '#'){
                    c++;
                    n--; 
                }else if(c>0){
                    c--;
                    n--;
                }
                else{
                    break;
                }  
            }
            c = 0;
            while(m >= 0) {
                if(t[m] == '#'){
                    c++;
                    m--; 
                }else if(c>0){
                    c--;
                    m--;
                }
                else{
                    break;
                }
            }
            if((n >= 0) != (m >= 0)) return false;
            if(n>=0 && m>=0 && s[n] != t[m]){
                return false;
            }
            n--;
            m--;
        }
        return true;
    }
};