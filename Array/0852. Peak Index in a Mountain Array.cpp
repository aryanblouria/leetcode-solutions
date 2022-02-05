//O(n)
class Solution1 {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        for (int i = 0; i < arr.size()-1; i++)
        {
            if (arr[i] > arr[i+1])
                return i;
        }
        return 0;
    }
};

//O(log(n))
class Solution2 {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int i = 0, j = arr.size()-1;
        while (i < j)
        {
            int m = (i + j)/2;
            if (arr[m] > arr[m+1]) 
                j = m;
            else 
                i = m + 1;
        }
        return i;
    }
};
