CC := gcc
CFLAGS := -Wall -Wextra -Werror 

%: %.c
	$(CC) $(CFLAGS) $< lib/cs50.c -Ilib -o $@
