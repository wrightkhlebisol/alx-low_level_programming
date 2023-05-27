#include "main.h"

/**
 * print_error - Print error
 * @message: Message to print
 *
 * Return: int
 */
void print_error(const char *message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
}

/**
 * print_elf_header_info - Print elf header info
 * @elf_header: elf header file
 */
void print_elf_header_info(const Elf64_Ehdr *elf_header)
{
	int i = 0;

	printf("Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", elf_header->e_ident[i]);

	printf("\n");

	printf("Class: ");
	switch (elf_header->e_ident[EI_CLASS])
	{
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("Invalid\n");
			break;
	}

	printf("Data: ");
	switch (elf_header->e_ident[EI_DATA])
	{
		case ELFDATA2LSB:
			printf("2's complement, little-endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big-endian\n");
			break;
		default:
			printf("Invalid\n");
			break;
	}

	printf("Version: %d\n", elf_header->e_ident[EI_VERSION]);

	printf("OS/ABI: ");
	switch (elf_header->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX System V ABI\n");
			break;
		case ELFOSABI_LINUX:
			printf("Linux ABI\n");
			break;
		default:
			printf("Other\n");
			break;
	}

	printf("ABI Version: %d\n", elf_header->e_ident[EI_ABIVERSION]);

	printf("Type: ");
	switch (elf_header->e_type)
	{
		case ET_NONE:
			printf("None\n");
			break;
		case ET_REL:
			printf("Relocatable\n");
			break;
		case ET_EXEC:
			printf("Executable\n");
			break;
		case ET_DYN:
			printf("Shared object\n");
			break;
		case ET_CORE:
			printf("Core dump\n");
			break;
		default:
			printf("Other\n");
			break;
	}

	printf("Entry point address: 0x%lx\n", elf_header->e_entry);
}

/**
 * read_elf_header - Read elf header
 * @filename: File name
 *
 * Return: integer
 */
int read_elf_header(const char *filename)
{
	int fd = open(filename, O_RDONLY);
	Elf64_Ehdr elf_header;
	ssize_t bytes_read;

	if (fd == -1)
	{
		print_error("Unable to open file");
		return (98);
	}

	bytes_read = read(fd, &elf_header, sizeof(elf_header));

	if (bytes_read != sizeof(elf_header))
	{
		print_error("Unable to read ELF header");
		close(fd);
		return (98);
	}

	if (memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		print_error("File is not an ELF file");
		close(fd);
		return (98);
	}

	print_elf_header_info(&elf_header);

	close(fd);
	return (0);
}

/**
 * main - entrance
 * @argc: arg count
 * @argv: arg value
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	const char *filename;
	int result;

	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
		return (97);
	}

	filename = argv[1];
	result = read_elf_header(filename);
	
	return (result);
}
