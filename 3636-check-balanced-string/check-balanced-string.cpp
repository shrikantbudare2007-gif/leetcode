class Solution {
public:
    bool isBalanced(string num) {
        int osum=0,esum=0;
        for(int i=0;i<num.size();i++){
            if(i%2==0) esum+=(num[i]-'0');
            else osum+=(num[i]-'0');
        }
        if(osum==esum) return true;
        return false;
    }
};