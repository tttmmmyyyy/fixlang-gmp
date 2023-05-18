#include <stdio.h>
#include <gmp.h>
#include <cstdint>
#include <cstdlib>

using namespace std;

// MPZ

// Init and clear

extern "C" mpz_t* fix_mpz_init() {
    mpz_t* num = (mpz_t*)malloc(sizeof(mpz_t));
    mpz_init(*num);
    return num;
}

extern "C" void fix_mpz_clear(mpz_t* num) {
    mpz_clear(*num);
    free(num);
}

// Convertion between string and mpz.

extern "C" int64_t fix_mpz_set_str(mpz_t* num, char* str, int64_t base) {
    return (int64_t)mpz_set_str(*num, str, (int)base);
}

extern "C" int64_t fix_mpz_sizeinbase(mpz_t* num, int64_t base) {
    return (int64_t)mpz_sizeinbase(*num, (int)base);
}

extern "C" char* fix_mpz_get_str(char* str, int64_t base, mpz_t* num) {
    return mpz_get_str(str, (int)base, *num);
}

// Assigning integers

extern "C" void fix_mpz_set(mpz_t* dst, mpz_t* src) {
    mpz_set(*dst, *src);
}

extern "C" void fix_mpz_set_si(mpz_t* num, int64_t val) {
    mpz_set_si(*num, val);
}

extern "C" void fix_mpz_set_ui(mpz_t* num, uint64_t val) {
    mpz_set_ui(*num, val);
}