/* It had generated by DirectStruct v1.4.3 */
#include "IDL_execute_program_response.dsc.h"

#ifndef FUNCNAME_DSCLOG_execute_program_response
#define FUNCNAME_DSCLOG_execute_program_response	DSCLOG_execute_program_response
#endif

#ifndef PREFIX_DSCLOG_execute_program_response
#define PREFIX_DSCLOG_execute_program_response	printf( 
#endif

#ifndef NEWLINE_DSCLOG_execute_program_response
#define NEWLINE_DSCLOG_execute_program_response	"\n"
#endif

int FUNCNAME_DSCLOG_execute_program_response( execute_program_response *pst )
{
	int	index[10] = { 0 } ; index[0] = 0 ;
	PREFIX_DSCLOG_execute_program_response "execute_program_response.tid[%s]" NEWLINE_DSCLOG_execute_program_response , pst->tid );
	PREFIX_DSCLOG_execute_program_response "execute_program_response.status[%d]" NEWLINE_DSCLOG_execute_program_response , pst->status );
	return 0;
}