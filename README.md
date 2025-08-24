# Overview

This is a wrapper for the GNU Multi-Precision Library (GMP) written in the Fix language.

It's currently verified to work with GMP 6.2.1.

To use this library, you must have GMP installed and be able to dynamically link to it using the `-lgmp` flag.

Progress: Many `mpz_` and `mpq_` functions (though not all) functions have been covered.

# Naming Conventions

Most Fix functions are named by dropping the GMP prefix (e.g., `mpz_` or `mpq_`) and are placed within a corresponding namespace (e.g., `MPZ::` or `MPQ::`).

Due to Fix's allowed naming conventions, some functions deviate from this rule. For example, `mpz_2fac_ui` is named `MPZ::fac2_ui`.

# Additional Features

Some functions that are not present in GMP have been added to this library.

- Constructor functions like `MPZ::mpz : I64 -> MPZ` and `MPQ::mpq : I64 -> I64 -> MPQ`.
- Implementation of traits like `Zero`, `Add`, `Mul` and `ToString` for GMP types.
- `MPQ::int_set_si` and `MPQ::init_set_ui` for convenience, which do `init`, `set_(si|ui)` and `canonicalize`.

# Changed Functionality

The argument order of some functions has been changed to be more "Fix-like." 
For example, while GMP's `mpz_mod` takes the number `n` as the first argument and the modulus `m` as the second, the corresponding Fix function `mod` reverses this order. 
This allows for an idiomatic use, such as `n.mod(m)`.

`canonicalize` for MPQ is automatically called.

# Missing Features and Limitations

In GMP, a single calculation may have multiple function variants: one for MPZ/MPQ/MPF types and another for primitive types. 
For instance, there's `void mpz_gcd(mpz_t rop, const mpz_t op1, const mpz_t op2)` and `unsigned long int mpz_gcd_ui(mpz_t rop, const mpz_t op1, unsigned long int op2)`.

Due to my laziness, the latter type of function (the one using primitive types) is often not yet wrapped in this library.