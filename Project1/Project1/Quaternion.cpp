#include "Quaternion.h"

Quaternion::Quaternion()
{
}

Quaternion::~Quaternion()
{
}

Quaternion::Quaternion(double t_x, double t_y, double t_z, double t_w)
{
}

Quaternion::Quaternion(double t_w, MyVector3 t_vector)
{
}

std::string Quaternion::toString()
{
	return std::string();
}

double Quaternion::Modulus()
{
	return 0.0;
}

Quaternion Quaternion::normalise()
{
	return Quaternion();
}

void Quaternion::fromAxisAngle(MyVector3 t_axis, double t_rotation)
{
}

Quaternion Quaternion::mulitply(Quaternion t_quat)
{
	return Quaternion();
}

Quaternion Quaternion::copy()
{
	return Quaternion();
}

MyVector3 Quaternion::roatate(MyVector3 t_vecr, int t_angle)
{
	return MyVector3();
}

Quaternion Quaternion::operator+(const Quaternion t_quat) const
{
	return Quaternion();
}

Quaternion Quaternion::operator-(const Quaternion t_quat) const
{
	return Quaternion();
}

Quaternion Quaternion::operator*(const double t_scale) const
{
	return Quaternion();
}
