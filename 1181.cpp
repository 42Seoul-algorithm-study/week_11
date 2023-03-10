/*
 *  1181번: 단어 정렬
 */

#include <algorithm>
#include <iostream>
#define MAX 20001
using namespace std;

int n;
string words[MAX];

bool ft_cmp(string a, string b) {
    // 1. 길이 비교
    int a_len = a.length(), b_len = b.length();
    if (a_len != b_len)
        return (a_len < b_len);

    // 2. 사전순 비교
    return (a < b);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }

    sort(words, words + n, ft_cmp);

    for (int i = 0; i < n; i++)
    {
        if (words[i] == words[i + 1])
            continue;
        cout << words[i] << "\n";
    }
}
