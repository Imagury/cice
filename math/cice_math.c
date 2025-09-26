// cice_math.h
#include	<cice_typedecl.h>

VOID	Power8	(INT8* result, INT8 base, INT8 exponent)
{
	*result	= 1;

	for	(INT8 i = 0; i < exponent; i++)
	{
		*result	= *result * base;
	}
}

VOID	Power16	(INT16* result, INT16 base, INT16 exponent)
{
	*result	= 1;

	for	(INT16 i = 0; i < exponent; i++)
	{
		*result	= *result * base;
	}
	
}

VOID	Power32	(INT32* result, INT32 base, INT32 exponent)
{
	*result	= 1;

	for	(INT32 i = 0; i < exponent; i++)
	{
		*result	= *result * base;
	}
	
}

VOID	Power64	(INT64* result, INT64 base, INT64 exponent)
{
	*result	= 1;

	for	(INT64 i = 0; i < exponent; i++)
	{
		*result	= *result * base;
	}

}

VOID	PowerF32(FLOAT32* result, FLOAT32 base, INT32 exponent)
{
	*result	= 1;

	for	(INT32 i = 0; i < exponent; i++)
	{
		*result	= *result * base;
	}
}

VOID	PowerD64(DOUBLE64* result, DOUBLE64 base, INT64 exponent)
{
	*result	= 1;

	for	(INT64 i = 0; i < exponent; i++)
	{
		*result	= *result * base;
	}
}

VOID	PowerD128(DOUBLE128* result, DOUBLE128 base, INT64 exponent)
{
	*result	= 1;

	for	(INT64 i = 0; i < exponent; i++)
	{
		*result	= *result * base;
	}
}
