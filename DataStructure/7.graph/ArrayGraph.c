#include <stdio.h>
#include <stdlib.h>
#define MAX_VERtEX_NUM 20                   //顶点的最大个数
#define VRType int                          //表示顶点之间的关系的变量类型
#define InfoType char                       //存储弧或者边额外信息的指针变量类型
#define VertexType int                      //图中顶点的数据类型

/*
    arcs[0][1] = 1，表示 V1 和 V2 之间有边存在
    arcs[0][2] = 0，说明 V1 和 V3 之间没有边。
    对于无向图来说，二维数组构建的二阶矩阵，实际上是对称矩阵，在存储时就可以采用压缩存储的方式存储下三角或者上三角
    通过二阶矩阵，可以直观地判断出各个顶点的度，为该行（或该列）非 0 值的和。例如，第一行有两个 1，说明 V1 有两个边，所以度为 2

    注意：在此程序中，构建无向网和有向网时，对于之间没有边或弧的顶点，相应的二阶矩阵中存放的是 0。目的只是为了方便查看运行结果，而实际上如果顶点之间没有关联，它们之间的距离应该是无穷大（∞）。
*/


typedef enum{DG,DN,UDG,UDN}GraphKind;       //枚举图的 4 种类型 {有向图，有向网，无向图，无向网}

typedef struct {
    VRType adj;                             //对于无权图，用 1 或 0 表示是否相邻；对于带权图，直接为权值。
    InfoType * info;                        //弧或边额外含有的信息指针
}ArcCell,AdjMatrix[MAX_VERtEX_NUM][MAX_VERtEX_NUM];

typedef struct {
    VertexType vexs[MAX_VERtEX_NUM];        //存储图中顶点数据
    AdjMatrix arcs;                         //二维数组，记录顶点之间的关系
    int vexnum,arcnum;                      //记录图的顶点数和弧（边）数
    GraphKind kind;                         //记录图的种类
}MGraph;
//根据顶点本身数据，判断出顶点在二维数组中的位置
int LocateVex(MGraph * G,VertexType v){
    int i=0;
    //遍历一维数组，找到变量v
    for (; i<G->vexnum; i++) {
        if (G->vexs[i]==v) {
            break;
        }
    }
    //如果找不到，输出提示语句，返回-1
    if (i>G->vexnum) {
        printf("no such vertex.\n");
        return -1;
    }
    return i;
}
//构造有向图
void CreateDG(MGraph *G){
    //输入图含有的顶点数和弧的个数
    scanf("%d,%d",&(G->vexnum),&(G->arcnum));
    //依次输入顶点本身的数据
    for (int i=0; i<G->vexnum; i++) {
        scanf("%d",&(G->vexs[i]));
    }
    //初始化二维矩阵，全部归0，指针指向NULL
    for (int i=0; i<G->vexnum; i++) {
        for (int j=0; j<G->vexnum; j++) {
            G->arcs[i][j].adj=0;
            G->arcs[i][j].info=NULL;
        }
    }
    //在二维数组中添加弧的数据
    for (int i=0; i<G->arcnum; i++) {
        int v1,v2;
        //输入弧头和弧尾
        scanf("%d,%d",&v1,&v2);
        //确定顶点位置
        int n=LocateVex(G, v1);
        int m=LocateVex(G, v2);
        //排除错误数据
        if (m==-1 ||n==-1) {
            printf("no this vertex\n");
            return;
        }
        //将正确的弧的数据加入二维数组
        G->arcs[n][m].adj=1;
    }
}
//构造无向图
void CreateDN(MGraph *G){
    scanf("%d,%d",&(G->vexnum),&(G->arcnum));
    for (int i=0; i<G->vexnum; i++) {
        scanf("%d",&(G->vexs[i]));
    }
    for (int i=0; i<G->vexnum; i++) {
        for (int j=0; j<G->vexnum; j++) {
            G->arcs[i][j].adj=0;
            G->arcs[i][j].info=NULL;
        }
    }
    for (int i=0; i<G->arcnum; i++) {
        int v1,v2;
        scanf("%d,%d",&v1,&v2);
        int n=LocateVex(G, v1);
        int m=LocateVex(G, v2);
        if (m==-1 ||n==-1) {
            printf("no this vertex\n");
            return;
        }
        G->arcs[n][m].adj=1;
        G->arcs[m][n].adj=1;//无向图的二阶矩阵沿主对角线对称
    }
}
//构造有向网，和有向图不同的是二阶矩阵中存储的是权值。
void CreateUDG(MGraph *G){
    scanf("%d,%d",&(G->vexnum),&(G->arcnum));
    for (int i=0; i<G->vexnum; i++) {
        scanf("%d",&(G->vexs[i]));
    }
    for (int i=0; i<G->vexnum; i++) {
        for (int j=0; j<G->vexnum; j++) {
            G->arcs[i][j].adj=0;
            G->arcs[i][j].info=NULL;
        }
    }
    for (int i=0; i<G->arcnum; i++) {
        int v1,v2,w;
        scanf("%d,%d,%d",&v1,&v2,&w);
        int n=LocateVex(G, v1);
        int m=LocateVex(G, v2);
        if (m==-1 ||n==-1) {
            printf("no this vertex\n");
            return;
        }
        G->arcs[n][m].adj=w;
    }
}
//构造无向网。和无向图唯一的区别就是二阶矩阵中存储的是权值
void CreateUDN(MGraph* G){
    scanf("%d,%d",&(G->vexnum),&(G->arcnum));
    for (int i=0; i<G->vexnum; i++) {
        scanf("%d",&(G->vexs[i]));
    }
    for (int i=0; i<G->vexnum; i++) {
        for (int j=0; j<G->vexnum; j++) {
            G->arcs[i][j].adj=0;
            G->arcs[i][j].info=NULL;
        }
    }
    for (int i=0; i<G->arcnum; i++) {
        int v1,v2,w;
        scanf("%d,%d,%d",&v1,&v2,&w);
        int m=LocateVex(G, v1);
        int n=LocateVex(G, v2);
        if (m==-1 ||n==-1) {
            printf("no this vertex\n");
            return;
        }
        G->arcs[n][m].adj=w;
        G->arcs[m][n].adj=w;//矩阵对称
    }
}
void CreateGraph(MGraph *G){
    //选择图的类型
    scanf("%d",&(G->kind));
    //根据所选类型，调用不同的函数实现构造图的功能
    switch (G->kind) {
        case DG:
            return CreateDG(G);
            break;
        case DN:
            return CreateDN(G);
            break;
        case UDG:
            return CreateUDG(G);
            break;
        case UDN:
            return CreateUDN(G);
            break;
        default:
            break;
    }
}
//输出函数
void PrintGrapth(MGraph G)
{
    for (int i = 0; i < G.vexnum; i++)
    {
        for (int j = 0; j < G.vexnum; j++)
        {
            printf("%d ", G.arcs[i][j].adj);
        }
        printf("\n");
    }
}
int main() {
    MGraph G;//建立一个图的变量
    CreateGraph(&G);//调用创建函数，传入地址参数
    PrintGrapth(G);//输出图的二阶矩阵
    return 0;
}


