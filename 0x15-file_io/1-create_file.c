#include "main.h"

/**
 * create_file - this function will create a file for us.
 * @filename: file name
 * @text_content: some content to put in the file
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
    int fid, wr;

    if (filename == 0)
        return (-1);
    fid = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
    if (fid == -1)
        return (-1);
    if (text_content != 0)
        wr = write(fid, text_content, strlen(text_content));
    else
        wr = write(fid, text_content, 0);
    if (wr == -1)
        return (-1);
    close(fid);
    return (1);
}
