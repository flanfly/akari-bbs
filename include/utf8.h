#ifndef UTF8_H
#define UTF8_H

char *strdup(const char *str);
char *utf8_rewrite(char *str);
unsigned utf8_charcount(const char *str);
char *xss_sanitize(char **loc);
char *tripcode_pass(char **nameptr);
char *tripcode_hash(const char *pass);

#endif
