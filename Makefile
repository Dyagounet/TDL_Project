run: compile
		./Eval.ste

compile:
		gcc -Wall main.c eval.c -o Eval.ste

clean:
		rm -f *.o
		rm -f *.ste
