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

bool	compare(pair<int, int> data1, pair<int, int> data2)
{
	return (data1.second > data2.second); // 이거 부등호 말고 a - b 리턴 하면 안됨
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
	// for (int i = 0; i < data.size(); i++)
	// 	cout << "num: "<<  data[i].first << " idx: " << data[i].second << '\n';
	stable_sort(data.begin(), data.end(), compare);

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
