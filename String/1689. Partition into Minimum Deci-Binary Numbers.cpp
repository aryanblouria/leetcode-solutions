//O(n)
class Solution1 {
public:
    int minPartitions(string n) {
        int mx = 0;
        for (int i = 0; i < n.length(); i++)
            mx = max(mx, n[i] - '0');
        return mx;
    }
};

//O(n)
class Solution2 {
public:
    int minPartitions(string n) {
        return *max_element(n.begin(), n.end()) - '0';
    }
};
