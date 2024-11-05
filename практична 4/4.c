#include <stdio.h>

union ULong {
    unsigned long longValue;
    unsigned int words[2];  
};

int main() {
    union ULong u;
    
    // Input
    printf("Enter lower word (unsigned int): ");
    scanf("%u", &u.words[0]); 

    printf("Enter upper word (unsigned int): ");
    scanf("%u", &u.words[1]); 

    // Output
    printf("Lower word: %u\n", u.words[0]);
    printf("Upper word: %u\n", u.words[1]);
    printf("Combined value (unsigned long): %lu\n", u.longValue);
    
    return 0;
}
