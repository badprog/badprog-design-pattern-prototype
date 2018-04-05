// Badprog.com

#include <memory>
#include "PShipNormal.h"

//-----------------------------------------------------------------------------
// Constructor by default.
//-----------------------------------------------------------------------------
PShipNormal::PShipNormal() {
  setWidth(200);
  setHeight(400);
  setSpeed(250);
}

//-----------------------------------------------------------------------------
// Destructor.
//-----------------------------------------------------------------------------
PShipNormal::~PShipNormal() {
}

//-----------------------------------------------------------------------------
// Clone.
//-----------------------------------------------------------------------------
std::unique_ptr<IPrototype> PShipNormal::clone() {
  return std::make_unique<PShipNormal> (*this);
}

//-----------------------------------------------------------------------------
// getWidth.
//-----------------------------------------------------------------------------
const double PShipNormal::getWidth() const {
  return this->_width;
}

//-----------------------------------------------------------------------------
// getHeight.
//-----------------------------------------------------------------------------
const double PShipNormal::getHeight() const {
  return this->_height;
}

//-----------------------------------------------------------------------------
// getSpeed.
//-----------------------------------------------------------------------------
const double PShipNormal::getSpeed() const {
  return this->_speed;
}

//-----------------------------------------------------------------------------
// setWidth.
//-----------------------------------------------------------------------------
void PShipNormal::setWidth(const double &w) {
  this->_width = w;
}

//-----------------------------------------------------------------------------
// setHeight.
//-----------------------------------------------------------------------------
void PShipNormal::setHeight(const double &h) {
  this->_height = h;
}

//-----------------------------------------------------------------------------
// setSpeed.
//-----------------------------------------------------------------------------
void PShipNormal::setSpeed(const double &s) {
  this->_speed = s;
}
