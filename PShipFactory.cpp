// Badprog.com

#include "PShipTiny.h"
#include "PShipNormal.h"
#include "PShipEnormous.h"
#include "PShipFactory.h"

//-----------------------------------------------------------------------------
// Constructor.
//-----------------------------------------------------------------------------
PShipFactory::PShipFactory() {
  prototypeInit();
}

//-----------------------------------------------------------------------------
// Destructor.
//-----------------------------------------------------------------------------
PShipFactory::~PShipFactory()  {
}

//-----------------------------------------------------------------------------
// Initialization of every prototype.
//-----------------------------------------------------------------------------
void PShipFactory::prototypeInit(void) {
  mapOfPrototypes[SHIP_TINY]      = std::make_unique<PShipTiny>();
  mapOfPrototypes[SHIP_NORMAL]    = std::make_unique<PShipNormal>();
  mapOfPrototypes[SHIP_ENORMOUS]  = std::make_unique<PShipEnormous>();
}

//-----------------------------------------------------------------------------
// retrieveShip.
//-----------------------------------------------------------------------------
std::unique_ptr<IPrototype> PShipFactory::retrieveShip(SHIP_TYPE shipType) {
  return mapOfPrototypes[shipType]->clone();
}
