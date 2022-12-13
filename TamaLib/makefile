#Automatizza processo di compilazione
#formato da "entry point" di uno di questi tipi:

#-target : file.o: 	l'entry genera il target file.o che ha le dipendenze elencate dopo i ":"
#							usando il comando nella riga successiva (attenzione che va indentata (tab))	

#phony: nome: 				l'entry fa qualcosa che dipende dalle dipendenze elencate dopo ":"
#								l'azione da fare e` indicata sotto

#Se una delle dipendenze e` stata aggiornata dopo il target, MAKE cerca di usare le entry
#corrispondenti ai target prima di eseguire l'azione. 

libArray.o: libArray.h libArray.C
	g++ -c libArray.C

libstatTama.o: libstatTama.C libstatTama.h
	g++ -c libstatTama.C

acaso.o: acaso.h acaso.C
	g++ -c acaso.C

provaLibs.o: provaLibs.C 
	g++ -c provaLibs.C 

provaLibs.x: provaLibs.o libArray.o libstatTama.o acaso.o
	g++ provaLibs.o libArray.o libstatTama.o acaso.o -o provaLibs.x

#Esempio entry PHONY

compila: provaLibs.x

esegui: compila 
	./provaLibs.x