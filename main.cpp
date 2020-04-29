#include <Dvec.hpp>
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include <catch.hpp>

using namespace Vec;

DVec3d v1 = {0.0, 1.1, 2.5}, v2(3.0, 0.9, 1.5), v3(3.0, 2.0, 4.0), v0(0,0,0);
DVec3d v4 = {1.0, 1.0, 2.0}, v5(4.0, 2.1, 0.5), v6(4.0, 2.1, 1.0);

TEST_CASE( "Vectors are tested", "[DVec3d]" ) {
    REQUIRE( v1+v2 == v3 );
    REQUIRE( v1-v1 == v0 );
    REQUIRE( v4*v5 == v6 );
}


