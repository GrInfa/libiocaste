/*
 * main.c
 *
 *  Created on: 25/11/2011
 *      Author: fprates
 */

#include "iocaste.h"
#include <stdlib.h>

struct icst_api *icst_ini(void)
{
	struct icst_api *api = malloc(sizeof(*api));

	api->ini_container = icst_ini_container;
	api->ini_element = icst_ini_element;
	api->ini_text = icst_ini_text;
	api->ini_text_field = icst_ini_text_field;
	api->ini_program = icst_ini_program;
	api->ini_view = icst_ini_view;
	api->super = icst_super;
	api->view_add = icst_view_add;
	api->ini_std_container = icst_ini_std_container;
	api->get_container_iterator = icst_get_container_iterator;
	api->get_view_title = icst_get_view_title;
	api->set_view_title = icst_set_view_title;

	return api;
}
