#include "pch.h"
#include "test.h"
#include "human.h"

TEST(Humantests, Constructor) {
	human men;
	EXPECT_EQ("Max Mustermann", men.get_name());
}

TEST(Humantests, linksshift_verkehrt) {
	human men;
	std::stringstream out;
	men << out;
	EXPECT_EQ("Alter: 18\n", out.str().substr(0,10));
}

TEST(Humantests, linksshift_richtig) {
	human men;
	std::stringstream out;
	out << men;
	EXPECT_EQ("Alter: 18\n", out.str().substr(0,10));
}