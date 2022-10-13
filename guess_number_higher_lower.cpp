/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long lower = 0, upper = n, mid = (upper + lower) / 2;
        
        while(lower <= upper) {
            if(guess(mid) == 1){
                lower = mid + 1;
            } else if(guess(mid) == -1) {
                upper = mid - 1;
            } else {
                break;
            }
            mid = (upper + lower) / 2;
        }
        
        return mid;
    }
};
