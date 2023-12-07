# ft_isascii

## Functionality

The `ft_isascii` function checks whether a given character is a valid ASCII character or not. It takes an integer (`int c`) as input and returns an integer value (`1` for valid ASCII characters and `0` for non-ASCII characters).

## Input

```c
int	ft_isascii(int c)
```

- `c`: An integer representing a character.

## Output

The function returns `1` if the character is a valid ASCII character (0-127), otherwise `0`.

## Implementation Details

- Verifies if the character falls within the range of ASCII characters (0-127).

## Example Usage

```c
int result1 = ft_isascii('a'); // Returns 1 (ASCII)
int result2 = ft_isascii(200); // Returns 0 (non-ASCII)
int result3 = ft_isascii('\n'); // Returns 1 (ASCII)
```