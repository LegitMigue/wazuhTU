/* Copyright (C) 2015-2019, Wazuh Inc.
 * Copyright (C) 2009 Trend Micro Inc.
 * All right reserved.
 *
 * This program is free software; you can redistribute it
 * and/or modify it under the terms of the GNU General Public
 * License (version 2) as published by the FSF - Free Software
 * Foundation
 */

#ifndef _EXEC__H
#define _EXEC__H

#include "eventinfo.h"
#include "active-response.h"

void OS_Exec(int execq, int arq, const Eventinfo *lf, const active_response *ar);

#endif

