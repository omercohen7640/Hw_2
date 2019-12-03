#ifndef _RUNWAY_H_
#define _RUNWAY_H_
#include "ex2.h"
#include "flight.h"
typedef struct run_way* Prun_way;
typedef struct Node_flight_t* Pflight_node;
typedef enum { FALSE, TRUE } BOOL;
typedef enum { FAILURE, SUCCESS } ATTEMPT; //type for failure or succes
//constructor
Prun_way createRunway(int id, ftype_t type);
//distructor
BOOL destroyRunway(Prun_way p_runway);
//other
BOOL isFlightExists(Prun_way p_runway, int id); // checks if flight with id exists on a run way
int getFlightNum(Prun_way p_runway); //return the number of flights in a runway
int getEmergency(Prun_way p_runway); //return the number of emergency flights
ATTEMPT addFlight(Prun_way p_runway, Pflight p_flight); //add a flight to the run way
ATTEMPT removeFlight(Prun_way p_runway, int id); //delete a flight from the runway by id
ATTEMPT depart(Prun_way p_runway); // delete the first flight from the runway
void printRunway(Prun_way p_runway); //print the list of flights in the runway
#endif _RUNWAY_H_