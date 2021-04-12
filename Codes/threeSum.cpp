    #include <iostream>
	#include <vector>
	#include <algorithm>

	using namespace std;
	
	vector< vector<int> > threeSum(vector<int>& nums) {
        vector< vector<int> > answer;
        vector<bool> select;
        vector<int> num;
        int i, j, sum;
        
        sort(nums.begin(), nums.end());
        for (i = 0; i < 3; i++)
            select.push_back(true);
        for (i = 3; i < nums.size(); i++)
            select.push_back(false);
        sort(select.begin(), select.end()); 
        do
        {
            for (i = 0; i < nums.size(); i++)
            {
                if (select[i])
                    num.push_back(nums[i]);
			}
            if (num.size() != 3)
                continue;
			sum = 0;
			for (j = 0; j < num.size(); j++)
				sum += num[j];
			if (sum == 0)
				answer.push_back(num);
			num.clear();
        } while (next_permutation(select.begin(), select.end()));
		sort(answer.begin(), answer.end());
		answer.erase(unique(answer.begin(), answer.end()), answer.end());
        return answer;
    }

	int main()
	{
		vector<int> nums;
		vector< vector<int> > answer;
		int i, j;

		nums.push_back(1);
		nums.push_back(0);
		nums.push_back(1);
		nums.push_back(2);
		nums.push_back(-1);
		nums.push_back(-4);
		answer = threeSum(nums);
		for (i = 0; i < answer.size(); i++)
		{
			for (j = 0; j < answer[i].size(); j++)
			{
				cout << answer[i][j] << " ";
			}
			cout << endl;
		}
		return 0;
	}
