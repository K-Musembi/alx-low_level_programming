#include "main.h"

/**
* main - Entry point
* @argc: input
* @argv: input
*
* Return: Always 0
*/
int main(int argc, char **argv)
{
	const char *name = argv[1];
	int fd;
	ssize_t count;
	Elf64_Ehdr elf_header;

	if (argc != 2)
		exit(97);

	fd = open(name, O_RDONLY);
	if (fd == -1)
		exit(98);
	count = read(fd, &elf_header, sizeof(Elf64_Ehdr));
	if (count < 0)
		exit(99);

	if (memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0)
		exit(101);

	print_elf(&elf_header);
	if (close(fd) == -1)
		exit(102);
	return (0);
}

/**
* print_elf - print elf header
* @Elf64_Ehdr: input
* @elf_header: input
*
* Return: 1 on success
*/
void print_elf(const Elf64_Ehdr *elf_header)
{
	int i;

	printf("Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", elf_header->e_ident[i]);
	printf("\nClass: %s\n", elf_header->e_ident[EI_CLASS] == ELFCLASS32 ?
			"ELF32" : "ELF64");
	printf("Data: %s\n", elf_header->e_ident[EI_DATA] == ELFDATA2LSB ?
			"2's complement, little-endian" : "2's complement, big-endian");
	printf("Version: %d\n", elf_header->e_ident[EI_VERSION]);
	printf("OS/ABI: ");
	if (elf_header->e_ident[EI_OSABI])
	{
		if (ELFOSABI_SYSV)
			printf("UNIX - System V\n");
		else if (ELFOSABI_HPUX)
			printf("HP-UX\n");
		else if (ELFOSABI_NETBSD)
			printf("NetBSD\n");
		else if (ELFOSABI_LINUX)
			printf("Linux\n");
		else if (ELFOSABI_SOLARIS)
			printf("Sun Solaris\n");
		else if (ELFOSABI_AIX)
			printf("IBM AIX\n");
		else if (ELFOSABI_IRIX)
			printf("SGI Irix\n");
		else if (ELFOSABI_FREEBSD)
			printf("FreeBSD\n");
		else if (ELFOSABI_TRU64)
			printf("Compaq TRU64 UNIX\n");
		else if (ELFOSABI_MODESTO)
			printf("Novell Modesto\n");
		else if (ELFOSABI_OPENBSD)
			printf("OpenBSD\n");
	}
		printf("ABI Version: %d\n", elf_header->e_ident[EI_ABIVERSION]);
		printf("Type: %d\n", elf_header->e_type);
		printf("Entry point address: %lx\n", elf_header->e_entry);
}
