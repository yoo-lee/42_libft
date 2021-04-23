NAME=libft.a

SRCS=ft_atoi.c ft_bzero.c ft_isalnum.c \
	 ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	 ft_itoa.c  \
	 ft_memccpy.c ft_memset.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
	 ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c  \
	 ft_strdup.c  ft_strjoin.c ft_strlcat.c ft_strlen.c  ft_strmapi.c \
	 ft_strncmp.c  ft_strlcpy.c ft_strchr.c  ft_strtrim.c \
	 ft_tolower.c ft_toupper.c ft_calloc.c ft_strdup.c \
	 ft_substr.c ft_split.c

OBJECTS=ft_atoi.o ft_bzero.o ft_isalnum.o \
	 ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o \
	 ft_itoa.o  \
	 ft_memccpy.o ft_memset.o ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memmove.o \
	 ft_putchar_fd.o ft_putendl_fd.o ft_putnbr_fd.o  \
	 ft_strdup.o  ft_strjoin.o ft_strlcat.o ft_strlen.o  ft_strmapi.o \
	 ft_strncmp.o  ft_strlcpy.o ft_strchr.o  ft_strtrim.o \
	 ft_tolower.o ft_toupper.o ft_calloc.o ft_strdup.o \
	 ft_substr.o ft_split.o

INCLUDES=./

all: $(NAME)

$(NAME): $(SRCS) libft.h
	@gcc -Wall -Wextra -Werror -I$(INCLUDES) -c $(SRCS)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(OBJECTS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all