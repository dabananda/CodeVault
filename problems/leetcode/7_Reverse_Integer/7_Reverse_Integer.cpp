class Solution {
public:
    int reverse(int x) {
        long newInt = 0;
        while (x) {
            newInt = newInt * 10 + x % 10;
            x /= 10;
        }
        if (newInt > INT_MAX || newInt < INT_MIN) return 0;
        return newInt;
    }
};