#include <iostream>
#include <cmath>
#include "funcs.h"
#include "coord3d.h"

int main()
{
  //Test Task A
  Coord3D pointP1 = {10, 20, 30};
  std::cout << length(&pointP1) << std::endl; // would print 37.4166
  Coord3D pointP2 = {3, 4, 5};
  std::cout << length(&pointP2) << std::endl; // would print 37.4166

}
