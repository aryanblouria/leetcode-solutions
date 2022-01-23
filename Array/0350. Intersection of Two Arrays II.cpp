//O(n^2)
class Solution1 {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        set<int> s1, s2;
        for (auto e: nums1)
            s1.insert(e);
        for (auto e: nums2)
            s2.insert(e);
        for (auto e: s1)
        {
            if (find(s2.begin(), s2.end(), e) != s2.end())
            {
                int c1 = count(nums1.begin(), nums1.end(), e);
                int c2 = count(nums2.begin(), nums2.end(), e);
                for (int i = 0; i < min(c1, c2); i++)
                    v.push_back(e);
            }
                
        }
        return v;
    }
};

//O(n)
class Solution2 {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i = 0, j = 0;
        while (i < nums1.size() && j < nums2.size())
        {
            if (nums1[i] < nums2[j])
                i++;
            else if (nums1[i] > nums2[j])
                j++;
            else
            {
                v.push_back(nums1[i]);
                i++;
                j++;
            }          
        }
        return v;
    }
};
