//O(n)
class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int quantity = capacity, i = 0, steps = 0;
        while (i < plants.size())
        {
            if (quantity < plants[i])
            {
                steps += (i + 1);
                quantity = capacity;
                steps += i;
                quantity -= plants[i];
            }
            else 
            {
                steps++;
                quantity -= plants[i];   
            }
            i++;
        }
        return steps;
    }
};
