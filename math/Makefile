def:
	sudo cp cice_math.h /usr/local/include
	gcc -c cice_math.c
	ar rs libcice_math.a cice_math.o
	rm cice_math.o
	sudo cp libcice_math.a /usr/local/lib
	rm libcice_math.a
