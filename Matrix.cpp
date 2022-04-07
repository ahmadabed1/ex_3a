#include <iostream>
#include <vector>
#include "Matrix.hpp"
using namespace std;
//6/4/2022

//flag and constanta i will using it in part b

namespace zich {
    vector<double> ahmad;
    bool flag=true;
    
    Matrix operator+(const Matrix &mat_a, const Matrix &mat_b){
        std::vector<double> helper;
        if(mat_a.row!=mat_b.row ||mat_a.col!=mat_b.col){
            if(mat_a.col<=0 && mat_a.col && mat_b.col<=0 && mat_b.row<=0){
                throw runtime_error("size invaled");
        }
        }
        return Matrix(helper,mat_a.col,mat_a.row);
    }

    Matrix operator+=(Matrix &mat_a, const Matrix &mat_b){
        std::vector<double> helper;
        if(mat_a.row!=mat_b.row ||mat_a.col!=mat_b.col){
            if(mat_a.col<=0 && mat_a.col && mat_b.col<=0 && mat_b.row<=0){
                throw runtime_error("size invaled");
        }
        }
        
        return Matrix(ahmad,0,0);
    }
    Matrix operator+(const Matrix &mat){
        int consta=0;
        if(mat.col<0 ||mat.row<0 ){
            throw runtime_error("size invaled");
        }
        return mat;
    }
    Matrix operator-(const Matrix &mat_a, const Matrix &mat_b){
        int consta=0;
        if(mat_a.row!=mat_b.row ||mat_a.col!=mat_b.col){
            if(mat_a.col<=0 && mat_a.col && mat_b.col<=0 && mat_b.row<=0){
                throw runtime_error("size invaled");
        }
        }
        return mat_b;
    }
    Matrix operator-=(Matrix &mat_a, const Matrix &mat_b){
        if(mat_a.row!=mat_b.row ||mat_a.col!=mat_b.col){
            if(mat_a.col<=0 && mat_a.col && mat_b.col<=0 && mat_b.row<=0){
                throw runtime_error("size invaled");
        }
        }
        int consta=0;
        return mat_a;
    }
    Matrix operator-(const Matrix &mat){
        if(mat.col<0 ||mat.row<0 ){
            throw runtime_error("size invaled");
        }
        int consta=0;
        return mat;
    }
    
    //boolean operator to comparTo
    //less than
    bool operator>(const Matrix &mat_a, const Matrix &mat_b){
        int consta=0;
        flag=true;
        if(mat_a.row!=mat_b.row ||mat_a.col!=mat_b.col){
            if(mat_a.col<=0 && mat_a.col && mat_b.col<=0 && mat_b.row<=0){
                throw runtime_error("size invaled");
        }
        }
        return false;
    }
    //less than equal
    bool operator>=(const Matrix &mat_a, const Matrix &mat_b){
        int consta=0;
        flag=true;
        if(mat_a.row!=mat_b.row ||mat_a.col!=mat_b.col){
            if(mat_a.col<=0 && mat_a.col && mat_b.col<=0 && mat_b.row<=0){
                throw runtime_error("size invaled");
        }
        }
        return false;
    }
    //bigger than operator
    bool operator<(const Matrix &mat_a, const Matrix &mat_b){
        int consta=0;
        flag=true;
       if(mat_a.row!=mat_b.row ||mat_a.col!=mat_b.col){
            if(mat_a.col<=0 && mat_a.col && mat_b.col<=0 && mat_b.row<=0){
                throw runtime_error("size invaled");
        }
        }
        return false;
    }
    //bigger than equal operator
    bool operator<=(const Matrix &mat_a, const Matrix &mat_b){
        int consta=0;
        flag=true;
        if(mat_a.row!=mat_b.row ||mat_a.col!=mat_b.col){
            if(mat_a.col<=0 && mat_a.col && mat_b.col<=0 && mat_b.row<=0){
                throw runtime_error("size invaled");
        }
        }
        return false;
    }
    //equal operator
    bool operator==(const Matrix &mat_a, const Matrix &mat_b){
        int consta=0;
        flag=true;
        if(mat_a.row!=mat_b.row ||mat_a.col!=mat_b.col){
            if(mat_a.col<=0 && mat_a.col && mat_b.col<=0 && mat_b.row<=0){
                throw runtime_error("size invaled");
        }
        }
        return false;
    }
    //not equal operator
    bool operator!=(const Matrix &mat_a, const Matrix &mat_b){
        int consta=0;
        flag=true;
        if(mat_a.row!=mat_b.row ||mat_a.col!=mat_b.col){
            if(mat_a.col<=0 && mat_a.col && mat_b.col<=0 && mat_b.row<=0){
                throw runtime_error("size invaled");
        }
        }
        return (mat_a.col<mat_b.col || mat_a.row< mat_b.row);
    }
    
    //add ref operaor one
    Matrix operator++(Matrix &mat){
        int consta = 0;
        if(mat.col<0 ||mat.row<0 ){
            throw runtime_error("size invaled");
        }
        return mat;
    }
    //less one operator ref
    Matrix operator--(Matrix &mat){
        int consta = -1;
        if(mat.col<0 ||mat.row<0 ){
            throw runtime_error("size invaled");
        }
        return mat;
    }
    //mult operator whith baramiter 
    Matrix operator*(const double bar, Matrix &mat){
        int consta = 0;
        if(mat.col<0 ||mat.row<0 ){
            throw runtime_error("size invaled");
        }
        return mat;
    }
    //equal operator mult
    Matrix operator*=(Matrix &mat,const double bar){
        int consta = 0;
        if((mat.col<0 ||mat.row<0) && bar<0 ){
            throw runtime_error("size invaled");
        }
        return mat;
    }
    
    Matrix operator*(const Matrix &mat_a, const Matrix &mat_b){
        int consta = 0;
        if(mat_a.row!=mat_b.row ||mat_a.col!=mat_b.col){
            if(mat_a.col<=0 && mat_a.col && mat_b.col<=0 && mat_b.row<=0){
                throw runtime_error("size invaled");
        }
        }
        return mat_a;
    }
    Matrix operator*=(Matrix &mat_a, const Matrix &mat_b){
        int consta = 0;
        if(mat_a.col<0 ||mat_a.row<0 ){
            throw runtime_error("size invaled");
        }
        if(mat_a.row!=mat_b.row ||mat_a.col!=mat_b.col){
            if(mat_a.col<=0 && mat_a.col && mat_b.col<=0 && mat_b.row<=0){
                throw runtime_error("size invaled");
        }
        }
        return mat_b;
    }

    ostream& operator<<(ostream &out, const Matrix &mat) {
        bool return_all_col_row_ou=true;
        if(mat.col<0 ||mat.row<0 ){
            throw runtime_error("size invaled");
        }
        return out<<"<<ahmad>>";
    }
    istream& operator>>(istream &in, Matrix &mat) {
        bool return_all_col_row_in=true;
        if(mat.col<0 ||mat.row<0 ){
            throw runtime_error("size invaled");
        }
        return in;
    }

}