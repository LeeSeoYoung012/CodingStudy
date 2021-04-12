#include<iostream>
#include<vector>
using namespace std;
void solve(vector<int> arr) {
    int i = 0;
    int j = 0;
    int count = 1;
    while (i <= j && j < arr.size()) {
        if (arr[i] == arr[j]) {
            j++;
        }
        else {
            count++;
            i = j;
        }
    }
    cout << count;
}
int main()
{
    vector<int> arr = { 0,0,1,1,1,2,2,3,3,4,4,4,6 };
    solve(arr);
}
