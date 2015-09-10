CC=gcc -Wall -Wextra -Werror
N=norminette
NC=norminette --CheckForbiddenSourceHeader

all:
	j07
j07:
	$(CC) main_j07.c ../j07/ex*/ft* -o test_j07
j07-clean:
	rm test_j07
j07-t:
	./test_j07
j07-git:
	git add ../j07/ex*/ft_*.c
	git commit -m '$(M)'
	git push origin master


