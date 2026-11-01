class Solution {
public:
    int divide(int dividend, int divisor) {
    if (dividend == INT_MIN && divisor == -1) {
        return INT_MAX;
    }

    long long a = dividend;
    long long b = divisor;
    long long quot = 0;

    if (dividend > 0 && divisor > 0) {
        while (a >= b) {
            a -= b;
            quot++;
        }
        return quot;
    }
    else if (dividend > 0 && divisor < 0) {
        b = -b;
        while (a >= b) {
            a -= b;
            quot++;
        }
        quot = -quot;
        return quot;
    }
    else if (dividend < 0 && divisor > 0) {
        a = -a;
        while (a >= b) {
            a -= b;
            quot++;
        }
        quot = -quot;
        return quot;
    }
    else if (dividend < 0 && divisor < 0) {
        a = -a;
        b = -b;
        while (a >= b) {
            a -= b;
            quot++;
        }
        return quot;
    }

    return 0;
}
};