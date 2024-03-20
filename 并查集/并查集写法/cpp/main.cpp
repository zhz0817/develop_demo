#include <bits/stdc++.h>
using namespace std;
// https://leetcode.cn/problems/number-of-provinces/description/
class UnionFind
{

public:
    UnionFind(int n)
    {
        for (int i = 0; i < n; i++)
        {
            parent.emplace_back(i);
        }
    }

    void union_member(int index1, int index2)
    {
        parent[find(index1)] = find(index2);
    }

    int find(int index)
    {
        if (parent[index] != index)
        {
            parent[index] = find(parent[index]);
        }
        return parent[index];
    }

    vector<int> parent;
};

class Solution
{
public:
    int findCircleNum(vector<vector<int>> &isConnected)
    {
        int cities = isConnected.size();
        UnionFind uf(cities);
        for (int i = 0; i < cities; i++)
        {
            for (int j = i + 1; j < cities; j++)
            {
                if (isConnected[i][j] == 1)
                {
                    uf.union_member(i, j);
                }
            }
        }
        int provinces = 0;
        for (int i = 0; i < cities; i++)
        {
            if (uf.parent[i] == i)
            {
                provinces++;
            }
        }
        return provinces;
    }
};

int main()
{
    return 0;
}