/* Copyright (C) 2015-2019, Wazuh Inc.
 * Copyright (C) 2014 Trend Micro Inc.
 * All rights reserved.
 *
 * This program is free software; you can redistribute it
 * and/or modify it under the terms of the GNU General Public
 * License (version 2) as published by the FSF - Free Software
 * Foundation
 */

#ifndef OS_XML_INTERNAL_H_
#define OS_XML_INTERNAL_H_

#define _R_CONFS    '<'
#define _R_CONFE    '>'
#define _R_COM      '!'

#define LEOF        -2

#define XML_MAXSIZE           20480
#define XML_VARIABLE_MAXSIZE  256

#define XML_VAR              "var"
#define XML_VAR_ATTRIBUTE    "name"

//#define XML_ELEM                101
//#define XML_ATTR                102
//#define XML_VARIABLE_BEGIN      '$'

#endif /* OS_XML_INTERNAL_H_ */
