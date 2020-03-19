#include<bits/stdc++.h> 
  
using namespace std; 
  
class Graph 
{ 
    int V;   
    list<int> *adj;  
    bool isCyclicUtil(int v, bool visited[], bool *rs);  
public: 
    Graph(int V);  
    void addEdge(int v, int w); 
    bool isCyclic();    
}; 
  
Graph::Graph(int V) 
{ 
    this->V = V; 
    adj = new list<int>[V]; 
} 
  
void Graph::addEdge(int v, int w) 
{ 
    adj[v].push_back(w); 
} 
  
bool Graph::isCyclicUtil(int v, bool visited[], bool *recStack) 
{ 
    if(visited[v] == false) 
    { 
        visited[v] = true; 
        recStack[v] = true; 
  
        list<int>::iterator i; 
        for(i = adj[v].begin(); i != adj[v].end(); ++i) 
        { 
            if ( !visited[*i] && isCyclicUtil(*i, visited, recStack) ) 
                return true; 
            else if (recStack[*i]) 
                return true; 
        } 
  
    } 
    recStack[v] = false;   
    return false; 
} 
  

bool Graph::isCyclic() 
{ 
    
    bool *visited = new bool[V]; 
    bool *recStack = new bool[V]; 
    for(int i = 0; i < V; i++) 
    { 
        visited[i] = false; 
        recStack[i] = false; 
    } 
  
 
    for(int i = 0; i < V; i++) 
        if (isCyclicUtil(i, visited, recStack)) 
            return true; 
  
    return false; 
} 
  
int main() 
{ 
     int v,i,j,q[10],a[10][10],n,visited[10];
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
    Graph g(v); 
   
    if(g.isCyclic()) 
        cout << "Graph contains cycle"; 
    else
        cout << "Graph doesn't contain cycle"; 
    return 0; 
} 