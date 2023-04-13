#include "Inductor.h"
#include <cmath>

bool Inductor::mustScale(double aValue) const noexcept
{
	return aValue < 1.0;
}

const double Inductor::getMultiplier() const noexcept
{
	return 1000.0;
}

const std::string Inductor::getMajorUnit() const noexcept
{
	return "H";
}

const std::string Inductor::getMinorUnits() const noexcept
{
	return "Hmunp";
}

Inductor::Inductor(double aBaseValue) noexcept :
	ResistorBase(aBaseValue)
{}

double Inductor::getReactance(double aFrequency) const noexcept
{
	double PI = 4.0 * atan(1.0);
	return 2 * PI * aFrequency * getBaseValue();
}