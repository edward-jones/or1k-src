/* gdbserv-log.h

   Copyright 2001, 2002 Red Hat, Inc.

   This file is part of RDA, the Red Hat Debug Agent (and library).

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.
   
   Alternative licenses for RDA may be arranged by contacting Red Hat,
   Inc.  */

#if defined __cplusplus
extern "C" {
#elif 0
}
#endif

struct gdbserv;
struct gdblog;

/* If non-NULL, used to write tracing from the corresponding
   comonent. */

extern struct gdblog *gdbserv_state_log;
extern struct gdblog *gdbserv_input_log;
extern struct gdblog *gdbserv_output_log;

/* Stream for the output of warnings. */

extern struct gdblog *gdbserv_warning_log;

#ifdef __cplusplus
}
#endif
