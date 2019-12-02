// list.c - implementation file

#include <List.h>

typedef struct list_t {
	// pointer to head of list
	p_element p_head;
	//pointer to data
	void *p_list_data
} list;

 typedef struct element_t {
	// pointer to next element
	p_element p_next_elem;
	// pointer to data
	void *p_elem_data;
} element;

