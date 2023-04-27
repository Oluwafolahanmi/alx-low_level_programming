
#include "main.h"

/**
 * check_elf - function that checks for elf file
 * @_elf: function parameter
 * Description: If the file is not an ELF file - exit code 98.
 */
void check_elf(unsigned char *_elf)
{
	int num;

	for (num = 0; num < 4; num++)
	{
		if (_elf[num] != 127 &&
				_elf[num] != 'E' &&
				_elf[num] != 'L' &&
				_elf[num] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

