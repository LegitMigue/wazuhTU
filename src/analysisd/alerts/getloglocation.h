/* Copyright (C) 2015-2019, Wazuh Inc.
 * Copyright (C) 2009 Trend Micro Inc.
 * All right reserved.
 *
 * This program is free software; you can redistribute it
 * and/or modify it under the terms of the GNU General Public
 * License (version 2) as published by the FSF - Free Software
 * Foundation
 */

#ifndef __GETLL_H
#define __GETLL_H

#include "eventinfo.h"
#include "analysisd.h"

/* Start the log location (need to be called before getlog) */
void OS_InitLog(void);
void OS_InitFwLog(void);

/* Get the log file based on the date/logtype
 * Returns 0 on success or -1 on error
 */
int OS_GetLogLocation(int day,int year,char *mon);

/* Global declarations */
extern FILE *_eflog;
extern FILE *_ejflog;
extern FILE *_aflog;
extern FILE *_fflog;
extern FILE *_jflog;
extern FILE *_ejflog;

void OS_RotateLogs(int day,int year,char *mon);

#endif /* __GETLL_H */
