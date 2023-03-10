/*
 *  10814번: 나이순 정렬
 */

#include <algorithm>
#include <iostream>
#define MAX 100001
using namespace std;

int n;
pair<int, string> info[MAX];

bool ft_cmp(pair<int, string> a, pair<int, string> b) {
    return (a.first < b.first);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        int age;
        string name;
        cin >> age >> name;
        info[i] = make_pair(age, name);
    }

    stable_sort(info, info + n, ft_cmp);

    for (int i = 0; i < n; i++)
        cout << info[i].first << " " << info[i].second << "\n";
}