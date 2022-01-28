//O(n)
class Solution1 {
public:
    int numJewelsInStones(string jewels, string stones) {
        int sum = 0;
        for (char c: jewels)
            sum += count(stones.begin(), stones.end(), c);
        return sum;
    }
};

//O(n)
class Solution2 {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char, int> m;
        for (auto x: stones)
            m[x]++;
        
        int ans = 0;
        for (auto x: jewels)
            ans += m[x];
        return ans;
    }
};
