//
// Created by MD on 5/14/2015.
//

#ifndef HW7_GRAPHCOLORING_VERTEX_H
#define HW7_GRAPHCOLORING_VERTEX_H
#include <iostream>
#include <vector>

namespace md_islam {
    class vertex {
    public:
        vertex(int weight = 0);
        void addNeighbor(vertex * neighbor);
        bool colored; //check if colored
        int setColor(int color);
        std::vector<vertex *> * getNeighbors();
        int getColor();
    private:

        int color; //color of vertex
        int weight;
        std::vector<vertex*>  neighbors;
    };
}


#endif //HW7_GRAPHCOLORING_VERTEX_H
