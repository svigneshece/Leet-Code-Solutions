#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;  // edge case
        
        int i = 0;  // slow pointer for unique elements
        for (int j = 1; j < nums.size(); j++) {  // fast pointer
            if (nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j];  // place the new unique element
            }
        }
        return i + 1;  // number of unique elements
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1, 1, 2};

    int k = obj.removeDuplicates(nums);
    cout << "Number of unique elements = " << k << endl;
    cout << "Modified array = ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}

