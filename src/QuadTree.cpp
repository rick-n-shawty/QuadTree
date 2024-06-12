#include <SFML/Graphics.hpp>
#include "QuadTree.hpp"

QuadTree::QuadTree(const sf::RectangleShape& bounds, int capacity){
    NE = nullptr; 
    NW = nullptr;
    SE = nullptr;
    SW = nullptr;
    boundary = bounds; 
    boundary.setOrigin(sf::Vector2f(boundary.getSize().x / 2.0f, boundary.getSize().y / 2.0f));
    this->capacity = capacity;
}

QuadTree::~QuadTree(){

}