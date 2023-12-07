# ft_isalnum

## Functionality

The `ft_isalnum` function checks whether a given character is alphanumeric or not. It takes an integer (`int c`) as input and returns an integer value (`1` for alphanumeric characters and `0` for non-alphanumeric characters).

## Input

The `ft_isalnum` function takes a single argument:
```c
int	ft_isalnum(int c)
```
- `c`: An integer representing a character in ASCII.

## Output

The function returns `1` if the character is alphanumeric (a letter or a digit), otherwise `0`.

## Implementation Details

- Checks if the character is a digit (0-9) or an alphabet (lowercase or uppercase).
- Utilizes ASCII values to determine alphanumeric characters.

## Example Usage

```c
int result1 = ft_isalnum('a'); // Returns 1 (alphanumeric)
int result2 = ft_isalnum('5'); // Returns 1 (alphanumeric)
int result3 = ft_isalnum('*'); // Returns 0 (non-alphanumeric)
```
