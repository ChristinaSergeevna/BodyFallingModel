#pragma once
#include <cmath>
#include <vector>
#include <utility>

class Model
{
private:
	double G = 6.67408e-11; // ����. ����.
	double R = 6.4e6; // ������ �����
	double g = 9.81; //��������� ���������� �������

	double radius_, mass_;
	double initSpeed_, initHeight_;
	double initTime_, finalTime_;
	int pointsNum_;
	double gravity_;
	double buoyantCoeff_, linearCoeff_, squareCoeff_;
	int gravConst_;
	int buoyant_, density_;
	int linearAcc_, squareAcc_;

	bool powArchimedes_, powLiquid_, powGas_;

	std::vector< std::pair<double, double> > res;
	std::vector<double> velocity;
	std::vector<double> acceleration;
public:
	Model() {}

	void buoyantCoeff(double c) { buoyantCoeff_ = c; }
	void linearCoeff(double c) { linearCoeff_ = c; }
	void squareCoeff(double c) { squareCoeff_ = c; }
	void mass(double m) { mass_ = m; }
	void radius(double r) { radius_ = r; }
	void initSpeed(double v) { initSpeed_ = v; }
	void initHeight(double h) { initHeight_ = h; }
	void initTime(double t) { initTime_ = t; }
	void finalTime(double t) { finalTime_ = t; }
	void pointsNum(int p) { pointsNum_ = p; }
	void density(int d) { density_ = d; }
	void gravity(double g) { gravity_ = g; }

	int pointsNum() { return pointsNum_; }
	double initTime() { return initTime_; }
	double finalTime() { return finalTime_; }
	double initHeight() { return initHeight_; }

	void powArchimedes(bool p) { powArchimedes_ = p; }
	void powLiquid(bool p) { powLiquid_ = p; }
	void powGas(bool p) { powGas_ = p; }

	double linearResistance(double v) { return -linearCoeff_ * v / mass_; }
	double squareResistance(double v) { return -squareCoeff_ * v *  abs(v) / mass_; }
	double gravityAcceleration(double h) { return g / pow(1 + h / R, 2.0); }
	double buoyantForce() { return buoyantCoeff_ *  g; }
	double calcAcceleration(double x, double y, double v);
	void Euler_Cromer(int n, double x0, double x1, double y0);
};

extern Model myModel;