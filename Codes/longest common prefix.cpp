#include<iostream>
#include<vector>
using namespace std;
void solve(vector<string> arr) {
    string str = arr[0];
    for (int i = 1; i < arr.size(); i++) { 
        int k = 0;
        while (k < str.size() && k < arr[i].size()) {
            if (str[k] == arr[i][k]) k++;
            else break;
        }
        str = str.substr(0, k);
    }
    cout << str;
}
int main()
{
    vector<string> arr = { "dog","racecar","car" };
    solve(arr);
}
