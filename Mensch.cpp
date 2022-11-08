#include "pch.h"
#include "Mensch.h"

Mensch::Mensch()
{
	this->alter = 18;
	gewicht = 78.8;
	hoehe = 172.8;
	name = "Max Mustermann";
}

double Mensch::get_bmi() {
	if (alter >= 20){
		return gewicht / (hoehe * 0.01 * hoehe * 0.01);
	}
	else {
		throw std::invalid_argument("alter unter 20");
	}
}

Mensch Mensch::essen(double gewicht_des_essens)
{
	gewicht += gewicht_des_essens;
	return *this;
}

std::string Mensch::to_string() {
	std::string result;
	result += "Alter: " + std::to_string(alter) + "\n";
	result += "Gewicht: " + std::to_string(gewicht) + "\n";
	result += "Hoehe: " + std::to_string(hoehe) + "\n";
	result += "Name: " + name + "\n";
	return result;
}

void Mensch::drucke(std::ostream& out) {
	out << to_string();
	out.flush();
}
