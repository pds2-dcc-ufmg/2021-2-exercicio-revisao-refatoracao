CC=g++ 
CFLAGS=-Wall
EXEC=./main 

$(EXEC):
	$(CC) $(CFLAGS) *.cpp -o $(EXEC)

rm:
	rm $(EXEC)
