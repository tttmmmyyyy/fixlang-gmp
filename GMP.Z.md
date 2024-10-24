# `module GMP.Z`

# Types and aliases

## `namespace GMP.Z`

### `type MPZ = unbox struct { ...fields... }`

Integer type with arbitrary precision.

#### field `_0 : Std::FFI::Destructor GMP.Z::MPZStruct`

### `type MPZStruct = box struct { ...fields... }`

An equivalent type to `__mpz_struct`.

#### field `_mp_alloc : Std::I32`

#### field `_mp_size : Std::I32`

#### field `_mp_d : Std::Ptr`

# Traits and aliases

# Trait implementations

### `impl GMP.Z::MPZ : Hash::Hash`

### `impl GMP.Z::MPZ : Std::Add`

### `impl GMP.Z::MPZ : Std::Eq`

### `impl GMP.Z::MPZ : Std::Mul`

### `impl GMP.Z::MPZ : Std::Sub`

### `impl GMP.Z::MPZ : Std::ToString`

# Values

## `namespace GMP.Z::MPZ`

### `@_0 : GMP.Z::MPZ -> Std::FFI::Destructor GMP.Z::MPZStruct`

Retrieves the field `_0` from a value of `MPZ`.

### `_binary_op : ((Std::Ptr, Std::Ptr, Std::Ptr) -> Std::IO ()) -> GMP.Z::MPZ -> GMP.Z::MPZ -> GMP.Z::MPZ`

Apply a binary operation of GMP (taking (out, lhs, rhs) as arguments) to two `MPZ` values.

### `_borrow : (Std::Ptr -> a) -> GMP.Z::MPZ -> a`

Performs an action with a borrowed pointer to the internal data.

### `_init : GMP.Z::MPZ`

Initialize a new MPZ.

### `_init_by : (Std::Ptr -> Std::IO a) -> (GMP.Z::MPZ, a)`

Initialize a new MPZ using specified initialization action.

### `_mutate : (Std::Ptr -> Std::IO a) -> GMP.Z::MPZ -> (GMP.Z::MPZ, a)`

Acts on the internal data of the MPZ, which may mutate the MPZ value, and returns the mutated MPZ paired with the result of the action.

### `_swap_pair : (a, b) -> (b, a)`

Swap the elements of a pair.

### `act__0 : [f : Std::Functor] (Std::FFI::Destructor GMP.Z::MPZStruct -> f (Std::FFI::Destructor GMP.Z::MPZStruct)) -> GMP.Z::MPZ -> f GMP.Z::MPZ`

Updates a value of `MPZ` by applying a functorial action to field `_0`.

### `from_I64 : Std::I64 -> GMP.Z::MPZ`

Creats a `MPZ` value represented by an I64 value.

### `from_U64 : Std::U64 -> GMP.Z::MPZ`

Creates a `MPZ` value represented by an U64 value.

### `from_decimal : Std::String -> Std::Option GMP.Z::MPZ`

Creates a `MPZ` value represented by a decimal string.

If the string is not a valid representation of an integer in the given base, this function returns none.

### `from_string : Std::String -> Std::I64 -> Std::Option GMP.Z::MPZ`

Creates a `MPZ` value represented by a string in the given base.

If the string is not a valid representation of an integer in the given base, this function returns none.
See document of `mpz_set_str` in GMP for details.

### `mod__0 : (Std::FFI::Destructor GMP.Z::MPZStruct -> Std::FFI::Destructor GMP.Z::MPZStruct) -> GMP.Z::MPZ -> GMP.Z::MPZ`

Updates a value of `MPZ` by applying a function to field `_0`.

### `set_I64 : Std::I64 -> GMP.Z::MPZ -> GMP.Z::MPZ`

Sets the value of a MPZ to the given I64 value.

### `set_U64 : Std::U64 -> GMP.Z::MPZ -> GMP.Z::MPZ`

Sets the value of a MPZ to the given U64 value.

### `set__0 : Std::FFI::Destructor GMP.Z::MPZStruct -> GMP.Z::MPZ -> GMP.Z::MPZ`

Updates a value of `MPZ` by setting field `_0` to a specified one.

