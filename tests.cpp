#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "coord3d.h"

//add your tests here
//Things to note:
// 1. The Approx() function compares two floating-point values and returns true if their difference
// is within a certain tolerance. This allows for the test cases to pass.

TEST_CASE("Length() Test Cases")
{
    Coord3D p1 = {10,20,30};
    CHECK(length(&p1) == doctest::Approx(37.4166));
    Coord3D p2 = {3,4,5};
    CHECK(length(&p2) == doctest::Approx(7.07107));
}

TEST_CASE("fartherFromOrigin() Test Cases")
{
    Coord3D p1 = {10,20,30};
    Coord3D q1 = {-20, 21, -22};
    Coord3D * farther;
    farther = fartherFromOrigin(&p1, &q1);
    CHECK(farther == &p1);
    Coord3D p2 = {3, 4, 5};
    Coord3D q2 = {-20, 21, -22};
    farther = fartherFromOrigin(&p2, &q2);
    CHECK(farther == &q2);
}

TEST_CASE("Move() Test Cases") 
{
    Coord3D pos1 = {0, 0, 100.0};
    Coord3D vel1 = {1, -5, 0.2};
    move(&pos1, &vel1, 2.0);
    CHECK(pos1.x == 2);
    CHECK(pos1.y == -10);
    CHECK(pos1.z == 100.4);
    Coord3D pos2 = {0, 0, 0};
    Coord3D vel2 = {1, 2, 3};
    move(&pos2, &vel2, 3.0);
    CHECK(pos2.x == 3);
    CHECK(pos2.y == 6);
    CHECK(pos2.z == 9);
}

TEST_CASE("Create and Delete Coord3D Test Cases") {
    Coord3D *p1 = createCoord3D(1.0, 2.0, 3.0);
    CHECK(p1->x == 1.0);
    CHECK(p1->y == 2.0);
    CHECK(p1->z == 3.0);
    deleteCoord3D(p1);
}
