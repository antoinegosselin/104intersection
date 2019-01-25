/*
** EPITECH PROJECT, 2018
** err_code
** File description:
** err_code header for defines
*/

#ifndef MY_ERR_CODE_H
#define MY_ERR_CODE_H

/* for get exit code with main return or str::exit(ERR_CODE)*/
/* ./a.out; */
/* echo $?; */

typedef int my_err_t;

/* Ox code returned OK */

#define MY_OK 2 //function returned ok

/* files err 1x */
#define ERR_PERM 10 //operation not permitted
#define ERR_PATH 11//no such file or directory
#define ERR_IO 12 //in-out error
#define ERR_FS 13 //open err
#define ERR_SIZEREAD 14 //size readed different from attended

/* memory err 2x */
#define ERR_NOMEM 20 //err with malloc allocation
#define ERR_OVERFLOW 21 //too long fow type used

/* research err 3x */
#define ERR_NOTFOUND 30

/* syntax err 4x */
#define ERR_PARSE 40 //syntax err
#define ERR_STRLEN 41 //err with len of str (too long)

/* math 5x */
#define ERR_DIV0 50
#define ERR_NEGSQRT 51

/* arg 6x */
#define ERR_NARG 60 //err number arguments
#define ERR_TYPEARG 61;

#endif //MY_ERR_CODE_H
