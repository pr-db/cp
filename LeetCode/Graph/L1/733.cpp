#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
	vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
	{
		int c = image[sr][sc];
		if (c != color)
			dfs(image, sr, sc, c, color);
		return image;
	}
	void dfs(vector<vector<int>> &image, int sr, int sc, int c, int nc)
	{
		if (image[sr][sc] == c)
		{
			image[sr][sc] = nc;
			if (sr >= 1)
				dfs(image, sr - 1, sc, c, nc);
			if (sc >= 1)
				dfs(image, sr, sc - 1, c, nc);
			if (sr + 1 < image.size())
				dfs(image, sr + 1, sc, c, nc);
			if (sc + 1 < image[0].size())
				dfs(image, sr, sc + 1, c, nc);
		}
	}
};