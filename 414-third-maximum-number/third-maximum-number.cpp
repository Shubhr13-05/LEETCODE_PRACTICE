class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s;
        for (int x : nums)
            s.insert(x);

        if (s.size() < 3) {
            return *s.rbegin();   // Largest element
        } else {
            auto it = s.rbegin();  // Reverse iterator (largest)
            advance(it, 2);        // Move 2 steps
            return *it;           // Third largest
        }
    }
};