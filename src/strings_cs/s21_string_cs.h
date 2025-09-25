#ifndef STRING_SC_H
#define STRING_SC_H

#include <stdlib.h>

#include "../s21_string.h"

void *s21_to_upper(const char *str);
void *s21_to_lower(const char *str);
void *s21_insert(const char *src, const char *str, s21_size_t start_index);
void *s21_trim(const char *src, const char *trim_chars);

#endif