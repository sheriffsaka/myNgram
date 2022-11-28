#This is a makefile for 3 source files
# CFLAGS = -Wall -Werror
# CC = gcc
# $(CC)
# TARGET = main.c misc.c
# $(TARGET)
final:
	gcc -Wall -Wextra -Werror main.c misc.c -o final
clean:
	rm -f *.o

fclean:
	rm -f main.c misc.c

re: fclean all

# fclean:	clean
# 	rm	-f	$(TARGET)

