/*
** EPITECH PROJECT, 2018
** my_file_readall
** File description:
** read an entire file and put it in an str
*/

#include "my.h"

char *my_file_readall(char const *filepath, my_err_t *err)
{
    int size = my_file_size(filepath);
    char *buffer = malloc(sizeof(char) * (size + 1));
    
    fd_t fd = my_open(filepath, O_RDONLY);
    if (fd == -1){
        *err = ERR_FS;
        return "\0";
    }
    int size_read = read(fd, buffer, size);
    *err = (size_read == size) ? MY_OK : ERR_SIZEREAD;
    buffer[size] = '\0';
    return buffer;
}