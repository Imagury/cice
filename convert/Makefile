def:
	sudo cp cice_convert.h /usr/local/include
	gcc -c cice_convert.c -lcice_math
	ar rs libcice_convert.a cice_convert.o
	rm cice_convert.o
	sudo cp libcice_convert.a /usr/local/lib
	rm libcice_convert.a
