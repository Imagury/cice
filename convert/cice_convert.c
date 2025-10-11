// cice_convert.h
#include	<cice_typedecl.h>
#include	<cice_math.h>

VOID	CONVERT_StringToInt8	(INT8* buffer, CHAR* in)
{
	INT32	length	= 0;
	while	(in[length] != 0)
	{
		length++;
	}

	INT32	mul	= 0;

	for	(INT32 i = 0; i < length; i++)
	{
		if	((in[i] >= '0') && (in[i] <= '9'))
		{
			MATH_Power32	(&mul, 10, (length-i-1));
			*buffer	= *buffer + ((in[i] - '0') * mul);
		}
		else
		{
			*buffer	= *buffer / 10;
		}
	}
}

VOID	CONVERT_StringToInt16	(INT16* buffer, CHAR* in)
{
	INT32	length	= 0;
	while	(in[length] != 0)
	{
		length++;
	}

	INT32	mul	= 0;

	for	(INT32 i = 0; i < length; i++)
	{
		if	((in[i] >= '0') && (in[i] <= '9'))
		{
			MATH_Power32	(&mul, 10, (length-i-1));
			*buffer	= *buffer + ((in[i] - '0') * mul);
		}
		else
		{
			*buffer	= *buffer / 10;
		}
	}
}

VOID	CONVERT_StringToInt32	(INT32* buffer, CHAR* in)
{
	INT32	length	= 0;
	while	(in[length] != 0)
	{
		length++;
	}

	INT32	mul	= 0;

	for	(INT32 i = 0; i < length; i++)
	{
		if	((in[i] >= '0') && (in[i] <= '9'))
		{
			MATH_Power32	(&mul, 10, (length-i-1));
			*buffer	= *buffer + ((in[i] - '0') * mul);
		}
		else
		{
			*buffer	= *buffer / 10;
		}
	}	
}

VOID	CONVERT_StringToInt64	(INT64* buffer, CHAR* in)
{
	INT32	length	= 0;
	while	(in[length] != 0)
	{
		length++;
	}

	INT32	mul	= 0;

	for	(INT32 i = 0; i < length; i++)
	{
		if	((in[i] >= '0') && (in[i] <= '9'))
		{
			MATH_Power32	(&mul, 10, (length-i-1));
			*buffer	= *buffer + ((in[i] - '0') * mul);
		}
		else
		{
			*buffer	= *buffer / 10;
		}
	}
}

VOID	CONVERT_Int8ToString	(CHAR* buffer, INT8 in)
{
	UINT8	digits	= 0;

	if	(buffer	> MAXDIG_BYTE)
	{
		digits	= 3;
	}
}

VOID	CONVERT_Int16ToString	(CHAR* buffer, INT16 in)
{

}

VOID	CONVERT_Int32ToString	(CHAR* buffer, INT32 in)
{

}

VOID	CONVERT_Int64ToString	(CHAR* buffer, INT64 in)
{

}
