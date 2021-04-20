#include <iostream>
#include <cmath>

using namespace std;

bool arr[21];

void remove_num(int num, int limit)
{
	int i;

	for (i = num * 2; i <= limit; i += num)
	{
		arr[i] = false;
	}
}

int main()
{
	int i;
	
	memset(arr, true, sizeof(arr));
	arr[0] = false;
	arr[1] = false;
	for (i = 2; i <= sqrt(20); i++)
	{
		if (arr[i])
			remove_num(i, 20);
	}
	for (i = 2; i <= 20; i++)
	{
		if (arr[i])
			cout << i << " ";
	}
	cout << endl;
	return 0;
}
