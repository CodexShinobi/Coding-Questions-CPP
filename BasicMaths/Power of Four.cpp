class Solution {
public:
    bool isPowerOfFour(int n) {
        // Must be positive
        if (n <= 0) return false;
        // Check if n is a power of two (only one bit set)
        if (n & (n - 1)) return false;
        // Check if the single set bit is at an odd position (1, 4, 16, ...)
        return (n & 0x55555555) != 0;
    }
};
