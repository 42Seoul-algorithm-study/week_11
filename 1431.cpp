/*
 *  1431번: 시리얼 번호
 */

#include <algorithm>
#include <iostream>
#include <string>
#define MAX 51
using namespace std;

int n;
string serial_nums[MAX];

int ft_cmp(string a, string b) {
    // 1. 길이 비교
    int a_len = a.length(), b_len = b.length();
    if (a_len != b_len)
        return (a_len < b_len);

    // 2. 합 비교
    int a_sum = 0, b_sum = 0;
    for (int i = 0; i < a_len; i++) {
        if ('0' <= a[i] && a[i] <= '9')
            a_sum += a[i] - '0';
        if ('0' <= b[i] && b[i] <= '9')
            b_sum += b[i] - '0';
    }
    if (a_sum != b_sum)
        return (a_sum < b_sum);

    // 3. 사전순 비교
    return (a < b);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> serial_nums[i];

    sort(serial_nums, serial_nums + n, ft_cmp);

    for (int i = 0; i < n; i++)
        cout << serial_nums[i] << "\n";
}