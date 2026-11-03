bit_op: bit_op.c
	gcc -g bit_op.c -o bit_op
test: test.c
	gcc -g test.c -o test
clean:
	rm -f test bit_op
