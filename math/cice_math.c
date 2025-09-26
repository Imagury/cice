// cice_math.h
#include	<cice_typedecl.h>

VOID	MATH_Power8	(INT8* result, INT8 base, INT8 exponent)
{
	*result	= 1;

	for	(INT8 i = 0; i < exponent; i++)
	{
		*result	= *result * base;
	}
}

VOID	MATH_Power16	(INT16* result, INT16 base, INT16 exponent)
{
	*result	= 1;

	for	(INT16 i = 0; i < exponent; i++)
	{
		*result	= *result * base;
	}
	
}

VOID	MATH_Power32	(INT32* result, INT32 base, INT32 exponent)
{
	*result	= 1;

	for	(INT32 i = 0; i < exponent; i++)
	{
		*result	= *result * base;
	}
	
}

VOID	MATH_Power64	(INT64* result, INT64 base, INT64 exponent)
{
	*result	= 1;

	for	(INT64 i = 0; i < exponent; i++)
	{
		*result	= *result * base;
	}

}

VOID	MATH_PowerF32	(FLOAT32* result, FLOAT32 base, INT32 exponent)
{
	*result	= 1;

	for	(INT32 i = 0; i < exponent; i++)
	{
		*result	= *result * base;
	}
}

VOID	MATH_PowerD64	(DOUBLE64* result, DOUBLE64 base, INT64 exponent)
{
	*result	= 1;

	for	(INT64 i = 0; i < exponent; i++)
	{
		*result	= *result * base;
	}
}

VOID	MATH_PowerD128	(DOUBLE128* result, DOUBLE128 base, INT64 exponent)
{
	*result	= 1;

	for	(INT64 i = 0; i < exponent; i++)
	{
		*result	= *result * base;
	}
}
