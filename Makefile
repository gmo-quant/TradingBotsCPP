# Automated Makefile
# it works only on a single directory

CC = g++
CFLAGS = -Wall -Werror -D_GLIBCXX_DEBUG -std=c++11 -g
CFLAGS += -L /c/Users/quanf/OneDrive/Quant_Fin/Pro_TradingBotsCPP/restAPI/Oanda/
CFLAGS += -I /c/Users/quanf/OneDrive/Quant_Fin/Pro_TradingBotsCPP/restAPI/Oanda/
CFLAGS += -I /c/Users/quanf/OneDrive/Quant_Fin/Pro_TradingBotsCPP/includes/


COMPILE = $(CC) $(CFLAGS) -c
OBJFILES := $(patsubst %.cpp,%.o,$(wildcard *.cpp))
PROG_NAME = TradingBotsCPP

all: myprog

myprog: $(OBJFILES) 
	$(CC) -o $(PROG_NAME) $(OBJFILES)

%.o: %.cpp
	$(COMPILE) -o $@ $<
	
clean:
	rm -f *.o *.html $(PROG_NAME)