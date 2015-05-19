//
// Created by MD on 5/14/2015.
//

#ifndef HW7_GRAPHCOLORING_GRAPH_H
#define HW7_GRAPHCOLORING_GRAPH_H

#include "vertex.h"

namespace md_islam {
    class graph {
    public:
        const static int LEVELS_OF_COLOR = 256;
        graph(const std::vector<vertex*>& vectorOfVertexes);
        void print();
        int viableColor();
        int viableColorHelper(std::vector<vertex *> * neighborList);
    private:
        std::vector<vertex *> vectorOfVertices;
        int color;
        std::vector<int> usedColors;
    };
}


#endif //HW7_GRAPHCOLORING_GRAPH_H
