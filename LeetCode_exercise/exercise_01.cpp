#include <iostream>
#include <vector>

using namespace std;
/*---------------1.�������------------------------------------*/

//����һ���������� nums ��һ������Ŀ��ֵ target�������ڸ��������ҳ� 
// ��ΪĿ��ֵ target  ���� ���� ���������������ǵ������±ꡣ
//����Լ���ÿ������ֻ���Ӧһ���𰸣������㲻��ʹ��������ͬ��Ԫ�ء�


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //ѭ������
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                //�ж���������Ƿ��ϵ���Ŀ��ֵ
                if (nums[i] + nums[j] == target)
                {
                    return { i,j };
                }
            }
        }

        //�޽ⷵ�ؿ�����
        return {};
    }
};

int main() {
	
	//ʵ��������
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