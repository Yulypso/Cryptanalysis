
#include "cipher.h"
//#include "bonus.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//-------------------------------------------------------------------------------------------------
//  Chiffrement et déchiffrement

int main()
{
    CipherData cipherData = {0};
    Block cipherKey = {0x0, 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9, 0xA, 0xB, 0xC, 0xD, 0xE, 0xF};
    Block value = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    //00000100
    int i;

    /* test zone */
    printBlock(&value);
    //printf("--- perm ---\n");
    Block_permutation(&value);
    printBlock(&value);
    Block_invPermutation(&value);
    printBlock(&value);

    //printf("Plain  ");
    //printBlock(&block);
    //printf("Key    ");
    //printBlock(&cipherKey);

    // Initialisation du chiffrement
    initCipher(&cipherData, &cipherKey);

    // Chiffrement du block clair
    //encryptBlock(&cipherData, &block);

    // Affichage du chiffré
    //printf("Cipher ");
    //printBlock(&block);

    // Déchiffrement du block chiffré
    //decryptBlock(&cipherData, &block);

    // Affichage du résultat (normalement identique au clair)
    //printf("Plain  ");
    //printBlock(&block);
}