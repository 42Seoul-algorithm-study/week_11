/*
 *  11652번: 카드
 */

#include <algorithm>
#include <iostream>
#define MAX 100001
using namespace std;

int n;
long long answer;
long long cards[MAX];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> cards[i];
    
    sort(cards, cards + n);

    int cnt = 1, max = 1;
    answer = cards[0];
    for (int i = 1; i < n; i++) {
        if (cards[i] == cards[i - 1])
            cnt++;
        else
            cnt = 1;
        if (max < cnt)
        {
            max = cnt;
            answer = cards[i];
        }
    }

    cout << answer;
}