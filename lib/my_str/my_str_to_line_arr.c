/*
** EPITECH PROJECT, 2018
** my_str_to_line_arr
** File description:
** my_str_to_line_arr
*/

#include "my.h"

char **my_str_to_line_arr(char const *str)
{
    int count_size = my_count_line(str);
    char **arr = malloc(sizeof(char*) * (count_size + 1));
    int offset = 0;

    for (int i = 0; i < count_size; i++){
        int size_line = my_line_lenght(str + offset);
        arr[i] = malloc(sizeof(char) * (size_line + 1));
        my_strncpy(arr[i], str + offset, size_line);
        arr[i][size_line] = '\0';
        offset += size_line + 1;
    }
    arr[count_size] = my_strdup("\0");
    return arr;
}

