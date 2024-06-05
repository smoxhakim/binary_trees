all: compile clean

compile: *c
	@echo "Compiling..."
	@gcc *c

clean:
	rm -f a.out