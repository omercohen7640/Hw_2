#include "runway.h"
// struct for a node in the list
typedef struct Node_flight_t {
	Pflight Pdata; // pointer for the node data (flight)
	Pflight_node Pnext_Node;
} flight_node;
typedef struct run_way_t {
	int runway_id;
	FlightType flight_type;
	Pflight_node head;
}Run_way;
Prun_way createRunway(int id, FlightType type)
{
	Prun_way new_runway;
	if (id < 1 || id > MAX_ID || (type != 0 && type != 1))
	{
		return NULL;
	}
	new_runway = (Prun_way)malloc(sizeof(Run_way));
	if (new_runway != NULL)
	{
		new_runway->runway_id = id;
		new_runway->FlightType = type;
		new_runway->head = NULL;
	}
	return new_runway;	
}
