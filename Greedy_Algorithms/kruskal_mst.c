#include <stdio.h>

int find(int parent[], int i);
int uni(int parent[], int i, int j);

int main()
{
  int i,j,a,b,u,v,n,ne=1;
  int min,mincost=0,cost[9][9],parent[9]={};

	scanf("%d",&n);
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			scanf("%d",&cost[i][j]);
			if(cost[i][j]==0)
				cost[i][j]=999;
		}
	}
	printf("Edges Of Mst : \n");
	while(ne < n)
	{
		for(i=1,min=999; i<=n; i++){
			for(j=1; j<=n; j++){
				if(cost[i][j] < min){
					min=cost[i][j];
					a=u=i;
					b=v=j;
				}
			}
		}
		u=find(parent, u);
		v=find(parent, v);
		if(uni(parent, u, v)){
			printf("%d edge (%d,%d) =%d\n",ne++,a,b,min);
			mincost +=min;
		}
		cost[a][b]=cost[b][a]=999;
	}
	printf("\nMinimum cost = %d\n",mincost);
	return 0;
}

int find(int parent[], int i){
  while(parent[i])
	 i=parent[i];
	return i;
}

int uni(int parent[], int i,int j){
	if(i!=j){
		parent[j]=i;
	  return 1;
	}
	return 0;
}
