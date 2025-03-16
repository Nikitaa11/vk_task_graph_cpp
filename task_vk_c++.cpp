#include <iostream>
#include <fstream>
#include <vector>
#include <queue>
#include <limits>

using namespace std;

int main() {
  ifstream file("graph.txt");
  if (!file.is_open()) {
    cerr << "Не удалось открыть файл graph.txt" << endl;
    return 1;
  }

  int numNodes, numEdges, startNode;
  file >> numNodes >> numEdges;

  vector<vector<int>> graph(numNodes);
  for (int i = 0; i < numEdges; ++i) {
    int u, v;
    file >> u >> v;
    graph[u].push_back(v);
    graph[v].push_back(u);
  }

  file >> startNode;
  file.close();

  vector<int> distance(numNodes, numeric_limits<int>::max());
  distance[startNode] = 0;

  queue<int> q;
  q.push(startNode);

  while (!q.empty()) {
    int u = q.front();
    q.pop();

    for (int v : graph[u]) {
      if (distance[v] == numeric_limits<int>::max()) {
        distance[v] = distance[u] + 1;
        q.push(v);
      }
    }
  }

  for (int i = 0; i < numNodes; ++i) {
    cout << distance[i] << endl;
  }

  return 0;
}