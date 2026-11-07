class Solution {
public:
    char processStr(string s, long long k) {
        vector<long long> str(s.size() + 1, 0);

        for (int i = 0; i < s.size(); i++) {
            str[i + 1] = str[i];

            if ('a' <= s[i] && s[i] <= 'z') {
                str[i + 1]++;
            } else if (s[i] == '#') {
                str[i + 1] *= 2;
            } else if (s[i] == '*') {
                if (str[i + 1] != 0) {
                    str[i + 1]--;
                }
            }
        }

        if (k >= str[s.size()]) {
            return '.';
        }

        for (int i = s.size() - 1; i >= 0; i--) {
            if ('a' <= s[i] && s[i] <= 'z') {
                if (k == str[i]) {
                    return s[i];
                }
            } else if (s[i] == '#') {
                if (str[i] != 0) {
                    k %= str[i];
                }
            } else if (s[i] == '%') {
                if (str[i] != 0) {
                    k = str[i] - 1 - k;
                }
            }
        }

        return '.';
    }
};