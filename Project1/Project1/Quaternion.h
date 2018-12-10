#ifndef QUATERNION_H
#define QUATERNION_H

#include "Matrix3.h"
#include "Vector3.h"
#include <math.h>
#include <iostream>

class Quaternion
{
private:
	double m_x;
	double m_y;
	double m_z;
	double m_w;
public:
	Quaternion();
	~Quaternion();
	Quaternion(double t_x, double t_y, double t_z, double t_w);
	Quaternion(double t_w, MyVector3 t_vector);
	std::string toString();
	double Modulus();
	Quaternion normalise();
	Quaternion conjugate();
	void fromAxisAngle(MyVector3 t_axis, double t_rotation);
	Quaternion mulitply(Quaternion t_quat);
	Quaternion copy();
	MyVector3 roatate(MyVector3 t_vecr, int t_angle);
	Quaternion operator+(const Quaternion t_quat)const;
	Quaternion operator-(const Quaternion t_quat)const;
	Quaternion operator*(const double t_scale)const;


};
#endif // !QUATERNION_H

