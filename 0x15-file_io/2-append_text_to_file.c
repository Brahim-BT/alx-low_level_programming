#include "main.h"

/**
 * append_text_to_file - this function will append text to the end of a file for us.
 * @filename:  the name file.
 * @text_content: the content of the file.
 * Return: 1 or 0.
 */

int append_text_to_file(const char *filename, char *text_content)
{
    int fid;

    int wr;

    wr = 0;
    if (filename == 0)
        return (-1);
    fid = open(filename, O_APPEND | O_WRONLY);
    if (fid == -1)
        return (-1);
    if (text_content != 0)
        wr = write(fid, text_content, strlen(text_content));
    if (wr == -1)
        return (-1);
    return (1);
}
