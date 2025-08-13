# GMP.Z

Defined in gmp-fix@0.4.0

## Values

### namespace GMP.Z

#### c_SiZE_OF_MPZ

Type: `Std::FFI::CInt`

Size of `__mpz_struct`.

### namespace GMP.Z::MPZ

#### abs

Type: `GMP.Z::MPZ -> GMP.Z::MPZ`

Calculates the absolute value of a `MPZ` value.

##### Parameters

- `num`: The `MPZ` value to calculate the absolute value of.

#### addmul

Type: `GMP.Z::MPZ -> GMP.Z::MPZ -> GMP.Z::MPZ -> GMP.Z::MPZ`

Calculates `x + a * b`.

##### Parameters

- `a`
- `b`
- `x`

#### and

Type: `GMP.Z::MPZ -> GMP.Z::MPZ -> GMP.Z::MPZ`

Logical and operation on two `MPZ` values.

##### Parameters

- `lhs`: The left-hand side value.
- `rhs`: The right-hand side value.

#### cdiv_q

Type: `GMP.Z::MPZ -> GMP.Z::MPZ -> GMP.Z::MPZ`

Divides `n` by `d` and returns the quotient.

"c" means "ceiling", i.e., the quotient is rounded towards positive infinity.

##### Parameters

- `d`: The divisor.
- `n`: The dividend.

#### cdiv_q_2exp

Type: `Std::U64 -> GMP.Z::MPZ -> GMP.Z::MPZ`

Divides `n` by `2^b` and returns the quotient.

"c" means "ceiling", i.e., the quotient is rounded towards positive infinity.

##### Parameters

- `bit`: The exponent of 2.
- `n`: The dividend.

#### cdiv_qr

Type: `GMP.Z::MPZ -> GMP.Z::MPZ -> (GMP.Z::MPZ, GMP.Z::MPZ)`

Divides `n` by `d` and returns the quotient and remainder.

"c" means "ceiling", i.e., the quotient is rounded towards positive infinity.

##### Parameters

- `d`: The divisor.
- `n`: The dividend.

#### cdiv_r

Type: `GMP.Z::MPZ -> GMP.Z::MPZ -> GMP.Z::MPZ`

Divides `n` by `d` and returns the remainder.

"c" means "ceiling", i.e., the quotient is rounded towards positive infinity.

##### Parameters

- `d`: The divisor.
- `n`: The dividend.

#### cdiv_r_2exp

Type: `Std::U64 -> GMP.Z::MPZ -> GMP.Z::MPZ`

Divides `n` by `2^b` and returns the remainder.

"c" means "ceiling", i.e., the quotient is rounded towards positive infinity.

##### Parameters

- `bit`: The exponent of 2.
- `n`: The dividend.

#### clrbit

Type: `Std::U64 -> GMP.Z::MPZ -> GMP.Z::MPZ`

Sets the specified bit in a `MPZ` value to `0`.

##### Parameters

- `bit`: The bit to clear.
- `n`: The `MPZ` value to modify.

#### cmp

Type: `GMP.Z::MPZ -> GMP.Z::MPZ -> Std::I64`

Compares two `MPZ` values.

##### Returns

- a negative if `lhs < rhs`
- zero if `lhs == rhs`
- a positive if `lhs > rhs`

##### Parameters

- `lhs`: The left-hand side value.
- `rhs`: The right-hand side value.

#### cmp_d

Type: `GMP.Z::MPZ -> Std::F64 -> Std::I64`

Compares a `MPZ` value and an `F64` value.

##### Returns

- a negative if `lhs < rhs`
- zero if `lhs == rhs`
- a positive if `lhs > rhs`

##### Parameters

- `lhs`: The left-hand side value.
- `rhs`: The right-hand side value.

#### cmpabs

Type: `GMP.Z::MPZ -> GMP.Z::MPZ -> Std::I64`

Compares absolute values of two `MPZ` values.

##### Returns

- a negative if `|lhs| < |rhs|`
- zero if `|lhs| == |rhs|`
- a positive if `|lhs| > |rhs|`

