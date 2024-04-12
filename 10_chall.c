#include <stdio.h>

void decodeMessage(char *message) {
    for (int i = 0; message[i] != '\0'; i++) {
        message[i] = message[i] - 1;
    }
}

int main() {
    char message[] = "Ifmmp!tbvo\"zpv!csjdl!fwfsz!gjfme";
	printf("Enter the message to decode: ");
	scanf("%s", message);

    decodeMessage(message);

    printf("Decoded message: %s\n", message);

    return 0;
}
