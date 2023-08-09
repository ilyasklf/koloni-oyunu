#include "Taktik.h"
#include "Oyun.h"
#include "ATaktik.h"
#include "BTaktik.h"
#include "AUretim.h"
#include "BUretim.h"


#include "koloni.h"

#define MAX_SIZE 100

int main() {
    int numbers[MAX_SIZE];
    char input[MAX_SIZE];
    int count = 0;

    printf("Populasyon Giriniz: ");
    fgets(input, sizeof(input), stdin);

    char *token = strtok(input, " ");
    while (token != NULL && count < MAX_SIZE) {
        numbers[count] = atoi(token);
        count++;
        token = strtok(NULL, " ");
    }

    
    
    Oyun o= OyunOlustur(numbers,count);
    return 0;
}