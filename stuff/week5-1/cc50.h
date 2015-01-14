/****************************************************************************
 * CC50 Library for simplifying C input 
 * 
 * Gabriel Lima Guimarães <gabriellimaguimaraes@gmail.com>
 *  
 *  
 * To compile as a standard library in your Ubuntu/Debian computer use:
 * 
 * sudo apt-get install gcc
 * gcc -c -ggdb -std=c99 cc50.c -o cc50.o
 * ar rcs libcc50.a cc50.o
 * chmod 0644 cc50.h libcc50.a
 * sudo mkdir -p /usr/local/include
 * sudo chmod 0755 /usr/local/include
 * sudo mv cc50.h /usr/local/include
 * sudo mkdir -p /usr/local/lib
 * sudo chmod 0755 /usr/local/lib
 * sudo mv libcc50.a /usr/local/lib
 * 
 *  
 * Based on the CS50 Library by:
 * 
 * Glenn Holloway <holloway@eecs.harvard.edu>
 * David J. Malan <malan@harvard.edu>
 *
 * Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
 * http://creativecommons.org/licenses/by-nc-sa/3.0/
 ***************************************************************************/

#ifndef _CC50_H
#define _CC50_H

#include <float.h>
#include <limits.h>
#include <stdbool.h>
#include <stdlib.h>


/*
 * Our own data type for string variables.
 */

typedef char *string;


/*
 * Reads a line of text from standard input and returns the equivalent
 * char; if text does not represent a char, user is prompted to retry.
 * Leading and trailing whitespace is ignored.  If line can't be read,
 * returns CHAR_MAX.
 */

char 
GetChar(void);


/*
 * Reads a line of text from standard input and returns the equivalent
 * double as precisely as possible; if text does not represent a
 * double, user is prompted to retry.  Leading and trailing whitespace
 * is ignored.  For simplicity, overflow and underflow are not detected.
 * If line can't be read, returns DBL_MAX.
 */

double 
GetDouble(void);


/*
 * Reads a line of text from standard input and returns the equivalent
 * float as precisely as possible; if text does not represent a float,
 * user is prompted to retry.  Leading and trailing whitespace is ignored.
 * For simplicity, overflow and underflow are not detected.  If line can't
 * be read, returns FLT_MAX.
 */

float 
GetFloat(void);


/*
 * Reads a line of text from standard input and returns it as an
 * int in the range of [-2^31 + 1, 2^31 - 2], if possible; if text
 * does not represent such an int, user is prompted to retry.  Leading
 * and trailing whitespace is ignored.  For simplicity, overflow is not
 * detected.  If line can't be read, returns INT_MAX.
 */

int 
GetInt(void);


/*
 * Reads a line of text from standard input and returns an equivalent
 * long long in the range [-2^63 + 1, 2^63 - 2], if possible; if text
 * does not represent such a long long, user is prompted to retry.
 * Leading and trailing whitespace is ignored.  For simplicity, overflow
 * is not detected.  If line can't be read, returns LLONG_MAX.
 */

long long 
GetLongLong(void);


/*
 * Reads a line of text from standard input and returns it as a
 * string (char *), sans trailing newline character.  (Ergo, if
 * user inputs only "\n", returns "" not NULL.)  Returns NULL
 * upon error or no input whatsoever (i.e., just EOF).  Leading
 * and trailing whitespace is not ignored.  Stores string on heap
 * (via malloc); memory must be freed by caller to avoid leak.
 */

string GetString(void);



#endif
