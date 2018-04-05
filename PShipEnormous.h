#ifndef __BADPROG_PSHIPENORNOUS_H__
#define __BADPROG_PSHIPENORNOUS_H__

// Badprog.com

#include <memory>
#include "IPrototype.h"

//-----------------------------------------------------------------------------
// PShipEnormous.
//-----------------------------------------------------------------------------
class PShipEnormous : public IPrototype
{
public:
	PShipEnormous();
	virtual ~PShipEnormous();

	virtual const double getWidth() const override;
	virtual const double getHeight() const override;
	virtual const double getSpeed() const override;
	virtual void setWidth(const double &w) override;
	virtual void setHeight(const double &h) override;
	virtual void setSpeed(const double &s) override;
	std::unique_ptr<IPrototype> clone() override;

};

#endif // __BADPROG_PSHIPENORNOUS_H__