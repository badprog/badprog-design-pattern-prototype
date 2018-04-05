#ifndef __BADPROG_PSHIPFACTORY_H__
#define __BADPROG_PSHIPFACTORY_H__

// Badprog.com

#include <memory>
#include "IPrototype.h"
#include <map>

//-----------------------------------------------------------------------------
// PShipFactory.
//-----------------------------------------------------------------------------
class PShipFactory
{
public:
	enum SHIP_TYPE { SHIP_TINY, SHIP_NORMAL, SHIP_ENORMOUS };

	PShipFactory();
	~PShipFactory();

	void prototypeInit(void);
	std::unique_ptr<IPrototype>retrieveShip(SHIP_TYPE type);

private:
		std::map<SHIP_TYPE, std::unique_ptr<IPrototype>> mapOfPrototypes;
};

#endif // __BADPROG_PSHIPFACTORY_H__
