/*
===========================================================================
Logon to main server to own user account
===========================================================================
*/

#include "qcommon/qcommon.h"

static char			*fs_logon_temp_checksum;

/*
================
LOGON_StartUp
================
*/
void LOGON_StartUp( ) {
	Com_Printf( "----- FS_Logon -----\n" );

	fs_logon_temp_checksum = "test";

	if(fs_logon_temp_checksum == NULL)
	{
		Com_Printf( "Your logon checksum is %s\n", fs_logon_temp_checksum );
		Com_Error( ERR_FATAL, "No logon. Please run game luncher." );
	}
}
