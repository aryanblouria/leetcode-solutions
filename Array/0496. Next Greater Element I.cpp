//O(n*m*log(m))
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        for (int i = 0; i < nums1.size(); i++)
        {
            bool found = false;
            for (int j = find(nums2.begin(), nums2.end(), nums1[i]) - nums2.begin(); j < nums2.size(); j++)
            {
                if (nums2[j] > nums1[i])
                {
                    v.push_back(nums2[j]);
                    found = true;
                    break;
                }
            }
            if (!found) v.push_back(-1); 
        }
        return v;
    }
};
