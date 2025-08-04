#include "../headers/Point.hpp"
#include "../headers/Fixed.hpp"
#include <iostream>

/**
 * @brief Calculate the area of a triangle using the cross product method
 * Uses the formula: Area = 0.5 * |x1(y2-y3) + x2(y3-y1) + x3(y1-y2)|
 * We don't need to divide by 2 since we're only comparing areas.
 * @param p1 First vertex of the triangle
 * @param p2 Second vertex of the triangle
 * @param p3 Third vertex of the triangle
 * @return The area of the triangle (without the 0.5 factor)
 */
static Fixed triangleArea(Point const &p1, Point const &p2, Point const &p3) {
    Fixed area = (p1.getX() * (p2.getY() - p3.getY()) + 
                  p2.getX() * (p3.getY() - p1.getY()) + 
                  p3.getX() * (p1.getY() - p2.getY()));
    
    // Return absolute value - if area is negative, make it positive
    if (area < Fixed(0))
        return Fixed(0) - area;
    return area;
}

/**
 * @brief Binary Space Partitioning function
 * Determines whether a point is strictly inside a triangle using the area method.
 * 
 * Algorithm:
 * 1. Calculate the area of the main triangle ABC
 * 2. Calculate the areas of three sub-triangles: PAB, PBC, PCA (where P is the point)
 * 3. If P is inside the triangle, then: Area(ABC) = Area(PAB) + Area(PBC) + Area(PCA)
 * 4. If P is on an edge or vertex, one or more sub-triangle areas will be 0
 * 5. If P is outside, the sum of sub-areas will be greater than the main area
 * 
 * @param a First vertex of the triangle
 * @param b Second vertex of the triangle
 * @param c Third vertex of the triangle
 * @param point The point to check
 * @return True if the point is strictly inside the triangle, False otherwise
 */
bool bsp(Point const a, Point const b, Point const c, Point const point) {
    // Calculate the area of the main triangle ABC
    Fixed mainArea = triangleArea(a, b, c);
    
    // If the main triangle has zero area, it's degenerate (all points on a line)
    if (mainArea == Fixed(0))
        return false;
    
    // Calculate areas of the three sub-triangles formed by the point and triangle edges
    Fixed area1 = triangleArea(point, a, b);  // Area of triangle PAB
    Fixed area2 = triangleArea(point, b, c);  // Area of triangle PBC
    Fixed area3 = triangleArea(point, c, a);  // Area of triangle PCA
    
    // If any sub-triangle has zero area, the point is on an edge or vertex
    if (area1 == Fixed(0) || area2 == Fixed(0) || area3 == Fixed(0))
        return false;
    
    // Check if the sum of sub-areas equals the main area
    // If they're equal, the point is strictly inside the triangle
    Fixed sumAreas = area1 + area2 + area3;
    
    return (sumAreas == mainArea);
}
