class Solution {
public:
    int lengthOfLastWord(string s) {
     int x=0,b=0;  
      for(int i=0;i<s.length();i++){
          if(s[i]==' '){
              x=0;
          }
          else{
              x++;
              b=x;
          }
      }
        return b;
    }
};
