#include <iostream>
#include <stag/graph.h>
#include <stag/cluster.h>

int main() {
  // Create a STAG graph object.
  StagInt n = 10;
  stag::Graph myGraph = stag::barbell_graph(n);

  // Apply the spectral clustering algorithm to the graph
  int k = 2;
  auto labels = stag::spectral_cluster(&myGraph, k);

  // Display the cluster membership of each vertex in the graph
  for (auto c : labels) {
    std::cout << c << ", ";
  }
  std::cout << std::endl;

  return 0;
}
