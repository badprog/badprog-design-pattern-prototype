#ifndef __BADPROG_PSHIPNORMAL_H__
#define __BADPROG_PSHIPNORMAL_H__

// Badprog.com

#include <memory>
#include "IPrototype.h"

//-----------------------------------------------------------------------------
// PShipNormal.
//-----------------------------------------------------------------------------
class PShipNormal : public IPrototype
{
public:
	PShipNormal();
	virtual ~PShipNormal();
	
	virtual const double getWidth() const override;
	virtual const double getHeight() const override;
	virtual const double getSpeed() const override;
	virtual void setWidth(const double &w) override;
	virtual void setHeight(const double &h) override;
	virtual void setSpeed(const double &s) override;
	std::unique_ptr<IPrototype> clone() override;

};

#endif // __BADPROG_PSHIPNORMAL_H__