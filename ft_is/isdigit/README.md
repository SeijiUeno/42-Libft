# ft_isdigit

## Functionality

The `ft_isdigit` function checks whether a given character is a digit or not. It takes an integer (`int c`) as input and returns an integer value (`1` for digit characters and `0` for non-digit characters).

## Input

```c
int	ft_isdigit(int c)
```

- `c`: An integer representing a character in ASCII.

## Output

The function returns `1` if the character is a digit (0-9), otherwise `0`.

## Implementation Details

- Checks if the character falls within the ASCII range of digits (0-9).

## Example Usage

```c
int result1 = ft_isdigit('3'); // Returns 1 (digit)
int result2 = ft_isdigit('a'); // Returns 0 (non-digit)
int result3 = ft_isdigit('9'); // Returns 1 (digit)
```