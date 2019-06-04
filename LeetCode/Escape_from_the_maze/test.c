# include<stdio.h>

int visit(int x, int y);

int maze[7][7] = {{2, 2, 2, 2, 2, 2, 2},
                  {0, 0, 0, 0, 0, 0, 2},
                  {2, 0, 2, 0, 2, 0, 2},
                  {2, 0, 0, 2, 0, 2, 2},
                  {2, 2, 0, 2, 0, 2, 2},
                  {2, 0, 0, 0, 0, 0, 0},
                  {2, 2, 2, 2, 2, 2, 2}};
int startX = 1;
int startY = 0;
int endX = 5;
int endY = 6;
int succ = 0;

int main(void) {
	int i, j;
	printf("迷宫图形:\n");
	for(i = 0; i < 7; i++) {
    		for(j = 0; j < 7; j++)
      			if(maze[i][j] == 2)
        			printf("█");
      			else
        			printf(" ");
    			printf("\n");
  	}
  
	if(0 == visit(startX, startY)){
		printf("没有出口,返回失败！");
	}
	else{
		printf("走出迷宫:\n");
		for(int i = 0; i < 7; i++){
			for(int j = 0; j < 7; j++){
				if(maze[i][j] == 1){
					printf("*");
				}
				else if(maze[i][j] == 2){
					printf("█");
				}
				else{
					printf(" ");
				}
			}
			printf("\n");
		}
	}
}

int visit(int x, int y){
	maze[x][y] = 1;
	if(x == endX && y == endY){
		succ = 1;
	}
	
	if(succ != 1 && maze[x+1][y] == 0){
		visit(x+1, y);
	}
        if(succ != 1 && maze[x][y+1] == 0){
                visit(x, y+1);
        }
        if(succ != 1 && maze[x-1][y] == 0){
                visit(x-1, y);
        }
        if(succ != 1 && maze[x][y-1] == 0){
                visit(x, y-1);
        }
	
	if(succ != 1){
		maze[x][y] = 0;
	}
	return succ;
}













