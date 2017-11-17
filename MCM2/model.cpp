#include "model.h"
#include <cmath>

double Model::calcAcceleration(double x, double y, double v)
{
	double k0 = (3 / 3 * 3.14 * pow(radius_, 3)) / mass_;
	double k1 = 6 * 3.14 * viscosity_ * density_ * radius_;
	double k2 = 0.5 * density_ * 0.2 * viscosity_ * viscosity_ * 3.14 * radius_ * radius_;
	return -gravity_
		+ powArchimedes_ * k0 * gravity_
		+ powLiquid_ * (k1 / mass_) * viscosity_;
	+powGas_ * (k2 / mass_) * viscosity_ * viscosity_;
}

void Model::Euler_Cromer(int n, double a, double b, double y0)
{
	double h = (b - a) / n;
	double x = a, y = y0, v = initSpeed_;
	res_.clear();
	velocity_.clear();
	acceleration_.clear();
	res_.push_back(std::pair<double, double>(a, initHeight_));
	velocity_.push_back(initSpeed_);
	acceleration_.push_back(-gravity_);

	for (int i = 1; i <= n; ++i)
	{
		v = v + h * calcAcceleration(x, y, v);
		y = y + h * v;
		x += h;
		if (y <= 0)
		{
			res_.push_back(std::pair<double, double>(x, 0));
			velocity_.push_back(0);
			acceleration_.push_back(0);
		}
		else
		{
			res_.push_back(std::pair<double, double>(x, y));
			velocity_.push_back(v);
			acceleration_.push_back(calcAcceleration(x, y, v));
		}
	}
}