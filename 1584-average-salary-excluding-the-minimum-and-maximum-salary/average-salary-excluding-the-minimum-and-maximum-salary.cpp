class Solution {
public:
    double average(vector<int>& sa) {
     int mi=INT_MAX;
     int ma=INT_MIN;
     double ans=0;
     for(int &x:sa){
      mi=min(mi,x);
      ma=max(ma,x);
      ans+=x;
     }   
     ans=ans-(mi+ma);
     ans=ans/(sa.size()-2);
     return ans;
    }
};