##### Parameters

- `lhs`: The left-hand side value.
- `rhs`: The right-hand side value.

#### cmpabs_d

Type: `GMP.Z::MPZ -> Std::F64 -> Std::I64`

Compares absolute values of a `MPZ` value and an `F64` value.

##### Returns

- a negative if `|lhs| < |rhs|`
- zero if `|lhs| == |rhs|`
- a positive if `|lhs| > |rhs|`

##### Parameters

- `lhs`: The left-hand side value.
- `rhs`: The right-hand side value.

#### com

Type: `GMP.Z::MPZ -> GMP.Z::MPZ`

Bitwise complement operation on a `MPZ` value.

##### Parameters

- `n`: The `MPZ` value to complement.

#### combit

Type: `Std::U64 -> GMP.Z::MPZ -> GMP.Z::MPZ`

Toggles the specified bit in a `MPZ` value.

##### Parameters

- `bit`: The bit to toggle.
- `n`: The `MPZ` value to modify.

#### congruent_2exp_p

Type: `Std::U64 -> GMP.Z::MPZ -> GMP.Z::MPZ -> Std::Bool`

Checks if two values `a`, `b` are congruent modulo `2^b`.

##### Parameters

- `bit`: The exponent of 2.
- `a`: The first value.
- `b`: The second value.

#### congruent_p

Type: `GMP.Z::MPZ -> GMP.Z::MPZ -> GMP.Z::MPZ -> Std::Bool`

Checks if two values `a`, `b` are congruent modulo `m`.

##### Parameters

- `m`: The modulus.
- `a`: The first value.
- `b`: The second value.

#### divexact

Type: `GMP.Z::MPZ -> GMP.Z::MPZ -> GMP.Z::MPZ`

Divides `n` by `d` and returns the quotient.

This function assumes that `n` is divisible by `d`.

##### Parameters

- `d`: The divisor.
- `n`: The dividend.

#### divisible_2exp_p

Type: `Std::U64 -> GMP.Z::MPZ -> Std::Bool`

Checks if `n` is divisible by `2^b`.

##### Parameters

- `bit`: The exponent of 2.
- `n`: The dividend.

#### divisible_p

Type: `GMP.Z::MPZ -> GMP.Z::MPZ -> Std::Bool`

Checks if `n` is divisible by `d`.

##### Parameters

- `d`: The divisor.
- `n`: The dividend.

#### fdiv_q

Type: `GMP.Z::MPZ -> GMP.Z::MPZ -> GMP.Z::MPZ`

Divides `n` by `d` and returns the quotient.

"f" means "floored", i.e., the quotient is rounded towards negative infinity.

##### Parameters

- `d`: The divisor.
- `n`: The dividend.

#### fdiv_q_2exp

Type: `Std::U64 -> GMP.Z::MPZ -> GMP.Z::MPZ`

Divides `n` by `2^b` and returns the quotient.

"f" means "floored", i.e., the quotient is rounded towards negative infinity.

##### Parameters

- `bit`: The exponent of 2.
- `n`: The dividend.

#### fdiv_qr

Type: `GMP.Z::MPZ -> GMP.Z::MPZ -> (GMP.Z::MPZ, GMP.Z::MPZ)`

Divides `n` by `d` and returns the quotient and remainder.

"f" means "floored", i.e., the quotient is rounded towards negative infinity.

##### Parameters

- `d`: The divisor.
- `n`: The dividend.

#### fdiv_r

Type: `GMP.Z::MPZ -> GMP.Z::MPZ -> GMP.Z::MPZ`

Divides `n` by `d` and returns the remainder.

"f" means "floored", i.e., the quotient is rounded towards negative infinity.

##### Parameters

- `d`: The divisor.
- `n`: The dividend.

#### fdiv_r_2exp

Type: `Std::U64 -> GMP.Z::MPZ -> GMP.Z::MPZ`

Divides `n` by `2^b` and returns the remainder.

"f" means "floored", i.e., the quotient is rounded towards negative infinity.

##### Parameters

- `bit`: The exponent of 2.
- `n`: The dividend.

