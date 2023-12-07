# ft_isalpha

## Functionality

The `ft_isalpha` function checks whether a given character is an alphabetic character or not. It takes an integer (`int c`) as input and returns an integer value (`1` for alphabetic characters and `0` for non-alphabetic characters).

## Input

```c
int	ft_isalpha(int c)
```

- `c`: An integer representing a character in ASCII.

## Output

The function returns `1` if the character is an alphabetic character (uppercase or lowercase), otherwise `0`.

## Implementation Details

- Checks if the character is an alphabet (lowercase or uppercase) using ASCII values.
- Considers only alphabetic characters (A-Z, a-z).

## Example Usage

```c
int result1 = ft_isalpha('a'); // Returns 1 (alphabetic)
int result2 = ft_isalpha('5'); // Returns 0 (non-alphabetic)
int result3 = ft_isalpha('Z'); // Returns 1 (alphabetic)
```