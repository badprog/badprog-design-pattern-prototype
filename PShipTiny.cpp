// Badprog.com

#include <memory>
#include "PShipTiny.h"

//-----------------------------------------------------------------------------
// Constructor by default.
//-----------------------------------------------------------------------------
PShipTiny::PShipTiny() {
  setWidth(50);
  setHeight(100);
  setSpeed(500);
}

//-----------------------------------------------------------------------------
// Destructor.
//-----------------------------------------------------------------------------
PShipTiny::~PShipTiny() {
}

//-----------------------------------------------------------------------------
// Clone.
//-----------------------------------------------------------------------------
std::unique_ptr<IPrototype> PShipTiny::clone() {
  return std::make_unique<PShipTiny> (*this);
}

//-----------------------------------------------------------------------------
// getWidth.
//-----------------------------------------------------------------------------
const double PShipTiny::getWidth() const {
  return this->_width;
}

//-----------------------------------------------------------------------------
// getHeight.
//-----------------------------------------------------------------------------
const double PShipTiny::getHeight() const {
  return this->_height;
}

//-----------------------------------------------------------------------------
// getSpeed.
//-----------------------------------------------------------------------------
const double PShipTiny::getSpeed() const {
  return this->_speed;
}

//-----------------------------------------------------------------------------
// setWidth.
//-----------------------------------------------------------------------------
void PShipTiny::setWidth(const double &w) {
  this->_width = w;
}

//-----------------------------------------------------------------------------
// setHeight.
//-----------------------------------------------------------------------------
void PShipTiny::setHeight(const double &h) {
  this->_height = h;
}

//-----------------------------------------------------------------------------
// setSpeed.
//-----------------------------------------------------------------------------
void PShipTiny::setSpeed(const double &s) {
  this->_speed = s;
}