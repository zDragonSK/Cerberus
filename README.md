# Cerberus Manager
A just rebuild of my password-manager. The idea of the project is to generate passwords using keys and change the hash to obtain a password that is a little more secure and in a more productive way.

## About Cerberus
The final function of Cerberus is to offer several password options with a personalized configuration. Initially, Cerberus, without storing any password, will offer to create a password using a key and a tag to create a hash in SHA256. The hash obtained through the key receives a small change using the integer values of the characters in your TAG, but in the future, Cerberus will create a second key with the TAG and encrypt points of the final hash with that TAG for greater security.

## How to compile
Just run `make` in the Cerberus directory :D
