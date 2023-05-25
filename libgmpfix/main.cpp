#include <stdio.h>
#include <gmp.h>
#include <cstdint>
#include <cstdlib>

using namespace std;

///// MPZ /////

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

// Operations

extern "C" void fix_mpz_add(mpz_t* res, mpz_t* lhs, mpz_t* rhs) {
    mpz_add(*res, *lhs, *rhs);
}

extern "C" void fix_mpz_sub(mpz_t* res, mpz_t* lhs, mpz_t* rhs) {
    mpz_sub(*res, *lhs, *rhs);
}

extern "C" void fix_mpz_mul(mpz_t* res, mpz_t* lhs, mpz_t* rhs) {
    mpz_mul(*res, *lhs, *rhs);
}

extern "C" int64_t fix_mpz_divisible_p(mpz_t* n, mpz_t* d) {
    return (int64_t)mpz_divisible_p(*n, *d);
}

extern "C" void fix_mpz_divexact(mpz_t* res, mpz_t* n, mpz_t* d) {
    mpz_divexact(*res, *n, *d);
}

// Arithmetics

extern "C" void fix_mpz_gcd(mpz_t* res, mpz_t* lhs, mpz_t* rhs) {
    mpz_gcd(*res, *lhs, *rhs);
}

extern "C" void fix_mpz_lcm(mpz_t* res, mpz_t* lhs, mpz_t* rhs) {
    mpz_lcm(*res, *lhs, *rhs);
}

extern "C" void fix_mpz_bin_ui(mpz_t* res, mpz_t* n, int64_t k) {
    mpz_bin_ui(*res, *n, k);
}

extern "C" void fix_mpz_pow_ui(mpz_t* res, mpz_t* base, int64_t exp) {
    mpz_pow_ui(*res, *base, exp);
}

// Comparisons

extern "C" int64_t fix_mpz_cmp(mpz_t* lhs, mpz_t* rhs) {
    return (int64_t)mpz_cmp(*lhs, *rhs);
}

///// MPQ /////

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

// Get numerator, denominator

extern "C" void fix_mpq_get_num(mpz_t* num, mpq_t* q) {
    mpq_get_num(*num, *q);
}

extern "C" void fix_mpq_get_den(mpz_t* den, mpq_t* q) {
    mpq_get_den(*den, *q);
}

// Set numerator, denominator

extern "C" void fix_mpq_set_num(mpq_t* q, mpz_t* n) {
    mpq_set_num(*q, *n);
} 

extern "C" void fix_mpq_set_den(mpq_t* q, mpz_t* d) {
    mpq_set_den(*q, *d);
} 

// Operations

extern "C" void fix_mpq_add(mpq_t* res, mpq_t* lhs, mpq_t* rhs) {
    mpq_add(*res, *lhs, *rhs);
}

extern "C" void fix_mpq_sub(mpq_t* res, mpq_t* lhs, mpq_t* rhs) {
    mpq_sub(*res, *lhs, *rhs);
}

extern "C" void fix_mpq_mul(mpq_t* res, mpq_t* lhs, mpq_t* rhs) {
    mpq_mul(*res, *lhs, *rhs);
}

extern "C" void fix_mpq_div(mpq_t* res, mpq_t* lhs, mpq_t* rhs) {
    mpq_div(*res, *lhs, *rhs);
}

// Comparison

extern "C" int64_t fix_mpq_equal(mpq_t* lhs, mpq_t* rhs) {
    return (int64_t)mpq_equal(*lhs, *rhs);
}

extern "C" int64_t fix_mpq_cmp(mpq_t* lhs, mpq_t* rhs) {
    return (int64_t)mpq_cmp(*lhs, *rhs);
}