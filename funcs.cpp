#include <iostream>
#include <cmath>
#include "funcs.h"
#include "coord3d.h"

//Task A: Define a function length() whose parameters are the coordinates of a point P
//passed as a pointer, and computes the distance from the origin to the point P
//Things to note: 
// 1. Origin has the coordinates (0.0,0) 
// 2. P has the coordinates (x,y,z)
// 3. Euclidean Distance Formula: √x^2 + y^2 + z^2
// 4. The arrow operator (->) is used to access members of a struct or class through a pointer. 
//    It is a shorthand notation for dereferencing a pointer and accessing a member of the pointed-to 
//    object in one single step.

double length(Coord3D *p){
    //use the Euclidean Distance Formula to calculate the distance from origin to point P
    //use <cmath> library to utilize sqrt and pow functions
    return sqrt(pow(p->x, 2) + pow(p->y, 2) + pow(p->z, 2));
}

//Task B: Define a function Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2) whose parameters
//are the coordinates of two points (passed as pointers), and returns the pointer of the point that is
//farther away from the origin.

Coord3D* fartherFromOrigin(Coord3D *p1, Coord3D *p2) {
    //Use the legnth() function to determine the distance of each point from the origin
    double len1 = length(p1); //point 1
    double len2 = length(p2); //point 2
    //Compare the distances
    if (len1 > len2) { //if the first point is farther from the origin than the second point is
        return p1; //return the pointer of point 1
    } else { //otherwise if the second point is farther from the origin than the first point is
        return p2; //return the pointer of point 2
    }
}
