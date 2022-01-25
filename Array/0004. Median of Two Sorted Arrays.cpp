//O(n)
class Solution1 {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v (nums1.size() + nums2.size());
        int i = 0, j = 0, k = 0;
        while (i < nums1.size() && j < nums2.size())
        {
            if (nums1[i] < nums2[j])
                v[k++] = nums1[i++];
            else
                v[k++] = nums2[j++];
        }
        while (i < nums1.size())
            v[k++] = nums1[i++];
        while (j < nums2.size())
            v[k++] = nums2[j++];
        
        if (v.size() % 2 == 0)
            return (double)(v[v.size()/2 - 1] + v[v.size()/2])/2;
        else
            return v[v.size()/2];
    }
};
