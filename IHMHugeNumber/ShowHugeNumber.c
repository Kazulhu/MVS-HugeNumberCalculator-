void printHugeUnsignedInt (const HugeUnsignedInt* hugeUnsignedInt) {
    char* hugeUnsignedIntString = HugeUnsignedIntToString (hugeUnsignedInt);
    printf ("%s\n", hugeUnsignedIntString);
    free (hugeUnsignedIntString);
}

void printHugeInt (const HugeInt* hugeInt) {
    char* hugeIntString = HugeIntToString (hugeInt);
    printf ("%s\n", hugeIntString);
    free (hugeIntString);
}
