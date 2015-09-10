CC=gcc -Wall -Wextra -Werror -Wno-implicit-function-declaration
N=norminette
NC=norminette --CheckForbiddenSourceHeader

all:
	j07
j07:
	$(CC) ../j07/ex*/ft* -o test_j07 main_j07.c
j07-clean:
	rm test_j07
j07-t:
	./test_j07
j07-git:
	cd ../j07; \
	git add ex*/ft*; \
	git commit -m '$(M)'; \
	git push origin master; 
j07-norm:
	cd ../j07; git ls-files | xargs $(NC);
j07-setup:
	cat main_j07_skel.c | tr '\n' '\29' | sed 's#\/\*`##$(NO)'\
		| sed 's#`\*\/##$(NO)' | tr '\29' '\n' > main_j07.c
