//
// Created by MD on 5/14/2015.
//

#include "vertex.h"

md_islam::vertex::vertex(int weight) {
    this->weight = weight;
    this->colored = false;
}



int md_islam::vertex::setColor(int color) {
    this->color = color;
    return this->color;
}

void md_islam::vertex::addNeighbor(md_islam::vertex *neighbor) {
    this->neighbors.push_back(neighbor);
}

std::vector<md_islam::vertex*> * md_islam::vertex::getNeighbors() {
    return & this->neighbors;
}

int md_islam::vertex::getColor() {
    return this->color;
}
