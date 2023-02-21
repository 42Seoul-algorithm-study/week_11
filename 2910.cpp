// 빈도 정렬

#include <algorithm>
#include <vector>
#include <iostream>// 입출력 가능하게 하는 헤더
using namespace	std;

void	add_data(vector<pair<int, int> > *data, int target)
{
	for (int i = 0; i < (*data).size(); i++)
	{
		if (((*data)[i]).first == target)
		{
			(*data)[i].second += 1;
			return ;
		}
	}
	(*data).push_back(make_pair(target, 1));
}

int	compare(pair<int, int> data1, pair<int, int> data2)
{
	return (data2.second - data1.second);
}

int	main()
{
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);

	int	n, c;
	vector<pair<int, int> > data;
	cin >> n >> c;

	for (int i = 0; i < n; i++)
	{
		int	tmp;
		cin >> tmp;
		add_data(&data, tmp);
	}
	sort(data.begin(), data.end(), compare);
	for (int i = 0; i < data.size(); i++)
		cout << data[i].first << ' ' << data[i].second << '\n';
	while (data.size())
	{
		while (data[0].second)
		{
			cout << data[0].first << ' ';
			data[0].second -= 1;
		}
		data.erase(data.begin());
	}
}
