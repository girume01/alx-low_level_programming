#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
/**
 * print_error - prints error.
 * @msg: message.
 * Return: 0
 */
void print_error(char *msg)
{
	dprintf(STDERR_FILENO, "Error: %s\n", msg);
	exit(98);
}
/**
 * read_elf_header - reading function.
 * @filename: name of the file.
 * Return: 0
 */
void read_elf_header(char *filename)
{
	int fd;
	Elf64_Ehdr elf_header;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		print_error("cannot open file");
	}

	if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		print_error("Error reading ELF header");
	}
	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
			elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
			elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
			elf_header.e_ident[EI_MAG3] != ELFMAG3)
	{
		print_error("not an ELF file");
	}
	printf("ELF Header:\n");
	printf(" Magic: %02x %02x %02x %02x\n",
			elf_header.e_ident[EI_MAG0],
			elf_header.e_ident[EI_MAG1],
			elf_header.e_ident[EI_MAG2],
			elf_header.e_ident[EI_MAG3]);

	printf(" class:  %s\n",
			elf_header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" :
			elf_header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "Invalid class");

	printf(" Data:  %s\n",
			elf_header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
			elf_header.e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" : "Invalid data encoding");

	printf(" Version:  %d (current)\n", elf_header.e_ident[EI_VERSION]);
	printf(" OS/ABI:  %s\n",
			elf_header.e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" :
			elf_header.e_ident[EI_OSABI] == ELFOSABI_HPUX ? "UNIX - HP-UX" :
			elf_header.e_ident[EI_OSABI] == ELFOSABI_NETBSD ? "UNIX - NetBSD" :
			elf_header.e_ident[EI_OSABI] == ELFOSABI_LINUX ? "UNIX - Linux" : "Unknown OS/ABI");

	printf("  ABI Version:  %d\n", elf_header.e_ident[EI_ABIVERSION]);
	printf("  Type:   %s\n",
			elf_header.e_type == ET_REL ? "Rel (Relocatable file)" :
			elf_header.e_type == ET_EXEC ? "EXEC (Executable file)" :
			elf_header.e_type == ET_DYN ? "DYN (shared object file)" :
			elf_header.e_type == ET_CORE ? "CORE (core file)" : "unknown type");
	printf("  Entry point address:  %#lx\n", (unsigned long) elf_header.e_entry);
}
/**
 * main - entry point.
 * @argc: argument.
 * @argv: argument value.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
	}
	read_elf_header(argv[1]);
	return (0);
}
