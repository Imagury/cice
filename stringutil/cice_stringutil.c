// cice_stringutil.h
#include <cice_typedecl.h>

VOID 	STRINGUTIL_CopyIntoStringBuffer(CHAR* destination, const CHAR* source)
{
	UINT32 index = 0;
	while(source[index] != 0)
	{
		destination[index] = source[index];
		index++;
	}
}

VOID 	STRINGUTIL_AppendToStringBuffer(CHAR* destination, const CHAR* source)
{
	UINT32 index = 0;
	while(source[index] != 0)
	{
		index++;
	}

	UINT32 start = 0;
	while(destination[start] != 0)
	{
		start++;
	}

	for(INT32 i = start; i < (index+start); i++)
	{
		destination[i] = source[i-start];
	}
}

VOID 	STRINGUTIL_IsEqual(BOOL* result, const CHAR* targetA, const CHAR* targetB)
{
	UINT32 index = 0;
	while(targetA[index] != 0)
	{
		if(targetA[index] != targetB[index])
		{
			*result = false;
			return;
		}
		index++;
	}

	index++;

	if(targetA[index] != targetB[index])
	{
		*result = false;
		return;
	}

	*result = true;
}

VOID 	STRINGUTIL_CountCharacterOccurrences(UINT32* result, const CHAR* target, const CHAR token)
{
	UINT32 index = 0;
	while(target[index] != 0)
	{
		if(target[index] == token)
		{
			*result = *result + 1;
		}

		index++;
	}
}

VOID	STRINGUTIL_ContainsCharacter(BOOL* result, const CHAR* target, const CHAR token)
{
	// The only difference to CountCharacterOccurrences is the return statement inside the while body for the sake of optimization.
	
	UINT32 index = 0;
	while(target[index] != 0)
	{
		if(target[index] == token)
		{
			*result = true;
			return;
		}

		index++;
	}

	*result = false;
}

VOID	STRINGUTIL_CountWordOccurrences(UINT32* result, const CHAR* target, const CHAR* token)
{
	// No way that worked :O

	UINT32 index = 0, wordIndex = 0;
	while(target[index] != 0)
	{
		if(target[index] == token[wordIndex])
		{
			wordIndex++;
			if(token[wordIndex] == 0)
			{
				*result = *result + 1;
				wordIndex = 0;
			}
		}
		else
			wordIndex = 0;

		index++;
	}
}

VOID	STRINGUTIL_ContainsWord(BOOL* result, const CHAR* target, const CHAR* token)
{
	UINT32 index = 0, wordIndex = 0;
	while(target[index] != 0)
	{
		if(target[index] == token[wordIndex])
		{
			wordIndex++;
			if(token[wordIndex] == 0)
			{
				*result = true;
				return;
			}
		}
		else
			wordIndex = 0;

		index++;
	}

	*result = false;
}

VOID	STRINGUTIL_StartsWithWord		(BOOL* result, const CHAR* target, const CHAR* token)
{
	UINT32 index = 0;
	while(token[index] != 0)
	{
		if(token[index] != target[index])
		{
			*result = false;
			return;
		}
		index++;
	}

	*result = true;
}

VOID	STRINGUTIL_EndsWithWord			(BOOL* result, const CHAR* target, const CHAR* token)
{
	UINT32 tokenLength = 0;
	while(token[tokenLength] != 0)
	{
		tokenLength++;
	}

	UINT32 targetLength = 0;
	while(target[targetLength] != 0)
	{
		targetLength++;
	}

	if(tokenLength > targetLength)
	{
		*result = false;
		return;
	}

	UINT32 index = targetLength - tokenLength;
	UINT32 base = index;
	while(target[index] != 0)
	{
		if(target[index] != token[index - base])
		{
			*result = false;
			return;
		}
		index++;
	}

	*result = true;
}

VOID	STRINGUTIL_ToLowerCase(CHAR* buffer, CHAR* target)
{
	// This took way too long
	UINT32 index = 0;
	CHAR c;
	while(target[index] != 0)
	{
		if((target[index] >= 'A') && (target[index] <= 'Z'))
		{
			buffer[index] = target[index] + 32;
		}
		else
		{
			buffer[index] = target[index];
		}
		index++;
	}
}
VOID	STRINGUTIL_ToUpperCase(CHAR* buffer, CHAR* target)
{
	UINT32 index = 0;
	CHAR c;
	while(target[index] != 0)
	{
		if((target[index] >= 'a') && (target[index] <= 'z'))
		{
			buffer[index] = target[index] - 32;
		}
		else
		{
			buffer[index] = target[index];
		}
		index++;
	}
}

VOID	STRINGUTIL_GetLength(UINT32* result, const CHAR* target)
{
	UINT32 index = 0;

	while(target[index] != 0)
	{
		index++;
	}

	*result = index;
}

VOID	STRINGUTIL_ReplaceFirst(CHAR* buffer, const CHAR* target, const CHAR token, const CHAR replacement)
{
	UINT32 index = 0;

	while(target[index] != 0)
	{
		if(target[index] == token)
		{
			buffer[index] = replacement;
			break;
		}
		else
		{
			buffer[index] = target[index];
		}
		index++;
	}

	while(target[index] != 0)
	{
		buffer[index] = target[index];
		index++;
	}
}

VOID	STRINGUTIL_ReplaceAll(CHAR* buffer, const CHAR* target, const CHAR token, const CHAR replacement)
{
	UINT32 index = 0;
	while(target[index] != 0)
	{
		if(target[index] == token)
		{
			buffer[index] = replacement;
		}
		else
		{
			buffer[index] = target[index];
		}
	}
}

VOID	STRINGUTIL_Substring(CHAR* buffer, const CHAR* target, UINT32 start, const UINT32 end)
{
	UINT32 index = 0;
	while(start <= end)
	{
		buffer[index] = target[start];
		start++;
		index++;
	}
}

VOID	STRINGUTIL_FindFirstCharacter(INT32* result, const CHAR* target, const CHAR token)
{
	UINT32 index = 0;

	while(target[index] != 0)
	{
		if(target[index] == token)
		{
			*result = index;
			return;
		}

		index++;
	}

	*result = -1;
}

VOID	STRINGUTIL_FindCharacter(INT32* result, UINT32 start, const CHAR* target, const CHAR token)
{	
	while(target[start] != 0)
	{
		if(target[start] == token)
		{
			*result = start;
			return;
		}

		start++;
	}

	*result = -1;
}

VOID	STRINGUTIL_FindFirstWord(INT32* result, const CHAR* target, const CHAR* token)
{	
	UINT32 index = 0, wordIndex = 0;
	while(target[index] != 0)
	{
		if(target[index] == token[wordIndex])
		{
			wordIndex++;
			if(token[wordIndex] == 0)
			{
				*result = index - wordIndex + 1;
				return;
			}
		}
		else
			wordIndex = 0;

		index++;
	}

	*result = -1;
}

VOID	STRINGUTIL_FindWord(INT32* result, UINT32 start, const CHAR* target, const CHAR* token)
{	
	UINT32 wordIndex = 0;
	while(target[start] != 0)
	{
		if(target[start] == token[wordIndex])
		{
			wordIndex++;
			if(token[wordIndex] == 0)
			{
				*result = start - wordIndex + 1;
				return;
			}
		}
		else
			wordIndex = 0;

		start++;
	}

	*result = -1;
}
