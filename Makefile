run: compile
		./eval.ste 1+3

compile:
		gcc -Wall main.c liste.c eval.c -o eval.ste

clean:
		rm -f *.o
		rm -f *.ste
