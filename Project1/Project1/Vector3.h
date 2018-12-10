#ifndef VECTOR3_H
#define VECTOR3_H

#include <iostream>

class MyVector3
{
public:

	MyVector3();
	MyVector3(double t_x, double t_y, double t_z);
	double returnX();
	void setX(double t_num);
	double returnY();
	void setY(double t_num);
	double returnZ();
	void setZ(double t_num);
	double Length();
	double LengthSquared();
	void Normalise();
	MyVector3 operator+(MyVector3 t_v1);
	MyVector3 operator-(MyVector3 t_v1);
	double operator*(MyVector3 t_v1);
	MyVector3 operator*(const double t_num)const;
	double operator^(const MyVector3 t_v1)const;
	std::string toString();

private:
	double m_x;
	double m_y;
	double m_z;
};




#endif