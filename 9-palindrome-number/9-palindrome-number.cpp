class Solution {
public:
    bool isPalindrome(int x) {
      long int a=x;
       long int ans=0,n=0;
        while(x!=0){
            n=x%10;
            ans=(ans*10)+n;
            x=x/10;
        }
        cout<<ans;
        if(ans<0) return false;
        if(ans==a){
            return true;
        }
        
        return false;
    }
};