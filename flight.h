#ifndef _FLIGHT_H_
#define _FLIGHT_H_
#include "ex2.h"
#include <string.h>

typedef struct flight_t *Pflight;

// the function creates a new struct of flight and assigns it with data
Pflight createFlight(int flight_num, FlightType Ftype, char dest[3], BOOL emergency);

//the function frees the dinamic allocated memory of the flight
BOOL destroyFlight(Pflight flight);

// the function prints the flight information
void printFlight(Pflight flight);

#endif // !_FLIGHT_H_
