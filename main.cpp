// Badprog.com

#include <iostream>

#include "PShipTiny.h"
#include "PShipNormal.h"
#include "PShipEnormous.h"
#include "PShipFactory.h"

//-----------------------------------------------------------------------------
// Main.
//-----------------------------------------------------------------------------
int main()
{
    PShipFactory factory;

    auto ship1 = factory.retrieveShip(PShipFactory::SHIP_TINY);
    auto ship2 = factory.retrieveShip(PShipFactory::SHIP_NORMAL);
    auto ship3 = factory.retrieveShip(PShipFactory::SHIP_ENORMOUS);
    auto ship4 = factory.retrieveShip(PShipFactory::SHIP_ENORMOUS);
    auto ship5 = factory.retrieveShip(PShipFactory::SHIP_ENORMOUS);
    auto ship6 = factory.retrieveShip(PShipFactory::SHIP_ENORMOUS);

    std::cout << "Address 1 = " << &ship1               << std::endl;
    std::cout << "Width = "     << ship1->getWidth()    << std::endl;
    std::cout << "Height = "    << ship1->getHeight()   << std::endl;
    std::cout << "Speed = "     << ship1->getSpeed()    << std::endl;
    
    std::cout << "Address 2 = " << &ship2               << std::endl;
    std::cout << "Width = "     << ship2->getWidth()    << std::endl;
    std::cout << "Height = "    << ship2->getHeight()   << std::endl;
    std::cout << "Speed = "     << ship2->getSpeed()    << std::endl;
    
    std::cout << "Address 3 = " << &ship3               << std::endl;
    std::cout << "Width = "     << ship3->getWidth()    << std::endl;
    std::cout << "Height = "    << ship3->getHeight()   << std::endl;
    std::cout << "Speed = "     << ship3->getSpeed()    << std::endl;
    
    std::cout << "Address 4 = " << &ship4               << std::endl;
    std::cout << "Width = "     << ship4->getWidth()    << std::endl;
    std::cout << "Height = "    << ship4->getHeight()   << std::endl;
    std::cout << "Speed = "     << ship4->getSpeed()    << std::endl;
    
    std::cout << "Address 5 = " << &ship5               << std::endl;
    std::cout << "Width = "     << ship5->getWidth()    << std::endl;
    std::cout << "Height = "    << ship5->getHeight()   << std::endl;
    std::cout << "Speed = "     << ship5->getSpeed()    << std::endl;
    
    std::cout << "Address 6 = " << &ship6               << std::endl;
    std::cout << "Width = "     << ship6->getWidth()    << std::endl;
    std::cout << "Height = "    << ship6->getHeight()   << std::endl;
    std::cout << "Speed = "     << ship6->getSpeed()    << std::endl;

    return 0;
}

