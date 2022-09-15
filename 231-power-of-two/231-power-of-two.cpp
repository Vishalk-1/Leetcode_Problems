class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0){
            return false;
        }
        if(n==1)
            return true;
        int ans=1;
        if(n%2!=0){
            return false;
        }
      return  isPowerOfTwo(n/2);
      
    }
};
