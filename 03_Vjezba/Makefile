CC = g++				#varijabla CC sadrži g++
CFLAGS = -I.	
DEPS = ElementaryParticle.h

%.o: %.cpp $(DEPS)			#pravilo koje vrijedi za sve file-ove .o
	$(CC) -o $@ $< $(CFLAGS)

analyzer: analyzer.o ElementaryParticle.o
	$(CC) -o analyzer.o ElementaryParticle.o
	

#clean:
#	@echo "Deleting .o files"
#	rm *.o
