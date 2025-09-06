#ifndef	CICE_STRINGUTIL
#define	CICE_STRINGUTIL

#include <cice_typedecl.h>

VOID 	STRINGUTIL_CopyIntoStringBuffer		(CHAR* destination, const CHAR* source);
VOID 	STRINGUTIL_AppendToStringBuffer		(CHAR* destination, const CHAR* source);
VOID 	STRINGUTIL_IsEqual			(BOOL* result, const CHAR* targetA, const CHAR* targetB);
VOID 	STRINGUTIL_CountCharacterOccurrences	(UINT32* result, const CHAR* target, const CHAR token);
VOID	STRINGUTIL_ContainsCharacter		(BOOL* result, const CHAR* target, const CHAR token);
VOID	STRINGUTIL_CountWordOccurrences		(UINT32* result, const CHAR* target, const CHAR* token);
VOID	STRINGUTIL_ContainsWord			(BOOL* result, const CHAR* target, const CHAR* token);
VOID	STRINGUTIL_StartsWithWord		(BOOL* result, const CHAR* target, const CHAR* token);
VOID	STRINGUTIL_EndsWithWord			(BOOL* result, const CHAR* target, const CHAR* token);
VOID	STRINGUTIL_ToLowerCase			(CHAR* buffer, const CHAR* target);
VOID	STRINGUTIL_ToUpperCase			(CHAR* buffer, const CHAR* target);
VOID	STRINGUTIL_GetLength			(UINT32* result, const CHAR* target);
VOID	STRINGUTIL_ReplaceFirst			(CHAR* buffer, const CHAR* target, const CHAR token);
VOID	STRINGUTIL_ReplaceAll			(CHAR* buffer, const CHAR* target, const CHAR token);
VOID	STRINGUTIL_Substring			(CHAR* buffer, const CHAR* target);
VOID	STRINGUTIL_FindFirstCharacter		(UINT32* result, const CHAR* target, const CHAR token);
VOID	STRINGUTIL_FindCharacter		(UINT32* result, const UINT32 start, const CHAR* target, const CHAR token);
VOID	STRINGUTIL_FindFirstWord		(UINT32* result, const CHAR* target, const CHAR* token);
VOID	STRINGUTIL_FindWord			(UINT32* result, const UINT32 start, const CHAR* target, const CHAR* token);

#endif
