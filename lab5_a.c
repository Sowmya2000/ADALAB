#include<stdio.h> 
int a[20][20],q[20],visited[20],reach[20],r=0,f=0,i,j,n; 
void bfs(int v){ 
    
         for(i=1;i<=n;i++) 
                if(a[v][i] && !visited[i]) 
                    q[r++]=i; 
                if(f<=r){ 
                 visited[q[f]]=1; 
                 bfs(q[f++]); 
                 }  
         }
void dfs_check(int v){
     int i;
     reach[v]=1;
     for(i=1;i<=n;i++)
         if(a[v][i]&&!reach[i]){
            printf("\n%d->%d",v,i);
            dfs_check(i);
            }
 }

int main(){ 
    int v,count=0; 
    
       printf("\nEnter no. of vertices:"); 
       scanf("%d",&n); 
       for(i=1;i<=n;i++) 
        { 
         q[i]=0; 
         visited[i]=0; 
        } 
       printf("\nEnter Adjacency Matrix of the graph:"); 
         for(i=1;i<=n;i++){ 
            for(j=1;j<=n;j++){ 
                scanf("%d",&a[i][j]); 
              } 
            } 
         printf("\nEnter the node of ur Choice:"); 
         scanf("%d",&v); 
         bfs(v); 
         printf("\nAll the nodes reachable from node->%d is : ",v); 
         for(i=1;i<=n;i++){ 
             if(visited[i]) 
                printf("%d   ",i); 
                } 
                 dfs_check(1);
    for(i=1;i<=n;i++)
       if(reach[i])
         count++;
    if(count==n)
       printf("\nGraph is connected.");
    else
       printf("\nGraph is disconnected.");


         
         return(0); 
    } 
    
    
