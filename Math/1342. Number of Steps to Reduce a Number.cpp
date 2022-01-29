//O(log2(n))
class Solution1 {
public:
    int numberOfSteps(int num) {
        int steps = 0;
        while (num > 0)
        {
            if (num % 2 == 0) num /= 2;
            else num--;
            steps++;
        }
        return steps;
    }
};

//O(1)
class Solution2 {
public:
    int numberOfSteps(int num) {
        return num ? (log2(num) + bitset<32>(num).count()) : 0;
    }
};
