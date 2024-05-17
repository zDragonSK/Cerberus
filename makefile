compile: src/main.c src/cerberus.c
	gcc -o main src/main.c src/cerberus.c -lcrypto
clean: main
	rm main
