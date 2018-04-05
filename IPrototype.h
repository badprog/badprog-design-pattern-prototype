#ifndef __BADPROG_IPROTOTYPE_H__
#define __BADPROG_IPROTOTYPE_H__

// Badprog.com

#include <memory>

//-----------------------------------------------------------------------------
// IPrototype.
//-----------------------------------------------------------------------------
class IPrototype
{
public:
	virtual ~IPrototype() {}
	virtual std::unique_ptr<IPrototype> clone() = 0;
	virtual const double getWidth() const 			= 0;
	virtual const double getHeight() const 			= 0;
	virtual const double getSpeed() const 			= 0;
	virtual void setWidth(const double &w)			= 0;
	virtual void setHeight(const double &h)			= 0;
	virtual void setSpeed(const double &s)			= 0;

protected:
		double _width;
		double _height;
		double _speed;
};

#endif // __BADPROG_IPROTOTYPE_H__