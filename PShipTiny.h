#ifndef __BADPROG_PSHIPTINY_H__
#define __BADPROG_PSHIPTINY_H__

// Badprog.com

#include <memory>
#include "IPrototype.h"

//-----------------------------------------------------------------------------
// PShipTiny.
//-----------------------------------------------------------------------------
class PShipTiny : public IPrototype
{
public: 
	PShipTiny();
	virtual ~PShipTiny();

	const double getWidth() const override;
	const double getHeight() const override;
	const double getSpeed() const override;
	void setWidth(const double &w) override;
	void setHeight(const double &h) override;
	void setSpeed(const double &s) override;
	std::unique_ptr<IPrototype> clone() override;

};

#endif // __BADPROG_PSHIPTINY_H__