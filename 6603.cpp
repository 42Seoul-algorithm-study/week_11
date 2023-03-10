/*
 *  6603번: 로또
 */

#include <cstring>
#include <iostream>
#include <vector>
#define MAX 14
using namespace std;

int k;
int arr[MAX];
int visited[MAX];
vector<int> nums;

void ft_dfs(int num, int depth)
{
    if (depth == 6)
    {
        for (int i = 0; i < 6; i++)
            cout << arr[i] << " ";
        cout << "\n";
        return ;
    }
    for (int i = num; i < k; i++) {
        if (visited[i] == 0) {
            visited[i] = 1;
            arr[depth] = nums[i];
            ft_dfs(i + 1, depth + 1);
            visited[i] = 0;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    while (1)
    {
        // 변수 초기화
        cin >> k;
        if (k == 0)
            break;
        memset(arr, 0, sizeof(arr));
        memset(visited, 0, sizeof(visited));
        nums.clear();
        for (int i = 0; i < k; i++)
        {
            int input;
            cin >> input;
            nums.push_back(input);
        }

        ft_dfs(0, 0);
        cout << "\n";
    }
}