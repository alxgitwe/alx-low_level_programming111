#include <elf.h>
#include "main.h"

/**
 * _magic - print byts elf magic
 * @hdr : elf header
 */

void _magic(Elf64_Ehdr hdr)
{
	int a;

	printf("  Magic:   ");
	for (a = 0; a < EI_NIDENT; a++)
		printf("%2.2X%s", hdr.e_ident[a], a == EI_NIDENT - 1 ? "\n" : " ");
}

/**
 * _class - class
 * @hdr : elf header
 */

void _class(Elf64_Ehdr hdr)
{
	printf("  Class:                             ");
	switch (hdr.e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("NONE");
			break;
		case ELFCLASS32:
			printf("ELF32");
			break;
		case ELFCLASS64:
			printf("ELF32");
			break;
	}
	printf("\n");
}

/**
 * _data - print data elf
 * @hdr : elf header
 */

void _data(Elf64_Ehdr hdr)
{
	printf("  Data:                              ");
	switch (hdr.e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("NONE");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian");
			break;
	}
	printf("\n");
}

/**
 * _version - print version elf
 * @hdr : elf header
 */

void _version(Elf64_Ehdr hdr)
{
	printf("  Version:                           %d", hdr.e_ident[EI_VERSION]);
	switch (hdr.e_ident[EI_VERSION])
	{
		case EV_NONE:
			printf("%2s", "");
			break;
		case EV_CURRENT:
			printf(" (current)");
			break;
	}
	printf("\n");
}

/**
 * os_abi - function
 * @hdr : elf header
 */
void os_abi(Elf64_Ehdr hdr)
{
	printf("  Version:                           %d", hdr.e_ident[EI_VERSION]);
}

/**
 * abi_version - function
 * @hdr : elf header
 */
void abi_version(Elf64_Ehdr hdr)
{
	printf("  Version:                           %d", hdr.e_ident[EI_VERSION]);

}

/**
 * _type - function
 * @hdr : elf header
 */
void _type(Elf64_Ehdr hdr)
{
	printf("  Version:                           %d", hdr.e_ident[EI_VERSION]);
}

/**
 * _epaddress - function
 * @hdr : elf header
 */
void _epaddress(Elf64_Ehdr hdr)
{
	printf("  Version:                           %d", hdr.e_ident[EI_VERSION]);

}

/**
 * main - main
 * @ac : argument
 * @av : argument
 * Return : return
 */

int main(int ac, char **av)
{
	Elf64_Ehdr hdr;
	ssize_t a;
	int b;

	b =  open(av[1], O_RDONLY);

	if (!(b != -1))
		dprintf(STDERR_FILENO, "Can't open open the file : %s\n", av[1]), exit(98);
	a = read(b, &hdr, sizeof(hdr));
	if (!(ac == 2))
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);
	if (a != sizeof(hdr) || a < 1)
		dprintf(STDERR_FILENO, "Can't open open the file : %s\n", av[1]), exit(98);


	else
		dprintf(STDERR_FILENO, "Not An Elf File: %s\n", av[1]), exit(98);
	_magic(hdr);
	_class(hdr);
	_data(hdr);
	_version(hdr);
	os_abi(hdr);
	abi_version(hdr);
	_type(hdr);
	_epaddress(hdr);

	if (close(b))
		dprintf(STDERR_FILENO, "Error Close File: %d\n", b), exit(98);
	return (EXIT_SUCCESS);
}




