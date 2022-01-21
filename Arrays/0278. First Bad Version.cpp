//O(n)
class Solution1 {
public:
    int firstBadVersion(int n) {
        while (isBadVersion(n))
            n--;
        return n + 1;
    }
};

//O(log(n))
class Solution2 {
public:
    int firstBadVersion(int n) {
        int l = 0, h = n;
        while (l < h)
        {
            int m = l + (h-l) / 2;
            if (isBadVersion(m))
                h = m;
            else
                l = m+1;
        }  
        return l;
    }
};
