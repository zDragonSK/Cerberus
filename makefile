compile: src/main.c src/cerberus.c
	gcc -o ./build/Cerberus src/main.c src/cerberus.c -lcrypto
test: compile
	./build/Cerberus testPassword TestKey
clean: main
	rm main
