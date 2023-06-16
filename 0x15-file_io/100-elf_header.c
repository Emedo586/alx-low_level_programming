#include <elf.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

void print_class(Elf64_Ehdr h);
void print_data(Elf64_Ehdr h);
void print_version(Elf64_Ehdr h);
void print_abiversion(Elf64_Ehdr h);
void print_osabi(Elf64_Ehdr h);
void print_osabi_more(Elf64_Ehdr h);
void print_type(Elf64_Ehdr h);
void print_entry(Elf64_Ehdr h);

/**
 * print_magic - Prints the magic numbers of an ELF header.
 * Description: Magic numbers are separated by spaces.
 * @h: the ELF header structure.
 *
 */
void print_magic(Elf64_Ehdr h)
{
int k;
printf("  Magic:   ");
for (k = 0; k < EI_NIDENT; k++)
printf("%2.2x%s", h.e_ident[k], k == EI_NIDENT - 1 ? "\n" : " ");
}


/**
 * print_class - Prints the class of an ELF header.
 * @h: ELF header structure.
 */
void print_class(Elf64_Ehdr h)
{
printf("  Class:                             ");

switch (h.e_ident[EI_CLASS])
{
case ELFCLASS64:
printf("ELF64");
break;
case ELFCLASS32:
printf("ELF32");
break;
case ELFCLASSNONE:
printf("none");
break;
}
printf("\n");
}


/**
 * print_data - functions prints the data of an ELF header.
 * @h: ELF header structure.
 */
void print_data(Elf64_Ehdr h)
{
printf("  Data:                             ");

switch (h.e_ident[EI_DATA])
{
case ELFDATA2MSB:
printf("2's complement, big endian\n");
break;
case ELFDATA2LSB:
printf("2's complement,little endian\n");
break;
case ELFDATANONE:
printf("none");
break;
}
printf("\n");
}


/**
 * print_version - functions that prints the version of an ELF header.
 * @h: ELF header structure.
 */
void print_version(Elf64_Ehdr h)
{
printf("  Version:                             %d", h.e_ident[EI_VERSION]);

switch (h.e_ident[EI_VERSION])
{
case EV_CURRENT:
printf("(current)");
break;
case EV_NONE:
printf("%s", "");
break;
}
printf("\n");
}


/**
 * print_osabi - functions that prints the OS/ABI of an ELF header.
 * @h: ELF header structure.
 */
void print_osabi(Elf64_Ehdr h)
{
printf("  OS/ABI:                             ");
switch (h.e_ident[EI_OSABI])
{
case ELFOSABI_NONE:
printf("UNIX - System V");
break;
case ELFOSABI_HPUX:
printf("UNIX - HP-UX");
break;
case ELFOSABI_NETBSD:
printf("UNIX - NetBSD");
break;
case ELFOSABI_LINUX:
printf("UNIX - Linux");
break;
case ELFOSABI_SOLARIS:
printf("UNIX - Solaris");
break;
case ELFOSABI_AIX:
printf("UNIX - AIX");
break;
case ELFOSABI_IRIX:
printf("UNIX - IRIX");
break;
case ELFOSABI_FREEBSD:
printf("UNIX - FreeBSD");
break;
case ELFOSABI_TRU64:
printf("UNIX - TRU64");
break;
default:
print_osabi_more(h);
break;
}
printf("\n");
}


/**
 * print_osabi_more - functions that prints the OS/ABI of an ELF header.
 * @h: ELF header structure.
 */
void print_osabi_more(Elf64_Ehdr h)
{
switch (h.e_ident[EI_OSABI])
{
case ELFOSABI_MODESTO:
printf("Novell - Modesto");
break;
case ELFOSABI_OPENBSD:
printf("UNIX - OpenBSD");
break;
case ELFOSABI_STANDALONE:
printf("Standalone App");
break;
case ELFOSABI_ARM:
printf("ARM");
break;
printf("<unknown: %x>", h.e_ident[EI_OSABI]);
break;
}
}


/**
 * print_abiversion - functions prints the ABI version of an ELF header.
 * @h: the ELF header structure.
 */
void print_abiversion(Elf64_Ehdr h)
{
printf("  ABI Version:                       %d\n",
	h.e_ident[EI_ABIVERSION]);
}


/**
 * print_type - functions that prints the type of an ELF header.
 * @h: ELF header structure.
 * 
 */
void print_type(Elf64_Ehdr h)
{
char *b = (char *)&h.e_type;
int k = 0;

printf("  Type:                             ");
if (h.e_ident[EI_DATA] == ELFDATA2MSB)
k = 1;
switch (b[k])
{
case ET_NONE:
printf("NONE (None)");
break;
case ET_REL:
printf("REL (Relocatable file)");
break;
case ET_EXEC:
printf("EXEC (Executable file)");
break;
case ET_DYN:
printf("DYN (Shared object file)");
break;
case ET_CORE:
printf("CORE (Core file)");
break;
default:
printf("<unknown:%x>\n", b[k]);
break;
}
printf("\n");
}

/**
 * print_entry - Prints the entry point of an ELF header.
 *
 * @h: The ELF header structure.
 */
void print_entry(Elf64_Ehdr h)
{
int k = 0, len = 0;
unsigned char *b = (unsigned char *)&h.e_entry;
printf("  Entry point address:               0x");
if (h.e_ident[EI_DATA] != ELFDATA2MSB)
{
k = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3; 
while (!b[k])
k--;
printf("%x", b[k--]);
for (; k >= 0; k--)
printf("%02x", b[k]);
printf("\n");
}
else
k = 0;
len = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
while (!b[k])
k++;
printf("%x", b[k++]);
for (; k <= len; k++)
printf("%02x", b[k]);
printf ("\n");
}


/**
 * main - function that displays the information contained in the
 * ELF header at the start of an ELF file.
 * Description: exit code 98 if the file is not an ELF File or
 * the function fails.
 * @argc: The number of arguments included to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 1 on success, 0 on failure.
 *
 */
int main(int argc, char **argv)
{
int fd;
Elf64_Ehdr h;
ssize_t w;
if (argc != 2)
dprintf(STDERR_FILENO, "Usage: elf_headed elf_filename\n"), exit(98);
fd = open(argv[1], O_RDONLY);
if (fd == -1)
dprintf(STDERR_FILENO, "Can't open file: %s\n", argv[1]), exit(98);
w = read(fd, &h, sizeof(h));
if (w < 1 || w != sizeof(h))
dprintf(STDERR_FILENO, "Can't read file: %s\n", argv[1]), exit(98);

if (h.e_ident[0] == 0x7f && h.e_ident[1] == 'E' && h.e_ident[2] == 'L' && h.e_ident[3] ==  'F')
{
printf("ELF Header:\n");
}
else
dprintf(STDERR_FILENO, "Not ELF file: %s\n", argv[1]), exit(98);

print_magic(h);
print_class(h);
print_data(h);
print_version(h);
print_osabi(h);
print_abiversion(h);
print_type(h);
print_entry(h);
if (close (fd))
dprintf(STDERR_FILENO, "Error closing file descriptor: %d\n", fd), exit(98);
return (EXIT_SUCCESS);
}
