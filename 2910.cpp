/*
 *  2910번: 빈도 정렬
 */

#include <algorithm>
#include <iostream>
#include <vector>
#define MAX 1001
using namespace std;

int n, c;
vector<pair<int, int> > arr;

void ft_add(int n) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i].first == n) {
            arr[i].second += 1;
            return ;
        }
    }
    arr.push_back(make_pair(n, 1));
}

bool ft_cmp(pair<int, int> a, pair<int, int> b) {
    return (a.second > b.second);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    cin >> n >> c;
    for (int i = 0; i < n; i++) {
        int input;
        cin >> input;
        ft_add(input);
    }
    
    // 순서대로 정렬 😊
    stable_sort(arr.begin(), arr.end(), ft_cmp);

    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].second; j++)
            cout << arr[i].first << " ";
    }
}
