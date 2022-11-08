#pragma once
struct Mensch
{
	Mensch();
	double get_bmi();
	Mensch essen(double gewicht_des_essens);
	void drucke(std::ostream& out);
	int alter;
	double gewicht;
	double hoehe;
	std::string name;
	std::string to_string();
};

