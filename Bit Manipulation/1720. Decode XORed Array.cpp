//O(n)
class Solution1 {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> v = {first};
        for (int i = 0; i < encoded.size(); i++)
        {
            v.push_back(first ^ encoded[i]);
            first ^= encoded[i];
        }
        return v;
    }
};

//O(n)
class Solution2 {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        encoded.insert(encoded.begin(), first);
        for(int i = 1; i < encoded.size(); i++)
            encoded[i] ^= encoded[i-1];
        return encoded;
    }
};
