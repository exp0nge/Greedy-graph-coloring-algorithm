#include <iostream>
#include "vertex.h"
#include "graph.h"


int main() {
    md_islam::vertex o0;
    md_islam::vertex o1;
    md_islam::vertex o2;
    md_islam::vertex o3;
    md_islam::vertex o4;

    //Pass neighbors
    o0.addNeighbor(&o1);
    o0.addNeighbor(&o2);

    o1.addNeighbor(&o0);
    o1.addNeighbor(&o2);
    o1.addNeighbor(&o3);

    o2.addNeighbor(&o0);
    o2.addNeighbor(&o1);
    o2.addNeighbor(&o3);


    o3.addNeighbor(&o4);

    o4.addNeighbor(&o1);
    o4.addNeighbor(&o2);
    o4.addNeighbor(&o3);

    //Add to vector to pass to our graph algorithm

    std::vector<md_islam::vertex*> collectionOfVertexes;
    collectionOfVertexes.push_back(&o0);
    collectionOfVertexes.push_back(&o1);
    collectionOfVertexes.push_back(&o2);
    collectionOfVertexes.push_back(&o3);
    collectionOfVertexes.push_back(&o4);

    md_islam::graph graph(collectionOfVertexes);

    graph.print();

    return 0;
}