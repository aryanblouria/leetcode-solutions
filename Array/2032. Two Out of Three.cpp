//O(n)
class Solution1 {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<bool> v1 (101, false);
        vector<bool> v2 (101, false);
        vector<bool> v3 (101, false);
        
        for (auto x: nums1) v1[x] = true;
        for (auto x: nums2) v2[x] = true;
        for (auto x: nums3) v3[x] = true;
        
        vector<int> v;
        for (int i = 1; i <= 100; i++)
        {
            if ((v1[i] && v2[i]) || (v2[i] && v3[i]) || (v1[i] && v3[i]))
                v.push_back(i);
        }
        return v;
    }
};

//O(n)
class Solution2 {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        set<int> s1 (nums1.begin(), nums1.end());
        set<int> s2 (nums2.begin(), nums2.end());
        set<int> s3 (nums3.begin(), nums3.end());
        
        map<int, int> m;
        for (auto x: s1) m[x]++;
        for (auto x: s2) m[x]++;
        for (auto x: s3) m[x]++;
        
        vector<int> v;
        for (auto x: m)
            if (x.second >= 2) v.push_back(x.first); 
        return v;
    }
};
