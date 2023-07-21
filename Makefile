bucketstack: bucketstack.o bucketstack_client.o 
	gcc -Wall -Wextra -std=c99 -o bucketstack bucketstack_client.o bucketstack.o

bucketstack_client.o: bucketstack.h bucketstack_client.c
	gcc -Wall -Wextra -std=c99 -c -o bucketstack_client.o bucketstack_client.c

bucketstack.o: bucketstack.h bucketstack.c
	gcc -Wall -Wextra -std=c99 -c -o bucketstack.o bucketstack.c

clean:
	rm -f *.o
	rm -f bucketstack