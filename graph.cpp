//
// Created by MD on 5/14/2015.
//

#include "graph.h"
#include <algorithm>

md_islam::graph::graph(const std::vector<vertex *>& vectorOfVertexes) {
    this->vectorOfVertices = vectorOfVertexes;
    this->color = 0;
    viableColor();
}

void md_islam::graph::print() {
    int i = 0;
    for(std::vector<vertex *>::iterator it = this->vectorOfVertices.begin(); it != this->vectorOfVertices.end(); it++){
        std::cout << "Vertex " << i << ": " <<(*it)->getColor() << std::endl;
        i++;
    }
}

int md_islam::graph::viableColor() {
    for(std::vector<vertex *>::iterator it = this->vectorOfVertices.begin(); it != this->vectorOfVertices.end(); it++){
        int goodColor = viableColorHelper((*it)->getNeighbors());
        (*it)->setColor(goodColor);
        (*it)->colored = true;
    }
}
int md_islam::graph::viableColorHelper(std::vector<vertex *>* neighborList) {
    this->usedColors.clear();
    //stored used colors
    for(std::vector<vertex *>::iterator iterator = neighborList->begin(); iterator != neighborList->end(); iterator++){
        if(((*iterator)->colored)){
           this->usedColors.push_back((*iterator)->getColor());
        }
    }
    //calculate not used color from 0
    for(int i = 0; i < LEVELS_OF_COLOR; i++){
        std::vector<int>::iterator finder = std::find(this->usedColors.begin(), this->usedColors.end(), i);
     if(finder == this->usedColors.end())
         return i;
    }
}
