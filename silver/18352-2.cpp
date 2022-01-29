#include <bits/stdc++.h> 
using namespace std; 

#define INF 0x7FFFFFFF

void dijkstra(int V, int src, int x, vector<vector<pair<int,int> > > &graph)
{
  vector<int> dist(V, INF);
  dist[src] = 0;

  priority_queue<int> pq;
  pq.push(src);

  while(!pq.empty())
  {
    int r = pq.top();
    pq.pop();

    for(auto &v : graph[r])
    {
      int cost = dist[r] + v.second;
      if(dist[v.first] > cost)
      {
        dist[v.first] = cost;
        pq.push(v.first);
      }
    }
  }

  bool printed = false;
  for(int i=0; i<V; ++i) {
    if(dist[i] == x)  {
      printed  = true;
      printf("%d\n", i);
    }
  }

  if(!printed) printf("-1\n");
}
int main() {
  int city, road, dist, start;
  scanf("%d%d%d%d", &city, &road, &dist, &start);
  vector<vector<pair<int,int> > > graph(city+1);

  for(int i=0; i<road; ++i) {
    int s, d;
    scanf("%d%d", &s, &d);
    graph[s].push_back(make_pair(d, 1));
  }

  dijkstra(city+1, start, dist, graph);

  return 0;
}


