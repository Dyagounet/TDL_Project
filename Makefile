run: compile
		./eval.ste 1+3 4+5

compile:
		gcc -Wall main.c liste.c -o eval.ste

clean:
		rm -f *.o
		rm -f *.ste
