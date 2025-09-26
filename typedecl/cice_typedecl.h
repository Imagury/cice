#ifndef CICE_TYPEDECL
#define CICE_TYPEDECL

#ifndef INCLUDE_STDBOOL
	#define INCLUDE_STDBOOL
	#include <stdbool.h>
#endif

typedef bool BOOL;
typedef bool BIT;

typedef signed char INT8;
typedef signed char BYTE;
typedef signed char CHAR;
typedef unsigned char UINT8;
typedef unsigned char UBYTE;
typedef unsigned char UCHAR;

typedef signed short int INT16;
typedef signed short int WORD;
typedef unsigned short int UINT16;
typedef unsigned short int UWORD;

typedef signed int INT32;
typedef signed int DWORD;
typedef unsigned int UINT32;
typedef unsigned int UDWORD;

typedef signed long int INT64;
typedef signed long int QWORD;
typedef unsigned long int UINT64;
typedef unsigned long int UQWORD;

typedef float FLOAT32;
typedef float FLOAT;

typedef double DOUBLE64;
typedef	double DOUBLE;

typedef long double DOUBLE128;

typedef void VOID;

#endif
