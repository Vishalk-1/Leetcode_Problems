class Solution {
public:
    bool isPalindrome(string s) {
//         using while() + if else statement;
        
   // int left = 0, right = s.length()-1;
   //  while(left<right)
   //  {
   //      if(!isalnum(s[left])) left++;
   //      else if(!isalnum(s[right])) right--;
   //      else if(tolower(s[left])!=tolower(s[right])) return false;
   //      else {left++; right--;}
   //  }
   //  return true;
        
//         using for loop with isalnum() STL;
        
           string str="";
    for(int i=0;i<s.length();i++){
        if(isalnum(s[i])){
            str+=tolower(s[i]);
        }
    }
    for(int i=0;i<str.length();i++){
        if(str[i]!=str[str.length()-i-1]){
            return false;
        }
    }
    return true;
}
      
    
};