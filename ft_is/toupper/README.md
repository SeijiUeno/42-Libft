### ft_toupper

#### Functionality

The `ft_toupper` function converts a given character to its uppercase equivalent if it's a lowercase letter. It takes an integer (`int c`) representing an ASCII character and returns the uppercase equivalent, if applicable.

#### Input

```c
int ft_toupper(int c)
```

- `c`: An integer representing an ASCII character.

#### Output

The function returns the uppercase equivalent of the input character if it's a lowercase letter. Otherwise, it returns the input character unchanged.

#### Implementation Details

- Checks if the input character is a lowercase letter (`'a'-'z'`).
- Converts the character to its uppercase equivalent using ASCII arithmetic.

#### Example Usage

```c
int uppercase = ft_toupper('b'); // Returns 'B'
int unchanged = ft_toupper('9'); // Returns '9'
```