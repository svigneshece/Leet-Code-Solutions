#include <iostream>
#include <vector>
using namespace std;

class Leet_Code
{
    public:
        vector<int> two_sum(vector<int> & nums, int target)
        {
            int n = nums.size();
            for (int i = 0; i < n; ++i)
            {
                for (int j = i + 1; j < n; ++j)
                {
                    if (nums[i] + nums[j] == target)
                    {
                        return {i, j};
                    }
                }
            }
            return {};
        }
};

int main()
{
    Leet_Code obj;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = obj.two_sum(nums, target);

    if (!result.empty())
    {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    }
    else
    {
        cout << "No solution found" << endl;
    }

    return 0;
}

