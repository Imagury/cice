#ifndef	CICE_CONVERT
#define	CICE_CONVERT

#include	<cice_typedecl.h>

VOID	CONVERT_StringToInt8	(INT8* buffer, CHAR* in);
VOID	CONVERT_StringToInt16	(INT16* buffer, CHAR* in);
VOID	CONVERT_StringToInt32	(INT32* buffer, CHAR* in);
VOID	CONVERT_StringToInt64	(INT64* buffer, CHAR* in);

VOID	CONVERT_Int8ToString	(CHAR* buffer, INT8 in);
VOID	CONVERT_Int16ToString	(CHAR* buffer, INT16 in);
VOID	CONVERT_Int32ToString	(CHAR* buffer, INT32 in);
VOID	CONVERT_Int64ToString	(CHAR* buffer, INT64 in);

#endif
