#include <iostream>
#include <cmath>
#include "funcs.h"
#include "coord3d.h"

int main()
{
  //Test Task A
  Coord3D pointP = {10, 20, 30};
  std::cout << length(&pointP) << std::endl; // would print 37.4166
  Coord3D pointQ = {3, 4, 5};
  std::cout << length(&pointQ) << std::endl; // would print 7.07107
  //Test Task B
  //  Test 1
  Coord3D pointP1 = {10, 20, 30}; //length(&pointP1)=37.4166
  Coord3D pointQ1 = {-20, 21, -22}; //length(&pointQ1)=36.4005
  std::cout << "Address of P: " << &pointP1 << std::endl;
  std::cout << "Address of Q: " << &pointQ1 << std::endl;
  Coord3D * farther1 = fartherFromOrigin(&pointP1, &pointQ1);
  std::cout << "ans = " << farther1 << std::endl; //would print the address of P1
  //  Test 2
  Coord3D pointP2 = {3,4,5}; //length(&pointP2)= 7.07107
  Coord3D pointQ2 = {-20, 21, -22}; //length(&pointQ2)= 36.4005
  std::cout << "Address of P: " << &pointP2 << std::endl;
  std::cout << "Address of Q: " << &pointQ2 << std::endl;
  Coord3D * farther2 = fartherFromOrigin(&pointP2, &pointQ2);
  std::cout << "ans = " << farther2 << std::endl; //would print the address of Q2
  //Test Task C
  //  Test 1
  Coord3D pos1 = {0, 0, 100.0};
  Coord3D vel1 = {1, -5, 0.2};
  move(&pos1, &vel1, 2.0); // object pos gets changed
  std::cout << pos1.x << " " << pos1.y << " " << pos1.z << std::endl; // prints: 2 -10 100.4
  //  Test 2
  Coord3D pos2 = {0, 0, 0};
  Coord3D vel2 = {1, 2, 3};
  move(&pos2, &vel2, 3.0); // object pos gets changed
  std::cout << pos2.x << " " << pos2.y << " " << pos2.z << std::endl; // prints: 3 6 9
  //Test Task E
  // Create a new Coord3D object
  Coord3D *p = createCoord3D(1.0, 2.0, 3.0);
  // Print out its coordinates
  std::cout << "Initial coordinates: (" << p->x << ", " << p->y << ", " << p->z << ")" << std::endl;
  // Move the object by (1, 1, 1)
  Coord3D vel = {1.0, 1.0, 1.0};
  move(p, &vel, 1.0);
  // Print out the updated coordinates
  std::cout << "New coordinates: (" << p->x << ", " << p->y << ", " << p->z << ")" << std::endl;
  // Delete the object to free up memory
  deleteCoord3D(p);
  return 0;
}
