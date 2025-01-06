#include <iostream>
#include <vector>

using namespace std;
/*---------------1.两数求和------------------------------------*/

//给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 
// 和为目标值 target  的那 两个 整数，并返回它们的数组下标。
//你可以假设每种输入只会对应一个答案，并且你不能使用两次相同的元素。


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //循环遍历
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                //判断两数相加是否认等于目标值
                if (nums[i] + nums[j] == target)
                {
                    return { i,j };
                }
            }
        }

        //无解返回空数组
        return {};
    }
};

int main() {
	
	//实例解题类
	Solution s;
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(7);
	nums.push_back(11);
	nums.push_back(15);
	int target = 9;
	vector<int> result = s.twoSum(nums, target);
	cout << result[0] << " " << result[1] << endl;
	return 0;
}