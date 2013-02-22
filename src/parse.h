#ifndef __PARSE_H__
#define __PARSE_H__

#include "sr/srtypes.h"

void init_metadata_parser(RIP_MANAGER_INFO * rmi, char *rules_file);
void parse_metadata(RIP_MANAGER_INFO * rmi, TRACK_INFO * ti);
void parser_free(RIP_MANAGER_INFO * rmi);

#endif				//__PARSE_H__
