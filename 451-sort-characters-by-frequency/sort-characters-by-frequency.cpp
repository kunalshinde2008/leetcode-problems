class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mpp;
        vector<pair<char, int>> ans;

        for (auto x : s) {
            mpp[x]++;
        }

        for (auto it : mpp) {
            ans.push_back({it.first, it.second});
        }

        sort(ans.begin(), ans.end(), [](auto &a, auto &b) {
            if (a.second != b.second)
                return a.second > b.second;
            return a.first < b.first;
        });

        string result;

        for (auto it : ans) {
            result += string(it.second, it.first);
        }

        return result;
    }
};