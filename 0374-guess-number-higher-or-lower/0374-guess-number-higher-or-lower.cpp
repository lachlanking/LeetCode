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
        int l = 1;
        int r = n;
        int mid;
        int temp = 0;
        
        
        while (l <= r){
            mid = l + (r-l)/2;
            switch(guess(mid)) {
                case -1: r = mid-1; break;
                case 0: return mid;
                case 1: l = mid+1; break;
            }
            
        }
        
        return mid;
        
    }
};