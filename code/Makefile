

sl: ni.c
	gcc -c ni.c -o ni.o
	ar rcs libni.a ni.o

dl: ni.c
	gcc -c -fpic ni.c -o ni.o
	ld -shared -o libni.so ni.o

us: sl ex0.c
	gcc ex0.c -L. -lni -o exs

ud: dl ex0.c
	gcc ex0.c -L. -lni -o exd

clean:
	rm -rf *.a *.o *.so

