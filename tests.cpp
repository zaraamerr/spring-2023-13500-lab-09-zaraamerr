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
