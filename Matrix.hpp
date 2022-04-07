#include <iostream>
#include <vector>
#include <string>
using namespace std;

namespace zich{

    class Matrix{
    private:
        vector<double> mat;
        int row,col;
    
    public:
        //cosractor
        Matrix(vector<double> mat, int row, int col){}
        //less  once
        friend Matrix operator++(Matrix &mat);
        //add once op
        friend Matrix operator+(const Matrix &mat_a, const Matrix &mat_b);
        //add const 
        friend Matrix operator+(const Matrix &mat);
        //add ref op
        friend Matrix operator+=(Matrix &mat_a, const Matrix &mat_b);
        //biger equal bool op
        friend bool operator>=(const Matrix &mat_a, const Matrix &mat_b);
        //less than bool op
        friend bool operator<(const Matrix &mat_a, const Matrix &mat_b);
        //less than equal bool op
        friend bool operator<=(const Matrix &mat_a, const Matrix &mat_b);
        //equal bool op
        friend bool operator==(const Matrix &mat_a, const Matrix &mat_b);
        //not equal bool op
        friend bool operator!=(const Matrix &mat_a, const Matrix &mat_b);
        //less once
        friend Matrix operator--(Matrix &mat);
        //less once op
        friend Matrix operator-(const Matrix &mat_a, const Matrix &mat_b);
        //less once equal op
        friend Matrix operator-=(Matrix &mat_a, const Matrix &mat_b);
        //op less const mat
        friend Matrix operator-(const Matrix &mat);
        //bugger than bool op
        friend bool operator>(const Matrix &mat_a, const Matrix &mat_b);
        //mult bool op
        friend Matrix operator*(const double bar, Matrix &mat);
        //mult whith baramiter
        friend Matrix operator*=(Matrix &mat, const double bar);
        //mult operator
        friend Matrix operator*(const Matrix &mat_a, const Matrix &mat_b);
        //mult operator
        friend Matrix operator*=( Matrix &mat_a, const Matrix &mat_b);
        //in operator
        friend ostream& operator<< (ostream& out, const Matrix &mat);
        //out operator
        friend istream& operator>> (istream& in, Matrix &mat);
        };
    }