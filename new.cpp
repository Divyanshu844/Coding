#include <iostream>
#include <vector>
using namespace std;

void subsequence(int arr[], int index, int n, vector<vector<int>> &ans, vector<int> temp) {
    if (index == n) {
        ans.push_back(temp);
        return;
    }

    // Not pick
    subsequence(arr, index + 1, n, ans, temp);

    // Pick
    temp.push_back(arr[index]);
    subsequence(arr, index + 1, n, ans, temp);
}

int main() {
    int arr[] = {3, 1, 2};
    vector<vector<int>> ans;
    vector<int> temp;

    subsequence(arr, 0, 3, ans, temp);

    for (auto &sub : ans) {
        for (int num : sub)
            cout << num << " ";
        cout << endl;
    }

    return 0;
}
