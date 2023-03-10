/*
 *  5648번: 역원소 정렬
 */

#include <algorithm>
#include <iostream>
#define MAX 1000001
using namespace std;

int n;
long long arr[MAX] = {0, };

long long ft_rev(long long n) {
    long long result = 0;

    while (n > 0)
    {
        result = result * 10 + n % 10;
        n /= 10;
    }
    return (result);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long input;
        cin >> input;
        arr[i] = ft_rev(input);
    }
    
    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << "\n";
}