#### from_F64

Type: `Std::F64 -> GMP.Z::MPZ`

Creates a `MPZ` value represented by a F64 value.

##### Parameters

- `val`: The F64 value to represent.

#### from_U64

Type: `Std::U64 -> GMP.Z::MPZ`

Creates a `MPZ` value represented by an U64 value.

##### Parameters

- `val`: The U64 value to represent.

#### get_string

Type: `Std::I64 -> GMP.Z::MPZ -> Std::String`

Converts a `MPZ` value to a string in the given base.

##### Parameters

- `base`: The base of the string representation, which must be in the range [-36, -2] or [2, 62].
- `num`: The `MPZ` value to convert.

#### hamdist

Type: `GMP.Z::MPZ -> GMP.Z::MPZ -> Std::U64`

Calculates the Hamming distance between two `MPZ` values.

For the behavior when `lhs` or `rhs` is negative, see the document of `mpz_hamdist` in GMP.

##### Parameters

- `lhs`: The left-hand-side value.
- `rhs`: The right-hand-side value.

#### init_set_si

Type: `Std::I64 -> GMP.Z::MPZ`

Creates a `MPZ` value represented by an I64 value.

##### Parameters

- `val`: The I64 value to represent.

#### init_set_str

Type: `Std::String -> Std::I64 -> Std::Option GMP.Z::MPZ`

Creates a `MPZ` value represented by a string in the given base.

If the string is not a valid representation of an integer in the given base, this function returns none.
See document of `mpz_set_str` in GMP for details.

##### Parameters

- `str`: The string representation of the integer.
- `base`: The base of the string representation.

#### mod

Type: `GMP.Z::MPZ -> GMP.Z::MPZ -> GMP.Z::MPZ`

Calculates the remainder of `n` divided by `d`.

##### Parameters

- `d`: The divisor.
- `n`: The dividend.

#### mpz

Type: `Std::I64 -> GMP.Z::MPZ`

Create a `MPZ` value from an `I64`.

##### Parameters

- `n`: The `I64` value to convert.

#### mul_2exp

Type: `Std::U64 -> GMP.Z::MPZ -> GMP.Z::MPZ`

Multiplication by a power of 2.

#### one

Type: `GMP.Z::MPZ`

The value `1`

#### or

Type: `GMP.Z::MPZ -> GMP.Z::MPZ -> GMP.Z::MPZ`

Logical or operation on two `MPZ` values.

##### Parameters

- `lhs`: The left-hand-side value.
- `rhs`: The right-hand-side value.

#### perfect_power_p

Type: `GMP.Z::MPZ -> Std::Bool`

Checks if `x` is a perfect power, i.e., `x = a^b` for some integers `a` and `b >= 2`.

#### perfect_square_p

Type: `GMP.Z::MPZ -> Std::Bool`

Checks if `x` is a perfect square, i.e., `x = a^2` for some integer `a`.

#### popcount

Type: `GMP.Z::MPZ -> Std::U64`

Counts the number of bits set to `1` in a `MPZ` value.

For the behavior when `n` is negative, see the document of `mpz_popcount` in GMP.

##### Parameters

- `n`: The `MPZ` value to count bits in.

#### pow_ui

Type: `Std::U64 -> GMP.Z::MPZ -> GMP.Z::MPZ`

Calculates `b^e`.

##### Parameters

- `e`: The exponent.
- `b`: The base.

#### powm

Type: `GMP.Z::MPZ -> GMP.Z::MPZ -> GMP.Z::MPZ -> GMP.Z::MPZ`

Calculates `b^e mod m`.

##### Parameters

- `e`: The exponent.
- `m`: The modulus.
- `b`: The base.

#### powm_sec

Type: `GMP.Z::MPZ -> GMP.Z::MPZ -> GMP.Z::MPZ -> GMP.Z::MPZ`

Calculates `b^e mod m`.

This is a secure version of `powm`. For details, see the document of `mpz_powm_sec` in GMP.

##### Parameters

- `e`: The exponent.
- `m`: The modulus.
- `b`: The base.

