class Solution {
public:
    vector<int> countServers(int n, vector<vector<int>>& logs, int x,
                             vector<int>& queries) {
        sort(logs.begin(), logs.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 return a[1] < b[1];
             });

        vector<pair<int, int>> sortedQueries;
        for (int i = 0; i < queries.size(); i++) {
            sortedQueries.push_back({queries[i], i});
        }
        sort(sortedQueries.begin(), sortedQueries.end());

        vector<int> answer(queries.size());
        vector<int> serverCount(n + 1, 0);
        int left = 0, right = 0, activeServers = 0;

        for (auto [q, originalIndex] : sortedQueries) {
            while (right < logs.size() && logs[right][1] <= q) {
                int id = logs[right][0];
                if (serverCount[id]++ == 0) activeServers++;
                right++;
            }

            while (left < right && logs[left][1] < q - x) {
                int id = logs[left][0];
                if (--serverCount[id] == 0) activeServers--;
                left++;
            }

            answer[originalIndex] = n - activeServers;
        }

        return answer;
    }
};