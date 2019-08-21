#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

// https://blog.csdn.net/scutbenson/article/details/81317650

struct node
{
	int from, end, weight;
};

const int maxSize = 200000;
int n, m;
int tree[maxSize+5];
node edge[maxSize+5];
 
bool compare(node e1, node e2)		//sort排序---比较函数 
{
	return e1.weight < e2.weight;
}
 
int find(int x)		//并查集  
{
	int r = x,  i = x,  temp;
	
	if (tree[r] == r)
		return r;
		
	while (tree[r] ! =  r)	//r 找到 最.根节点 
		r  =  tree[r];
	
	while (i! = r)	//全部变成跟节点 
	{
		temp = tree[i];	//temp 临时变量 
		tree[i] = r;
		i = temp;
	}
	return r;
}
 
void Kruskal()
{
	int i, sum, tot, fx, fy;
	
	tot = 1;
	sum = 0;
	i = 0;
	
	while (tot < n)
	{
		fx = find(edge[i].from);
		fy = find(edge[i].end);	
		if (fx! = fy)
		{
			tree[fx] = fy;	//并查集合并 (这里是最.根节点的合并！！！)
			
			tot++;
			sum+ = edge[i].weight;
		}
		i++;
	}
	printf("%d\n", sum);
}
 
int main()
{
	int i, x, y, z;
	
	freopen("a.txt", "r", stdin);
	scanf("%d%d", &n, &m);
	
	for (i = 0; i < m; i++)
	{
		scanf("%d%d%d", &x, &y, &z);
		edge[i].from = x;	
		edge[i].end = y;	
		edge[i].weight = z;
	}
	
	sort(edge, edge + m, compare);
	
	for (i = 1; i< = n; i++)
		tree[i] = i;
	
	Kruskal();
	
	return 0;
}

