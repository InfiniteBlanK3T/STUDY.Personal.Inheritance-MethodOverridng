#include "PassiveResistor.h"

bool PassiveResistor::mustScale(double aValue) const noexcept
{
	return aValue >= 1000.0;
}

const double PassiveResistor::getMultiplier() const noexcept
{
	return 1000.0;
}

const std::string PassiveResistor::getMajorUnit() const noexcept
{
	return "Ohm";
}

const std::string PassiveResistor::getMinorUnits() const noexcept
{
	return "OkM";
}

PassiveResistor::PassiveResistor( double aBaseValue ) noexcept
{
	aBaseValue = 0.0;
}

double PassiveResistor::getReactance(double aFrequency) const noexcept
{
	return aFrequency;
}