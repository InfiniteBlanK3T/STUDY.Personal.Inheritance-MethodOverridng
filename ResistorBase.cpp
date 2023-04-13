#include "ResistorBase.h"

void ResistorBase::setBaseValue(double aBaseValue) noexcept
{
	fBaseValue = aBaseValue;
}

ResistorBase::ResistorBase(double aBaseValue) noexcept
{
	setBaseValue(aBaseValue);
}

double ResistorBase::getBaseValue() const noexcept
{
	return fBaseValue;
}

double ResistorBase::getPotentialAt(double aCurrent, double aFrequency) const noexcept
{
	return getReactance(aFrequency) * aCurrent;
}

double ResistorBase::getCurrentAt(double aVoltage, double aFrequency) const noexcept
{
	return aVoltage / getReactance(aFrequency);
}

std::istream& operator>> (std::istream& aIStream, ResistorBase& aObject)
{
	double aDouble;
	std::string aString;

	aIStream >> aDouble >> aString;

	aObject.convertUnitValueToBaseValue(aDouble, aString);

	return aIStream;
}

std::ostream& operator<< (std::ostream& aOStream,const ResistorBase& aObject)
{
	double aDouble;
	std::string aString;

	aObject.convertBaseValueToUnitValue(aDouble, aString);

	aOStream << aDouble << aString;

	return aOStream;
}