file: vvod out del
vvod: funcF.c funcG.c func2.c
	g++ -c funcF.c -o funcF.o
	g++ -c funcG.c -o funcG.o
	g++ -c func2.c -o func2.o
	g++ funcF.o funcG.o func2.o -o file

out: vvod
	./file

del: out vvod
	rm file
	rm funcF.o
	rm funcG.o
	rm func2.o
