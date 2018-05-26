run: compile
		./eval.ste 1 2

compile:
		gcc -Wall main.c liste.c eval.c arbre.c -o eval.ste

clean:
		rm -f *.o
		rm -f *.ste
