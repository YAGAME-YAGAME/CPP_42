#include <iostream>
#include "../headers/Fixed.hpp"
#include "../headers/Point.hpp"

void testFixedOperators() {
    std::cout << "=== Testing Fixed Point Operators ===" << std::endl;
    
    Fixed x(10.5f);
    Fixed y(3.2f);
    
    // Test arithmetic operators
    std::cout << "x = " << x << ", y = " << y << std::endl;
    std::cout << "x + y = " << x + y << std::endl;
    std::cout << "x - y = " << x - y << std::endl;
    std::cout << "x * y = " << x * y << std::endl;
    std::cout << "x / y = " << x / y << std::endl;
    
    // Test comparison operators
    std::cout << "x > y: " << (x > y ? "true" : "false") << std::endl;
    std::cout << "x < y: " << (x < y ? "true" : "false") << std::endl;
    std::cout << "x >= y: " << (x >= y ? "true" : "false") << std::endl;
    std::cout << "x <= y: " << (x <= y ? "true" : "false") << std::endl;
    std::cout << "x == y: " << (x == y ? "true" : "false") << std::endl;
    std::cout << "x != y: " << (x != y ? "true" : "false") << std::endl;
    
    // Test min/max functions
    std::cout << "min(x, y) = " << Fixed::min(x, y) << std::endl;
    std::cout << "max(x, y) = " << Fixed::max(x, y) << std::endl;
    std::cout << std::endl;
}

void testPointClass() {
    std::cout << "=== Testing Point Class ===" << std::endl;
    
    Point p1(1.0f, 1.0f);
    Point p2(5.0f, 1.0f);
    Point p3(3.0f, 4.0f);
    
    std::cout << "Triangle vertices:" << std::endl;
    std::cout << "A(" << p1.getX() << ", " << p1.getY() << ")" << std::endl;
    std::cout << "B(" << p2.getX() << ", " << p2.getY() << ")" << std::endl;
    std::cout << "C(" << p3.getX() << ", " << p3.getY() << ")" << std::endl;
    std::cout << std::endl;
}

void testBSP() {
    std::cout << "=== Testing BSP (Binary Space Partitioning) ===" << std::endl;
    
    // Define a triangle
    Point a(0.0f, 0.0f);
    Point b(4.0f, 0.0f);
    Point c(2.0f, 3.0f);
    
    std::cout << "Testing triangle with vertices:" << std::endl;
    std::cout << "A(" << a.getX() << ", " << a.getY() << ")" << std::endl;
    std::cout << "B(" << b.getX() << ", " << b.getY() << ")" << std::endl;
    std::cout << "C(" << c.getX() << ", " << c.getY() << ")" << std::endl;
    std::cout << std::endl;
    
    // Test points inside the triangle
    Point inside1(2.0f, 1.0f);
    Point inside2(1.5f, 0.5f);
    Point inside3(2.5f, 1.5f);
    
    std::cout << "Points that should be INSIDE:" << std::endl;
    std::cout << "Point(" << inside1.getX() << ", " << inside1.getY() << "): " 
              << (bsp(a, b, c, inside1) ? "INSIDE" : "OUTSIDE/ON_EDGE") << std::endl;
    std::cout << "Point(" << inside2.getX() << ", " << inside2.getY() << "): " 
              << (bsp(a, b, c, inside2) ? "INSIDE" : "OUTSIDE/ON_EDGE") << std::endl;
    std::cout << "Point(" << inside3.getX() << ", " << inside3.getY() << "): " 
              << (bsp(a, b, c, inside3) ? "INSIDE" : "OUTSIDE/ON_EDGE") << std::endl;
    
    // Test points outside the triangle
    Point outside1(5.0f, 2.0f);
    Point outside2(-1.0f, 1.0f);
    Point outside3(2.0f, 4.0f);
    
    std::cout << "\nPoints that should be OUTSIDE:" << std::endl;
    std::cout << "Point(" << outside1.getX() << ", " << outside1.getY() << "): " 
              << (bsp(a, b, c, outside1) ? "INSIDE" : "OUTSIDE/ON_EDGE") << std::endl;
    std::cout << "Point(" << outside2.getX() << ", " << outside2.getY() << "): " 
              << (bsp(a, b, c, outside2) ? "INSIDE" : "OUTSIDE/ON_EDGE") << std::endl;
    std::cout << "Point(" << outside3.getX() << ", " << outside3.getY() << "): " 
              << (bsp(a, b, c, outside3) ? "INSIDE" : "OUTSIDE/ON_EDGE") << std::endl;
    
    // Test points on edges/vertices (should return false)
    Point onVertex = a;  // Point exactly on vertex A
    Point onEdge(2.0f, 0.0f);  // Point on edge AB
    
    std::cout << "\nPoints ON EDGE/VERTEX (should be OUTSIDE/ON_EDGE):" << std::endl;
    std::cout << "Point on vertex A(" << onVertex.getX() << ", " << onVertex.getY() << "): " 
              << (bsp(a, b, c, onVertex) ? "INSIDE" : "OUTSIDE/ON_EDGE") << std::endl;
    std::cout << "Point on edge AB(" << onEdge.getX() << ", " << onEdge.getY() << "): " 
              << (bsp(a, b, c, onEdge) ? "INSIDE" : "OUTSIDE/ON_EDGE") << std::endl;
    
    std::cout << std::endl;
}

int main( void ) {
    // testFixedOperators();
    testPointClass();
    testBSP();
    
    std::cout << "=== All tests completed ===" << std::endl;
    return 0;
}