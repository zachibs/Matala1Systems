#shortcuts
looping_function = basicClassification.o advancedClassificationLoop.o 
recursion_function = basicClassification.o advancedClassificationRecursion.o
short = -Wall -g -fPIC
#.....................................

libclassrec.a: $(recursion_function)
	ar -rcs libclassrec.a $(recursion_function) 

libclassloops.a: $(looping_function)
	ar -rcs libclassloops.a $(looping_function) 

libclassrec.so: $(recursion_function)
	gcc $(short) -shared -o libclassrec.so $(recursion_function)

libclassloops.so: $(looping_function)
	gcc  $(short) -shared -o libclassloops.so $(looping_function) 


main.o: main.c NumClass.h
	gcc -c main.c NumClass.h

basicClassification.o: basicClassification.c 
	gcc -c basicClassification.c 
	
advancedClassificationRecursion.o: advancedClassificationRecursion.c 
	gcc -c advancedClassificationRecursion.c 
	
advancedClassificationLoop.o: advancedClassificationLoop.c 
	gcc -c advancedClassificationLoop.c 




#	now we create the labals 

loops: libclassloops.a 

recursived: libclassrec.so

recursives: libclassrec.a 

loopd: libclassloops.so 

mains: main.o libclassrec.a
	gcc $(short) main.o libclassrec.a -o mains  

maindloop: main.o libclassloops.so
	gcc $(short) main.o ./libclassloops.so -o maindloop 

maindrec: main.o libclassrec.so
	gcc $(short) main.o ./libclassrec.so -o maindrec 

all: main.o mains maindloop maindrec loops 

clean:
	rm -f mains maindrec maindloop *o *a *gch *out
