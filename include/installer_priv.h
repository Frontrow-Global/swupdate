/*
 * (C) Copyright 2020
 * Stefano Babic, DENX Software Engineering, sbabic@denx.de.
 *
 * SPDX-License-Identifier:     GPL-2.0-or-later
 */

#ifndef _INSTALLER_PRIV_H
#define _INSTALLER_PRIV_H

#include "swupdate_status.h"

struct installer {
	int	fd;			/* install image file handle */
	RECOVERY_STATUS	status;		/* "idle" or "request source" info */
	RECOVERY_STATUS	last_install;	/* result from last installation */
	int	last_error;		/* error code if installation failed */
	char	errormsg[64];		/* error message if installation failed */
	sourcetype source; 		/* Who triggered the update */
	int	dry_run;		/* set it if no changes in hardware must be done */
	unsigned int len;    		/* Len of data valid in info, data is optional */
	char	info[2048];   		/* info */
};

#endif
