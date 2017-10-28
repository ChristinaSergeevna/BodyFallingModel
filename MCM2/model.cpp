#include "model.h"

double Model::calcAcceleration(double x, double y, double v)
{
	return -gravConst_ * g - gravity_ * gravityAcceleration(y)
		+ buoyant_ * buoyantForce()
		+ linearAcc_ * linearResistance(v)
		+ squareAcc_ * squareResistance(v);
}

void Model::Euler_Cromer(int n, double a, double b, double y0)
{
	double h = (b - a) / n;
	double x = a, y = y0, v = initSpeed_;
	res.push_back(std::pair<double, double>(a, y0));
	for (int i = 1; i <= n; ++i)
	{
		v = v + h * calcAcceleration(x, y, v);
		y = y + h * v;
		x += h;
		res.push_back(std::pair<double, double>(x, y));
		velocity.push_back(v);
		acceleration.push_back(calcAcceleration(x, y, v));
	}
}