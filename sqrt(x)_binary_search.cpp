class Solution {
public:
    int mySqrt(int x) {
        long long lower = 0, upper = x, mid = (upper + lower) / 2;
        
        while(lower <= upper) {
          if(mid*mid < x) {
             lower = mid + 1;
          } else if(mid*mid > x) {
             upper = mid - 1;
          } else{
             break;
          }
          mid = (upper + lower) / 2;
        }
        
        return mid;
    }
};
