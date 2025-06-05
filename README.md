# Cerberus
A simple and functional password generator.

## How it works?
Cerberus receives two inputs. The first argument is the key to generate the password, and the second is a type of TAG. It is recommended that the TAG is the name of the social network or objective. Upon receiving the inputs, the algorithm will encrypt the key in SHA-256 and modify it with an MD5 hash generated using the TAG. In the end, Cerberus delivers a different key to each TAG, even if the same key is used.

## Why use Cerberus?
The idea is not to replace a complex manager that can generate and store all passwords. The objective of Cerberus is to generate passwords without storing them in online services where they are vulnerable to online services and exploitation techniques using web applications. Not that Cerberus is not exploitable, since it is a local service, but just offering a clean and fast alternative to having several different passwords without having to memorize all the keys or repeat the same password.

## How to compile

### Requirements:
* MAKE;
* C/C++ Compiler;
* Cup of coffe;
* Reason to use this;

Install MAKE and a C compiler (like GCC). <br>
Ex: <br>
`pacman -Sy gcc make` <br>
After installing, compile the code using `make` command. When compiling, run a test command. <br> <br>

See the original SHA-256: <br>
`./main password@ -o`

See the difference: <br>
`./main password@ Discord && ./main password@ Twitter` <br>
Note that several parts of the password are different, especially the beginning and some characters between the center and the end. The result depends on the size of the TAG.
