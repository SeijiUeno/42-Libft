### ft_tolower

#### Functionality

The `ft_tolower` function converts a given character to its lowercase equivalent if it's an uppercase letter. It takes an integer (`int c`) representing an ASCII character and returns the lowercase equivalent, if applicable.

#### Input

```c
int ft_tolower(int c)
```

- `c`: An integer representing an ASCII character.

#### Output

The function returns the lowercase equivalent of the input character if it's an uppercase letter. Otherwise, it returns the input character unchanged.

#### Implementation Details

- Checks if the input character is an uppercase letter (`'A'-'Z'`).
- Converts the character to its lowercase equivalent using ASCII arithmetic.

#### Example Usage

```c
int lowercase = ft_tolower('A'); // Returns 'a'
int unchanged = ft_tolower('3'); // Returns '3'
```