class Solution {
public:
    int getSum(int a, int b) {
    int carry;
    int sum;
    while(carry!=0){
        sum=a^b;
        carry=(uint32_t)(a&b)<<1;
        a=sum;
        b=carry;
}
return sum;
    }
};