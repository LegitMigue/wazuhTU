/* Copyright (C) 2015-2019, Wazuh Inc.
 * Copyright (C) 2009 Trend Micro Inc.
 * All right reserved.
 *
 * This program is free software; you can redistribute it
 * and/or modify it under the terms of the GNU General Public
 * License (version 2) as published by the FSF - Free Software
 * Foundation
*/

#ifndef __LISTSMAKE_H
#define __LISTSMAKE_H

void Lists_OP_MakeCDB(const char *txt_filename, const char *cdb_filename, int force);
void Lists_OP_MakeAll(int force);

#endif /* __LISTSMAKE_H */

