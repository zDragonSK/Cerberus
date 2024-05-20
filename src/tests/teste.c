#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <openssl/md5.h>

void print_md5_hash(unsigned char *hash) {
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        printf("%02x", hash[i]);
    }
    printf("\n");
}

int main(void) {
    const char *input = "Hello, world!";
    unsigned char hash[MD5_DIGEST_LENGTH];

    MD5((unsigned char *)input, strlen(input), hash);

    printf("MD5 hash de '%s': ", input);
    print_md5_hash(hash);

    return 0;
}
