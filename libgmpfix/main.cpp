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

// MPQ

// Init and clear

extern "C" mpq_t* fix_mpq_init() {
    mpq_t* num = (mpq_t*)malloc(sizeof(mpq_t));
    mpq_init(*num);
    return num;
}

extern "C" void fix_mpq_clear(mpq_t* num) {
    mpq_clear(*num);
    free(num);
}

// Canonicalize

extern "C" void fix_mpq_canonicalize(mpq_t* num) {
    mpq_canonicalize(*num);
}

// Assigning integers

extern "C" void fix_mpq_set(mpq_t* dst, mpq_t* src) {
    mpq_set(*dst, *src);
}

extern "C" void fix_mpq_set_si(mpq_t* num, int64_t numer, uint64_t denom) {
    mpq_set_si(*num, numer, denom);
}

// Get numerator / denominator

extern "C" void fix_mpq_get_num(mpz_t* num, mpq_t* q) {
    mpq_get_num(*num, *q);
}

extern "C" void fix_mpq_get_den(mpz_t* den, mpq_t* q) {
    mpq_get_den(*den, *q);
}

// Operations

extern "C" void fix_mpq_add(mpq_t* sum, mpq_t* addend1, mpq_t* addend2) {
    mpq_add(*sum, *addend1, *addend2);
}

extern "C" void fix_mpq_div(mpq_t* sum, mpq_t* addend1, mpq_t* addend2) {
    mpq_div(*sum, *addend1, *addend2);
}

// Comparison

extern "C" int64_t fix_mpq_equal(mpq_t* lhs, mpq_t* rhs) {
    return (int64_t)mpq_equal(*lhs, *rhs);
}

extern "C" int64_t fix_mpq_cmp(mpq_t* lhs, mpq_t* rhs) {
    return (int64_t)mpq_cmp(*lhs, *rhs);
}