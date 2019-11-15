

CC = gcc -Wall -Wextra 

LIBRARY1 = libmylib.a
LIB1_OBJS1 =  myapi.o

INCLUDES = -I. 

LIBS =  $(LIBRARY1) 


all: BeginBanner libs test_api main_withsignal EndBanner

libs: $(LIBRARY1)

myapi.o: myapi.c
	$(CC) $(INCLUDES) -c myapi.c

$(LIBRARY1): $(LIB1_OBJS1) 
	@echo "**** building $(LIBRARY1) *****" 
	ar -rv $(LIBRARY1) $(LIB1_OBJS1)
	ranlib $(LIBRARY1)
	rm $(LIB1_OBJS1)

test_api: test_api.c
	@echo "**** building test_api *****"
	$(CC) $(INCLUDES) -o test_api test_api.c $(LIBS)
	
tmain_withsignal: main_withsignal.c
	@echo "**** building main_withsignal *****"
	$(CC) $(INCLUDES) -o main_withsignal main_withsignal.c $(LIBS)

clean: 
	rm -f *.o *.out test_api *.a 

BeginBanner:
	@echo "************************************************"
	@echo "**** start with HL *****"
	
EndBanner:
	@echo "**** done with HL *****"
	@echo "************************************************"
	
