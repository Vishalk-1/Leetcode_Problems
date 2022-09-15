class Solution {
public:
    bool isPowerOfThree(int n) {
        int ans=1;
        if(n<=0){
            return false;
        }
        if(n==1) return true;
        for(int i=1;i<=30;i++){
              if(ans==n){
                return true;
            }
            if(ans<INT_MAX/2)
            ans=ans*3;
          
        }
        return false;
    }
};