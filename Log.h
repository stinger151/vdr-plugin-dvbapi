/*
 *  vdr-plugin-dvbapi - softcam dvbapi plugin for VDR
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef ___LOG_H
#define ___LOG_H

//global loglevel variable
extern int LogLevel;

#define ERRORLOG(a...) void( (LogLevel >= 1) ? syslog_with_tid(LOG_ERR, "DVBAPI-Error: "a) : void() )
#define INFOLOG(a...)  void( (LogLevel >= 2) ? syslog_with_tid(LOG_ERR, "DVBAPI: "a) : void() )
#define DEBUGLOG(a...) void( (LogLevel >= 3) ? syslog_with_tid(LOG_ERR, "DVBAPI: "a) : void() )

#endif // ___LOG_H
