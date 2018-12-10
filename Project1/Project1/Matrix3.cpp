#include "Matrix3.h"

Matrix3::Matrix3()
{
	m_a11 = 0.0;
	m_a12 = 0.0;
	m_a13 = 0.0;
	m_a21 = 0.0;
	m_a22 = 0.0;
	m_a23 = 0.0;
	m_a31 = 0.0;
	m_a32 = 0.0;
	m_a33 = 0.0;
}

Matrix3::~Matrix3()
{
}

Matrix3::Matrix3(MyVector3 t_row1, MyVector3 t_row2, MyVector3 t_row3) 
{
	m_a11 = t_row1.returnX();
	m_a12 = t_row1.returnY();
	m_a13 = t_row1.returnZ();
	m_a21 = t_row2.returnX();
	m_a22 = t_row2.returnY();
	m_a23 = t_row2.returnZ();
	m_a31 = t_row3.returnX();
	m_a32 = t_row3.returnY();
	m_a33 = t_row3.returnZ();

}

Matrix3::Matrix3(double t_11, double t_12, double t_13, double t_21, double t_22, double t_23, double t_31, double t_32, double t_33)
{
	m_a11 = t_11;
	m_a12 = t_12;
	m_a13 = t_13;
	m_a21 = t_21;
	m_a22 = t_22;
	m_a23 = t_23;
	m_a31 = t_13;
	m_a32 = t_32;
	m_a33 = t_33;
}

MyVector3 Matrix3::operator*(const MyVector3 t_v1) const
{
//	double vectX = m_a11 * t_v1.returnX() + m_a12 * t_v1.returnY() + m_a13 * t_v1.returnZ()
	return MyVector3();
}

Matrix3 Matrix3::operator+(const Matrix3 t_m1) const
{
	return Matrix3();
}

Matrix3 Matrix3::operator-(const Matrix3 t_m1) const
{
	return Matrix3();
}

Matrix3 Matrix3::operator*(const double t_x) const
{
	return Matrix3();
}

Matrix3 Matrix3::operator*(const Matrix3 t_m1) const
{
	return Matrix3();
}



Matrix3 Matrix3::operator-(Matrix3 t_m1)
{
	return Matrix3();
}

Matrix3 Matrix3::transpose(Matrix3 t_m1)
{
	return Matrix3();
}

double Matrix3::Determinant()
{
	return 0.0;
}



MyVector3 Matrix3::Row(int t_i)
{
	return MyVector3();
}

MyVector3 Matrix3::Column(int t_i)
{
	return MyVector3();
}

Matrix3 Matrix3::inverse()
{
	return Matrix3();
}


Matrix3 Matrix3::rotation(int t_angle)
{
	return Matrix3();
}

Matrix3 Matrix3::rotateX(int t_angle)
{
	return Matrix3();
}

Matrix3 Matrix3::rotateY(int t_angle)
{
	return Matrix3();
}

Matrix3 Matrix3::rotateZ(int t_angle)
{
	return Matrix3();
}

Matrix3 Matrix3::translate(int t_x, int t_y)
{
	return Matrix3();
}

Matrix3 Matrix3::scale(int t_x, int t_y)
{
	return Matrix3();
}
