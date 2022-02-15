#include "PCB.h"

// TODO: Add your implementation here
//destructor
PCB::~PCB()
{

}

// constructor
PCB::PCB()
{
    id = 0;
    intPriority = 0;
    state = NEW;
}

PCB::PCB(int newId, int newIntPriority, ProcState newState)
{
    id = newId;
    intPriority = newIntPriority;
    state = newState;
}

void PCB::setID(int newId)
{
    id = newId;
}

void PCB::setIntPriority(int newIntPriority)
{
    intPriority = newIntPriority;
}

void PCB::setState(ProcState newState)
{
    state = newState;
}

int PCB::getID()
{
    return id;
}

int PCB::getIntPriority()
{
    return intPriority;
}

ProcState PCB::getState()
{
    return state;
}
