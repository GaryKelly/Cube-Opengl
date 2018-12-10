#ifndef MATRIX3_H
#define MATRIX3_H
#include <math.h>
#include "Vector3.h"
#include <iostream>
#include <SFML/Graphics.hpp>

class Matrix3
{
private:
	double m_a11;
	double m_a12;
	double m_a13;
	double m_a21;
	double m_a22;
	double m_a23;
	double m_a31;
	double m_a32;
	double m_a33;
public:
	Matrix3();
	~Matrix3();
	Matrix3(MyVector3 t_row1, MyVector3 t_row2, MyVector3 t_row3);
	Matrix3(double t_11, double t_12, double t_13,
		double t_21, double t_22, double t_23,
		double t_31, double t_32, double t_33);
	MyVector3 operator*(const MyVector3 t_v1)const;
	Matrix3 operator+(const Matrix3 t_m1)const;
	Matrix3 operator-(const Matrix3 t_m1)const;
	Matrix3 operator*(const double t_x)const;
	Matrix3 operator*(const Matrix3 t_m1)const;
	Matrix3 operator-(Matrix3 t_m1);
	Matrix3 transpose(Matrix3 t_m1);
	static double Determinant();
	MyVector3 Row(int t_i);
	MyVector3 Column(int t_i);
	static Matrix3 inverse();
	static Matrix3 rotation(int t_angle);
	static Matrix3 rotateX(int t_angle);
	static Matrix3 rotateY(int t_angle);
	static Matrix3 rotateZ(int t_angle);
	static Matrix3 translate(int t_x, int t_y);
	static Matrix3 scale(int t_x, int t_y);



};




#endif // !MATRIX3_H