#### root

Type: `Std::U64 -> GMP.Z::MPZ -> GMP.Z::MPZ`

Calculates the integer part of the n-th root of `x`.

##### Parameters

- `n`: The root to calculate.
- `x`: The value to calculate the root of.

#### root_rem

Type: `Std::U64 -> GMP.Z::MPZ -> (GMP.Z::MPZ, GMP.Z::MPZ)`

Calculates the n-th root of `x` and the remainder.

##### Returns

A pair (root, remainder) such that `x = root^n + remainder`.

##### Parameters

- `n`: The root to calculate.
- `x`: The value to calculate the root of.

#### scan0

Type: `Std::U64 -> GMP.Z::MPZ -> Std::U64`

Scans `0` bit in a `MPZ` value starting from the specified bit.

##### Parameters

- `bit`: The bit to start scanning from.
- `n`: The `MPZ` value to scan.

#### scan1

Type: `Std::U64 -> GMP.Z::MPZ -> Std::U64`

Scans `1` bit in a `MPZ` value starting from the specified bit.

##### Parameters

- `bit`: The bit to start scanning from.
- `n`: The `MPZ` value to scan.

#### set_F64

Type: `Std::F64 -> GMP.Z::MPZ -> GMP.Z::MPZ`

Sets the value of a MPZ to the integer part of a F64 value.

#### set_MPQ

Type: `GMP.Q::MPQ -> GMP.Z::MPZ -> GMP.Z::MPZ`

Sets the value of a MPZ to the integer part of a MPQ value.

##### Parameters

- `q`: The `MPQ` value to set.
- `x`: The `MPZ` value to set.

#### set_U64

Type: `Std::U64 -> GMP.Z::MPZ -> GMP.Z::MPZ`

Sets the value of a MPZ to the given U64 value.

##### Parameters

- `val`: The U64 value to set.
- `x`: The `MPZ` value to set.

#### set_si

Type: `Std::I64 -> GMP.Z::MPZ -> GMP.Z::MPZ`

Sets the value of a MPZ to the given I64 value.

##### Parameters

- `val`: The I64 value to set.
- `x`: The `MPZ` value to set.

#### set_str

Type: `Std::String -> Std::I64 -> GMP.Z::MPZ -> Std::Option GMP.Z::MPZ`

Sets the value of a MPZ to the given string in the given base.

If the string is not a valid representation of an integer in the given base, this function returns none.
See document of `mpz_set_str` in GMP for details.

##### Parameters

- `str`: The string representation of the integer.
- `base`: The base of the string representation.
- `num`: The `MPZ` value to set.

#### setbit

Type: `Std::U64 -> GMP.Z::MPZ -> GMP.Z::MPZ`

Sets the specified bit in a `MPZ` value to `1`.

##### Parameters

- `bit`: The bit to set.
- `n`: The `MPZ` value to modify.

#### sgn

Type: `GMP.Z::MPZ -> Std::I64`

Returns the sign of a `MPZ` value.

##### Returns

- `-1` if `n < 0`
- `0` if `n == 0`
- `1` if `n > 0`

#### sqrt

Type: `GMP.Z::MPZ -> GMP.Z::MPZ`

Calculates the integer part of the root of `x` and the remainder.

##### Parameters

- `x`: The value to calculate the root of.

#### sqrt_rem

Type: `GMP.Z::MPZ -> (GMP.Z::MPZ, GMP.Z::MPZ)`

Calculates the square root of `x` and the remainder.

##### Returns

