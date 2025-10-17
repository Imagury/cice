// cice_convert.h
#include	<cice_typedecl.h>
#include	<cice_math.h>

#define		ZEROS_BYTE	2
#define		ZEROS_SHORT	4
#define		ZEROS_INT	9
#define		ZEROS_LONG	18

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
	// Actually counts zeros not digits
	INT8	digitCounter	= 0;

	// Check if number is negative
	BOOL	isNegative	= false;

	if	(in < 0)
	{
		in	= in * -1;
		isNegative	= true;
	}

	/*

	if	(in >= 10)
	{
		digitCounter	++;
	}

	if	(in >= 100)
	{
		digitCounter	++;
	}

	*/

	INT8	comp	= 0;

	for	(INT8 i = 0; i < ZEROS_BYTE; i++)
	{
		MATH_Power8	(&comp, 10, i+1);
		if	(in >= comp)
		{
			digitCounter	++;
		}
		else
		{
			comp	= comp / 10;
			break;
		}
	}

	INT8	counter	= 0;
	FLOAT32	divBuf	= 0;
	INT32	intBuf	= 0;
	INT8	padding	= 1;

	if	(isNegative)
	{
		buffer[counter] = '-';
		counter	++;
		padding	++;
	}

	while	(counter != (digitCounter + padding))
	{
		// Convert
		divBuf	= in / comp;
		intBuf	= (INT32) divBuf;
	
		// Push
		buffer[counter]	= (intBuf + '0');
	
		// Subtract in
		in	= in - (intBuf * comp);
		comp	= comp / 10;
		counter	++;
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
