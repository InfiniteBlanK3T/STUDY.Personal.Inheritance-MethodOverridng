
#include <cmath>
#include "Capacitor.h"


double PI = 4.0 * atan(1.0);

bool Capacitor::mustScale(double aValue) const noexcept
{
	return aValue < 1.0;
}

const double Capacitor::getMultiplier() const noexcept
{
	return 1000.0;
}

const std::string Capacitor::getMajorUnit() const noexcept
{
	return "F";
}

const std::string Capacitor::getMinorUnits() const noexcept
{
	return "Fmunp";
}

Capacitor::Capacitor(double aBaseValue) noexcept:
	ResistorBase(aBaseValue)
{}

double Capacitor::getReactance(double aFrequency) const noexcept
{
	return 1 / (2 * PI * aFrequency * getBaseValue());
}
