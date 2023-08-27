#include<stdio.h>
void main()
{
	int g[10][10],i,j,n,s,k,min,cost=0,vi[10]={0},u,v,c=1;
	printf("Enter no. of nodes:");
	scanf("%d",&n);
	printf("Enter adjancy matrix:\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("g[%d][%d]:",i,j);
			scanf("%d",&g[i][j]);
			if(g[i][j]==0)
				g[i][j]=999;
		}
	}
	min=999;

	printf("Enter starting node:");
	scanf("%d",&s);
	vi[s]=1;
	while(c<n)
	{
		min=999;
		for(i=1;i<=n;i++)
		{
			if(vi[i]==1)
			s=i;
			for(j=1;j<=n;j++)
			{
				if(vi[j]==0)
				{
					if(g[s][j]<min)
					{
						min=g[s][j];
						u=s;
						v=j;
					}
				}
			}
		}
		if(vi[u]==0 || vi[v]==0)
		{
			printf("\n(%d %d)=%d",u,v,g[u][v]);
			cost+=g[u][v];
			vi[u]=vi[v]=1;
		}
		g[u][v]=g[v][u]=999;
		//s=v;
		c++;
	}
	printf("\ncost=%d",cost);
}