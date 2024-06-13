#include <SFML/Graphics.hpp>
#include "QuadTree.hpp"
#include "Boundary.hpp"

QuadTree::QuadTree(Boundary* bounds, int capacity){
    NE = nullptr; 
    NW = nullptr;
    SE = nullptr;
    SW = nullptr;
    boundary = bounds;
    this->capacity = capacity;
}

QuadTree::~QuadTree(){
    delete NE;
    delete NW;
    delete SE;
    delete SW; 
    delete boundary;
}