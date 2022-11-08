#include "pch.h"
#include "Mensch.h"
#include "test.h"

TEST(TestCaseName, Constructor) {
	Mensch men{};
	EXPECT_EQ(men.alter, 18);
	EXPECT_EQ(men.gewicht, 78.8);
	EXPECT_EQ(men.hoehe, 172.8);
	EXPECT_EQ(men.name, "Max Mustermann");
	EXPECT_THROW(men.get_bmi(), std::invalid_argument);
	//EXPECT_NEAR(men.get_bmi(), 26.4, 0.1);
}

TEST(TestCaseName, essen_ausfuehrlich) {
	Mensch men{};
	double alte_gewicht = men.gewicht;
	double essen_gewicht = 0.3;
	men.essen(essen_gewicht);
	double neue_gewicht = men.gewicht;
	double erwartete_gewicht = alte_gewicht + essen_gewicht;
	EXPECT_EQ(neue_gewicht, erwartete_gewicht);
}

TEST(TestCaseName, essen_normal) {
	Mensch men{};
	men.essen(0.3);
	EXPECT_EQ(men.gewicht, 79.1);
}

TEST(TestCaseName, essen_method_chaining) {
	Mensch men;
	EXPECT_EQ(men.essen(0.3).essen(0.2).gewicht, 79.3);
}

TEST(TestCaseName, drucke) {
	Mensch men;
	std::stringstream out;
	men.drucke(out);
	EXPECT_EQ("Alter: 18\n", out.str().substr(0,10));
	EXPECT_EQ("A", out.str().substr(0,1));
	EXPECT_EQ("\n", out.str().substr(9,1));
	std::cout << out.str();
}