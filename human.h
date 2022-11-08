#pragma once
class human
{
public:
	human();
	double get_bmi();
	human essen(double gewicht_des_essens);
	void drucke(std::ostream& out);
	std::string get_name();
	std::ostream& operator<<(std::ostream& out);
private:
	int alter;
	double gewicht;
	double hoehe;
	std::string name;
	std::string to_string();
};

	std::ostream& operator<<(std::ostream& out, human& m);
