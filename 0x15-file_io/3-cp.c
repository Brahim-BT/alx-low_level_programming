#include "main.h"

void close_file(int fd);

char *create_buffer(char *file);

/**
 * create_buffer - this function will allocate 1024 buffer for us.
 * @file: The name of the file.
 * Return: pointer.
 */

char *create_buffer(char *file)
{
    char *bfr;

    bfr = malloc(sizeof(char) * 1024);

    if (bfr == NULL)
    {
        dprintf(STDERR_FILENO,
                "Error: Can't write to %s\n", file);
        exit(99);
    }

    return (bfr);
}

/**
 * close_file - Closes file .
 * @file_pointer: The file to be closed.
 */

void close_file(int file)
{
    int cls_fl;

    cls_fl = close(file);

    if (cls_fl == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close file %d\n", file);
        exit(100);
    }
}

/**
 * main - copies the contents from a file to another file.
 * @argc: The number of arguments.
 * @argv: pointers to the arguments.
 * Return: 0
 */
int main(int argc, char *argv[])
{
    int src;

    int wr;

    int des;

    int rd;

    char *bfr;

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }
    bfr = create_buffer(argv[2]);
    src = open(argv[1], O_RDONLY);
    rd = read(src, bfr, 1024);
    des = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
    do
    {
        if (src == -1 || rd == -1)
        {
            dprintf(STDERR_FILENO,
                    "Error: Can't read from file %s\n", argv[1]);
            free(bfr);
            exit(98);
        }
        wr = write(des, bfr, rd);
        if (des == -1 || wr == -1)
        {
            dprintf(STDERR_FILENO,
                    "Error: Can't write to %s\n", argv[2]);
            free(bfr);
            exit(99);
        }
        rd = read(src, bfr, 1024);
        des = open(argv[2], O_WRONLY | O_APPEND);
    } while (rd > 0);
    free(bfr);
    close_file(src);
    close_file(des);
    return (0);
}
