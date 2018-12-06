#ifndef MATRIX3_H
#define MATRIX3_H
#include <math.h>
#include "Vector3.h"
#include <iostream>
#include <SFML/Graphics.hpp>

class Matrix3
{
public:
	double m_a11;
	double m_a12;
	double m_a13;
	double m_a21;
	double m_a22;
	double m_a23;
	double m_a31;
	double m_a32;
	double m_a33;
	Matrix3();
	~Matrix3();
	Matrix3(Vector3 t_row1, Vector3 m_row2, Vector3 t_row3);
	Matrix3(double t_11, double t_12, double t_13,
		double t_21, double t_22, double t_23,
		double t_31, double t_32, double t_33);
	static Vector3 operator*(Matrix3 t_m1, Vector3 t_v1);
	static Matrix3 operator+(Matrix3 t_m1, Matrix3 t_m2);
	static Matrix3 operator-(Matrix3 t_m1, Matrix3 t_m2);
	static Matrix3 operator*(double t_x, Matrix3 t_m1);
	static Matrix3 operator*(Matrix3 t_m1, Matrix3 t_m2);
	static Matrix3 operator-(Matrix3 t_m1);
	static Matrix3 transpose(Matrix3 t_m1);
	static double Determinant(Matrix3 t_m1);
	Vector3 Row(int t_i);
	Vector3 Column(int t_i);
	static Matrix3 inverse(Matrix3 t_m1);
	static Matrix3 rotation(int t_angle);
	static Matrix3 rotateX(int t_angle);
	static Matrix3 rotateY(int t_angle);
	static Matrix3 rotateZ(int t_angle);
	static Matrix3 translate(int t_x, int t_y);
	static Matrix3 scale(int t_x, int t_y);



};




#endif // !MATRIX3_H
