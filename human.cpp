#include "pch.h"
#include "human.h"
#include "pch.h"
#include "human.h"

human::human()
{
	this->alter = 18;
	gewicht = 78.8;
	hoehe = 172.8;
	name = "Max Mustermann";
}

double human::get_bmi() {
	if (alter >= 20) {
		return gewicht / (hoehe * 0.01 * hoehe * 0.01);
	}
	else {
		throw std::invalid_argument("alter unter 20");
	}
}

human human::essen(double gewicht_des_essens)
{
	gewicht += gewicht_des_essens;
	return *this;
}


void human::drucke(std::ostream& out) {
	out << to_string();
	out.flush();
}

std::string human::get_name() {
	return name;
}

std::string human::to_string() {
	std::string result;
	result += "Alter: " + std::to_string(alter) + "\n";
	result += "Gewicht: " + std::to_string(gewicht) + "\n";
	result += "Hoehe: " + std::to_string(hoehe) + "\n";
	result += "Name: " + name + "\n";
	return result;
}

std::ostream& human::operator<<(std::ostream& out) {
	out << to_string();
	return out;
}

std::ostream& operator<<(std::ostream& out, human& m) {
	m.drucke(out);
	return out;
}
