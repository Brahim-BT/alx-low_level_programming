#include "main.h"

/**
 * read_textfile - this function will read a text file and prints it to the POSIX standard output for.
 * @filename: the name of the file to be read.
 * @letters: the number of letters to be read.
 * Return: int or NULL or 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
    char *pntr_fl;

    ssize_t source;
    ssize_t fid;
    ssize_t rout;

    if (filename == 0)
        return (0);
    pntr_fl = malloc(letters * sizeof(char));
    if (pntr_fl == 0)
        return (0);
    fid = open(filename, O_RDONLY);
    rout = read(fid, pntr_fl, letters);
    source = write(STDOUT_FILENO, pntr_fl, rout);
    if (fid == -1 || rout == -1 || source == -1 || source != rout)
    {
        free(pntr_fl);
        return (0);
    }
    free(pntr_fl);
    close(fid);
    return (source);
}
