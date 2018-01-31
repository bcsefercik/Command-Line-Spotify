SOURCES = main.c

OBJS = $(SOURCES:.c=.o)


TARGET =	sptfy


$(TARGET):	$(OBJS)
	$(CC) -o $(TARGET) $(OBJS) 
	rm -f $(OBJS)
	rm -f nul



.PHONY: install
install:	sptfy
	mv $< /usr/bin/sptfy

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
