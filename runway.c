#include "runway.h"
// struct for a node in the list
typedef struct Node_flight_t {
	Pflight Pdata; // pointer for the node data (flight)
	PNode_flight Pnext_Node;
} flight_node;
typedef struct run_way_t {
	int runway_id;
	ftype_t flight_type;
	Pflight_node head;
}Run_way;
Prun_way createRunway(int id, ftype_t type)
{
	Prun_way new_runway;
	if (id < 1 || id > MAX_ID || (type != 0 && type != 1)
	{
		return null;
	}
	new_runway = (Prun_way)malloc(sizeof(run_way));
	if (new_runway != null)
	{
		new_runway->runway_id = id;
		new_runway->flight_type = type;
		new_runway->head = null;
	}
	return Prun_way;	
}
