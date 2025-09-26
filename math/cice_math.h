#ifndef	CICE_MATH
#define	CICE_MATH

#include	<cice_typedecl.h>

VOID	Power8	(INT8* result, INT8 base, INT8 exponent);
VOID	Power16	(INT16* result, INT16 base, INT16 exponent);
VOID	Power32	(INT32* result, INT32 base, INT32 exponent);
VOID	Power64	(INT64* result, INT64 base, INT64 exponent);
VOID	PowerF32(FLOAT32* result, FLOAT32 base, INT32 exponent);
VOID	PowerD64(DOUBLE64* result, DOUBLE64 base, INT64 exponent);
VOID	PowerD128(DOUBLE128* result, DOUBLE128 base, INT64 exponent);

#endif
