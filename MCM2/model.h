#pragma once
#include <cmath>
#include <vector>
#include <utility>

class Model
{
private:
	double G = 6.67408e-11; // грав. пост.
	double R = 6.4e6; // радиус Земли
	double g = 9.81; //ускорение свободного падения

	double radius_, mass_;
	double initSpeed_, initHeight_;
	double initTime_, finalTime_;
	int pointsNum_, density_;
	double gravity_, viscosity_, S_;
	double buoyantCoeff_, linearCoeff_, squareCoeff_;
	int gravConst_;

	int powArchimedes_, powLiquid_, powGas_;
	char graph_;

	std::vector< std::pair<double, double> > res_;
	std::vector<double> velocity_;
	std::vector<double> acceleration_;
public:
	Model() {}

	void mass(double m) { mass_ = m; }
	void radius(double r) { radius_ = r; }
	void initSpeed(double v) { initSpeed_ = v; }
	void initHeight(double h) { initHeight_ = h; }
	void initTime(double t) { initTime_ = t; }
	void finalTime(double t) { finalTime_ = t; }
	void pointsNum(int p) { pointsNum_ = p; }
	void density(int d) { density_ = d; }
	void gravity(double g) { gravity_ = g; }
	void viscosity(double v) { viscosity_ = v; }
	void square(double s) { S_ = s; }

	int pointsNum() { return pointsNum_; }
	double initTime() { return initTime_; }
	double finalTime() { return finalTime_; }
	double initHeight() { return initHeight_; }
	double initSpeed() { return initSpeed_; }
	double gravity() { return gravity_; }

	std::pair<double, double> result(int i) { return res_[i]; }
	double velocity(int i) { return velocity_[i]; }
	double acceleration(int i) { return acceleration_[i]; }

	void powArchimedes(bool p) { powArchimedes_ = p; }
	void powLiquid(bool p) { powLiquid_ = p; }
	void powGas(bool p) { powGas_ = p; }

	void graph(char ch) { graph_ = ch; }
	char graph() { return graph_; }

	bool powArchimedes() { return powArchimedes_; }
	bool powLiquid() { return powLiquid_ ; }
	bool powGas() { return powGas_; }

	double linearResistance(double v) { return -linearCoeff_ * v / mass_; }
	double squareResistance(double v) { return -squareCoeff_ * v *  abs(v) / mass_; }
	double gravityAcceleration(double h) { return g / pow(1 + h / R, 2.0); }
	double buoyantForce() { return buoyantCoeff_ *  g; }
	double calcAcceleration(double x, double y, double v);
	void Euler_Cromer(int n, double x0, double x1, double y0);
};

extern Model myModel;
extern std::vector<Model> models;