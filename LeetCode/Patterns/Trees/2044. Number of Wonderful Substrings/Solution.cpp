class Solution {
public:
    long long wonderfulSubstrings(string word) {
    long long answer = 0;
    int mask = 0;

    // 2^10 possible parity patterns for the letters 'a' through 'j'
    vector<long long> seen(1 << 10, 0);

    // The prefix before the first character has all counts even
    seen[0] = 1;

    for (int i = 0; i < word.size(); i++) {
        int bit = word[i] - 'a';

        // Flip this character's bit: its count changes odd ↔ even
        mask ^= (1 << bit);

        // Same mask means zero odd-count letters
        answer += seen[mask];

        // A mask differing in one bit means one odd-count letter
        for (int b = 0; b < 10; b++) {
            int previousMask = mask ^ (1 << b);
            answer += seen[previousMask];
        }

        // Save this prefix pattern for future substrings
        seen[mask]++;
    }

    return answer;
}

};