/* It had generated by DirectStruct v1.4.5 */
#include "IDL_execute_program_request.dsc.h"

#ifndef FUNCNAME_DSCLOG_execute_program_request
#define FUNCNAME_DSCLOG_execute_program_request	DSCLOG_execute_program_request
#endif

#ifndef PREFIX_DSCLOG_execute_program_request
#define PREFIX_DSCLOG_execute_program_request	printf( 
#endif

#ifndef NEWLINE_DSCLOG_execute_program_request
#define NEWLINE_DSCLOG_execute_program_request	"\n"
#endif

int FUNCNAME_DSCLOG_execute_program_request( execute_program_request *pst )
{
	int	index[10] = { 0 } ; index[0] = 0 ;
	PREFIX_DSCLOG_execute_program_request "execute_program_request.ip[%s]" NEWLINE_DSCLOG_execute_program_request , pst->ip );
	PREFIX_DSCLOG_execute_program_request "execute_program_request.port[%d]" NEWLINE_DSCLOG_execute_program_request , pst->port );
	PREFIX_DSCLOG_execute_program_request "execute_program_request.tid[%s]" NEWLINE_DSCLOG_execute_program_request , pst->tid );
	PREFIX_DSCLOG_execute_program_request "execute_program_request.order_index[%d]" NEWLINE_DSCLOG_execute_program_request , pst->order_index );
	PREFIX_DSCLOG_execute_program_request "execute_program_request.program_and_params[%s]" NEWLINE_DSCLOG_execute_program_request , pst->program_and_params );
	PREFIX_DSCLOG_execute_program_request "execute_program_request.program_md5_exp[%s]" NEWLINE_DSCLOG_execute_program_request , pst->program_md5_exp );
	PREFIX_DSCLOG_execute_program_request "execute_program_request.timeout[%d]" NEWLINE_DSCLOG_execute_program_request , pst->timeout );
	PREFIX_DSCLOG_execute_program_request "execute_program_request.begin_datetime_stamp[%d]" NEWLINE_DSCLOG_execute_program_request , pst->begin_datetime_stamp );
	PREFIX_DSCLOG_execute_program_request "execute_program_request.bind_cpu_flag[%d]" NEWLINE_DSCLOG_execute_program_request , pst->bind_cpu_flag );
	return 0;
}
