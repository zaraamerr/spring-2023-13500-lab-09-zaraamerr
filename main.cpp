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
  std::cout << "Address of Q: " << &pointQ1 << std::endl << std::endl;
  Coord3D * farther1 = fartherFromOrigin(&pointP1, &pointQ1);
  std::cout << "ans = " << farther1 << std::endl; //would print the address of P1
  //  Test 2
  Coord3D pointP2 = {3,4,5}; //length(&pointP2)= 7.07107
  Coord3D pointQ2 = {-20, 21, -22}; //length(&pointQ2)= 36.4005
  std::cout << "Address of P: " << &pointP2 << std::endl;
  std::cout << "Address of Q: " << &pointQ2 << std::endl << std::endl;
  Coord3D * farther2 = fartherFromOrigin(&pointP2, &pointQ2);
  std::cout << "ans = " << farther2 << std::endl; //would print the address of Q2
}