### `set_string : Std::String -> Std::I64 -> GMP.Z::MPZ -> Std::Option GMP.Z::MPZ`

Sets the value of a MPZ to the given string in the given base.

If the string is not a valid representation of an integer in the given base, this function returns none.
See document of `mpz_set_str` in GMP for details.

### `to_I64 : GMP.Z::MPZ -> Std::Option Std::I64`

Converts a `MPZ` value to an I64 value.

If the value is too large to fit in an I64, this function returns none.

### `to_U64 : GMP.Z::MPZ -> Std::Option Std::U64`

Converts a `MPZ` value to an U64 value.

If the value is too large to fit in an U64, this function returns none.

### `zero : GMP.Z::MPZ`

The zero value.

## `namespace GMP.Z::MPZStruct`

### `@_mp_alloc : GMP.Z::MPZStruct -> Std::I32`

Retrieves the field `_mp_alloc` from a value of `MPZStruct`.

### `@_mp_d : GMP.Z::MPZStruct -> Std::Ptr`

Retrieves the field `_mp_d` from a value of `MPZStruct`.

### `@_mp_size : GMP.Z::MPZStruct -> Std::I32`

Retrieves the field `_mp_size` from a value of `MPZStruct`.

### `_constructor : Std::Ptr -> Std::IO ()`

Calls `mpz_init`.

### `_destructor : GMP.Z::MPZStruct -> Std::IO GMP.Z::MPZStruct`

Calls `mpz_clear`.

### `_init_by : (Std::Ptr -> Std::IO a) -> GMP.Z::MPZStruct -> (GMP.Z::MPZStruct, a)`

Acts on the internal data of the MPZ, which initializes and sets the MPZ value, and returns the MPZ paired with the result of the action.

### `_mutate : (Std::Ptr -> Std::IO a) -> GMP.Z::MPZStruct -> (GMP.Z::MPZStruct, a)`

Acts on the internal data of the MPZ, which may mutate the MPZ value, and returns the mutated MPZ paired with the result of the action.

### `_null : GMP.Z::MPZStruct`

### `act__mp_alloc : [f : Std::Functor] (Std::I32 -> f Std::I32) -> GMP.Z::MPZStruct -> f GMP.Z::MPZStruct`

Updates a value of `MPZStruct` by applying a functorial action to field `_mp_alloc`.

### `act__mp_d : [f : Std::Functor] (Std::Ptr -> f Std::Ptr) -> GMP.Z::MPZStruct -> f GMP.Z::MPZStruct`

Updates a value of `MPZStruct` by applying a functorial action to field `_mp_d`.

### `act__mp_size : [f : Std::Functor] (Std::I32 -> f Std::I32) -> GMP.Z::MPZStruct -> f GMP.Z::MPZStruct`

Updates a value of `MPZStruct` by applying a functorial action to field `_mp_size`.

### `mod__mp_alloc : (Std::I32 -> Std::I32) -> GMP.Z::MPZStruct -> GMP.Z::MPZStruct`

Updates a value of `MPZStruct` by applying a function to field `_mp_alloc`.

### `mod__mp_d : (Std::Ptr -> Std::Ptr) -> GMP.Z::MPZStruct -> GMP.Z::MPZStruct`

Updates a value of `MPZStruct` by applying a function to field `_mp_d`.

### `mod__mp_size : (Std::I32 -> Std::I32) -> GMP.Z::MPZStruct -> GMP.Z::MPZStruct`

Updates a value of `MPZStruct` by applying a function to field `_mp_size`.

### `set__mp_alloc : Std::I32 -> GMP.Z::MPZStruct -> GMP.Z::MPZStruct`

Updates a value of `MPZStruct` by setting field `_mp_alloc` to a specified one.

### `set__mp_d : Std::Ptr -> GMP.Z::MPZStruct -> GMP.Z::MPZStruct`

Updates a value of `MPZStruct` by setting field `_mp_d` to a specified one.

### `set__mp_size : Std::I32 -> GMP.Z::MPZStruct -> GMP.Z::MPZStruct`

Updates a value of `MPZStruct` by setting field `_mp_size` to a specified one.