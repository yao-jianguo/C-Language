1.并查集

用法：一个方便归类的算法。。。

将一个复杂的图转换成一个公共父节点的图（如图所示）

![image-20190718111700520](/Users/yaojianguo/Library/Mobile Documents/com~apple~CloudDocs/ScienceSpace/C-Language/DataStructure/Graph/imgs/image-20190718111700520.png)

```c
int find(int x)		//并查集  
{
	int r = x, i = x, temp;
	
	if (tree[r] == r)
		return r;		
	while (tree[r] != r)	//r 找到 最.根节点 
		r = tree[r];
	while (i != r)	//全部变成跟节点 
	{
		temp = tree[i];	//temp 临时变量 
		tree[i] = r;
		i = temp;
	}
	return r;
}
```













