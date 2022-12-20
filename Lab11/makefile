#this is a makefile.
#building block: entry point

#Structure of entry point:
#target: {dependencies (one or more files/targets)}
#action: what to do to generate the target !!!Mind the tab character before the action!!!!

tamaSorting.o: tamaSorting.C tamaSorting.h 
	g++ -c tamaSorting.C  

sortWithLib.o: sortWithLib.C
	g++ -c sortWithLib.C

sortWithLib.x: sortWithLib.o tamaSorting.o
	g++ sortWithLib.o tamaSorting.o -o sortWithLib.x

#Additional "phony" entries: the target is not a file, or something produced by the entry....

#this deletes all the .o and .x files (* is a wildcard meaning "anything")
clean:
	rm *.o *.x

#This entry has the entry sortWithLib.x as dependency.
#If sortWithLib.x file is not present, the corresponding entry gets executed
compila: sortWithLib.x

#
esegui: sortWithLib.x
	./sortWithLib.x

