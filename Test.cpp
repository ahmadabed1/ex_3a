//by: ahmad abed :)
#include "Matrix.hpp"
#include "vector"
#include "doctest.h"
using namespace std;
namespace zich{
TEST_CASE("add test case"){
    std::vector<double> vector1 = {1, 1, 1, 1};
    std::vector<double> vector2 = {2, 2, 2, 2};
    Matrix mat_a{vector1, 2, 2};
    Matrix mat_b{vector2, 2 ,2};
    std::vector<double> vector3 = {1, 1, 1, 1, 1, 1, 1, 1,1};
    std::vector<double> vector4 = {2, 2, 2, 2, 2, 2, 2, 2, 2};
    Matrix mat_c{vector3, 3, 3};
    Matrix mat_d{vector4, 3,3};
    CHECK_THROWS(mat_a+mat_b);
    CHECK_THROWS(mat_a+mat_c);
    CHECK_THROWS(mat_d+mat_c);
    CHECK_THROWS(mat_d+mat_a);
    
}
TEST_CASE("adding equal test case"){
    std::vector<double> vector1 = {1, 1, 1, 1};
    std::vector<double> vector2 = {2, 2, 2, 2};
    Matrix mat_a{vector1, 2, 2};
    Matrix mat_b{vector2, 2 ,2};
    std::vector<double> vector3 = {1, 1, 1, 1, 1, 1, 1, 1,1};
    std::vector<double> vector4 = {2, 2, 2, 2, 2, 2, 2, 2, 2};
    Matrix mat_c{vector3, 3, 3};
    Matrix mat_d{vector4, 3,3};
    CHECK_THROWS(mat_a+=mat_b);
    CHECK_THROWS(mat_a+=mat_c);
    CHECK_THROWS(mat_d+=mat_c);
    CHECK_THROWS(mat_d+=mat_a);
    
}

TEST_CASE("mult test case"){
    std::vector<double> vector1 = {1, 1, 1, 1};
    std::vector<double> vector2 = {2, 2, 2, 2};
    Matrix mat_a{vector1, 2, 2};
    Matrix mat_b{vector2, 2 ,2};
    std::vector<double> vector3 = {1, 1, 1, 1, 1, 1, 1, 1,1};
    std::vector<double> vector4 = {2, 2, 2, 2, 2, 2, 2, 2, 2};
    Matrix mat_c{vector3, 3, 3};
    Matrix mat_d{vector4, 3,3};
    CHECK_THROWS(mat_a+=mat_b);
    CHECK_THROWS(mat_a+=mat_c);
    CHECK_THROWS(mat_d+=mat_c);
    CHECK_THROWS(mat_d+=mat_a);
}

TEST_CASE("BOOLEAN TEST CASE") {
    std::vector<double> vector1 = {1, 1, 1, 1};
    std::vector<double> vector2 = {2, 2, 2, 2};
    Matrix mat_a{vector1, 2, 2};
    Matrix mat_b{vector2, 2 ,2};
    std::vector<double> vector3 = {1, 1, 1, 1, 1, 1, 1, 1,1};
    std::vector<double> vector4 = {2, 2, 2, 2, 2, 2, 2, 2, 2};
    Matrix mat_c{vector3, 3, 3};
    Matrix mat_d{vector4, 3,3};
    CHECK_EQ(mat_a==mat_b, false);
    CHECK_EQ(mat_c==mat_d, false);
    CHECK_EQ(mat_a==mat_d, false);
    CHECK_EQ(mat_d==mat_c, false);
}
TEST_CASE("BOOLEAN NOR EQUAL TEST CASE"){
    std::vector<double> vector1 = {1, 1, 1, 1};
    std::vector<double> vector2 = {2, 2, 2, 2};
    Matrix mat_a{vector1, 2, 2};
    Matrix mat_b{vector2, 2 ,2};
    std::vector<double> vector3 = {1, 1, 1, 1, 1, 1, 1, 1,1};
    std::vector<double> vector4 = {2, 2, 2, 2, 2, 2, 2, 2, 2};
    Matrix mat_c{vector3, 3, 3};
     Matrix mat_d{vector4, 3,3}; 
    CHECK_EQ(mat_a!=mat_b, false);
    CHECK_EQ(mat_c!=mat_d, false);
    CHECK_EQ(mat_a!=mat_d, false);
    CHECK_EQ(mat_d!=mat_c, false);
}
TEST_CASE("BOOLEAN NOR EQUAL TEST CASE"){
    std::vector<double> vector1 = {4, 4, 4, 4};
    std::vector<double> vector2 = {6, 6, 6, 6};
    std::vector<double> vector3 = {5,5, 5, 5, 5, 5, 5, 5,5};
    std::vector<double> vector4 = {5, 5, 5, 5, 5, 5,5 , 5, };
    Matrix mat_a{vector1, 4, 4};
    Matrix mat_b{vector2,4 ,4};
    Matrix mat_c{vector3, 5, 5};
     Matrix mat_d{vector4, 5,5}; 
    CHECK_EQ(mat_a!=mat_b, false);
    CHECK_EQ(mat_c!=mat_d, false);
    CHECK_EQ(mat_a!=mat_d, false);
    CHECK_EQ(mat_d!=mat_c, false);
}
}