A pair (root, remainder) such that `x = root^2 + remainder

##### Parameters

- `x`: The value to calculate the square root of.

#### submul

Type: `GMP.Z::MPZ -> GMP.Z::MPZ -> GMP.Z::MPZ -> GMP.Z::MPZ`

Calculates `x - a * b`.

##### Parameters

- `a`
- `b`
- `x`

#### tdiv_q

Type: `GMP.Z::MPZ -> GMP.Z::MPZ -> GMP.Z::MPZ`

Divides `n` by `d` and returns the quotient.

"t" means "truncated", i.e., the quotient is rounded towards zero.

##### Parameters

- `d`: The divisor.
- `n`: The dividend.

#### tdiv_q_2exp

Type: `Std::U64 -> GMP.Z::MPZ -> GMP.Z::MPZ`

Divides `n` by `2^b` and returns the quotient.

"t" means "truncated", i.e., the quotient is rounded towards zero.

##### Parameters

- `bit`: The exponent of 2.
- `n`: The dividend.

#### tdiv_qr

Type: `GMP.Z::MPZ -> GMP.Z::MPZ -> (GMP.Z::MPZ, GMP.Z::MPZ)`

Divides `n` by `d` and returns the quotient and remainder.

"t" means "truncated", i.e., the quotient is rounded towards zero.

##### Parameters

- `d`: The divisor.
- `n`: The dividend.

#### tdiv_r

Type: `GMP.Z::MPZ -> GMP.Z::MPZ -> GMP.Z::MPZ`

Divides `n` by `d` and returns the remainder.

"t" means "truncated", i.e., the quotient is rounded towards zero.

##### Parameters

- `d`: The divisor.
- `n`: The dividend.

#### tdiv_r_2exp

Type: `Std::U64 -> GMP.Z::MPZ -> GMP.Z::MPZ`

Divides `n` by `2^b` and returns the remainder.

"t" means "truncated", i.e., the quotient is rounded towards zero.

##### Parameters

- `bit`: The exponent of 2.
- `n`: The dividend.

#### to_F64

Type: `GMP.Z::MPZ -> Std::F64`

Converts a `MPZ` value to an F64 value.

For details, see the document of `mpz_get_d` in GMP.

#### to_F64_2exp

Type: `GMP.Z::MPZ -> (Std::F64, Std::I64)`

Converts a `MPZ` value to the pair (F64 value, exponent).

For details, see the document of `mpz_get_d_2exp` in GMP.

#### to_I64

Type: `GMP.Z::MPZ -> Std::Option Std::I64`

Converts a `MPZ` value to an I64 value.

If the value is too large to fit in an I64, this function returns none.

#### to_U64

Type: `GMP.Z::MPZ -> Std::Option Std::U64`

Converts a `MPZ` value to an U64 value.

If the value is too large to fit in an U64, this function returns none.

#### tstbit

Type: `Std::U64 -> GMP.Z::MPZ -> Std::Bool`

Checks if the specified bit in a `MPZ` value is set to `1`.

##### Parameters

- `bit`: The bit to check.
- `n`: The `MPZ` value to check.

#### xor

Type: `GMP.Z::MPZ -> GMP.Z::MPZ -> GMP.Z::MPZ`

Logical xor operation on two `MPZ` values.

##### Parameters

- `lhs`: The left-hand-side value.
- `rhs`: The right-hand-side value.

#### zero

Type: `GMP.Z::MPZ`

The value `0`

## Types and aliases

### namespace GMP.Z

#### MPZ

Defined as: `type MPZ = unbox struct { ...fields... }`

Integer type with arbitrary precision.

##### field `_0`

Type: `Std::FFI::Destructor GMP.Z::MPZHandle`

#### MPZHandle

Defined as: `type MPZHandle = Std::Ptr`

A pointer to struct `__mpz_struct`.

## Traits and aliases

## Trait implementations

### impl `GMP.Z::MPZ : Hash::Hash`

### impl `GMP.Z::MPZ : Std::Add`

### impl `GMP.Z::MPZ : Std::Div`

### impl `GMP.Z::MPZ : Std::Eq`

### impl `GMP.Z::MPZ : Std::FromString`

### impl `GMP.Z::MPZ : Std::LessThan`

### impl `GMP.Z::MPZ : Std::LessThanOrEq`

### impl `GMP.Z::MPZ : Std::Mul`

### impl `GMP.Z::MPZ : Std::Neg`

### impl `GMP.Z::MPZ : Std::Rem`

### impl `GMP.Z::MPZ : Std::Sub`

### impl `GMP.Z::MPZ : Std::ToString`