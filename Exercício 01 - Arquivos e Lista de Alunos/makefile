MAIN=main.c
DEPENDENCE=TADs/aluno.c TADs/util.c
PROGRAMNAME=run

all:
	gcc -O3 -march=native -Wall -Werror -Wextra ${DEPENDENCE} $(MAIN) -o $(PROGRAMNAME) -lm

run:
	./$(PROGRAMNAME)

valgrind:
	valgrind --tool=memcheck --leak-check=full  --track-origins=yes --show-leak-kinds=all --show-reachable=yes ./$(PROGRAMNAME)

clean:
	@rm *.o

zip:
	@zip -r $(PROGRAMNAME).zip * 

dev:
	clear && gcc -O3 -march=native ${DEPENDENCE} $(MAIN) -o $(PROGRAMNAME) -lm && ./$(PROGRAMNAME)
