

#name of the executable file
all: lab52Exe

#creates the executable from both the object files
exampleExe: main.o class.o 
	g++ -Wall -g -o lab52Exe main.o class.o

#creates the main object file
exampleObj: main.cpp  
	g++ -Wall -g -c main.cpp

# creates the class object file
exampleClassObj: class.cpp 
	g++ -Wall -g -c class.cpp	
	
	