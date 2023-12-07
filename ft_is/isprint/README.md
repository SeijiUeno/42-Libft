# ft_isprint

## Functionality

The `ft_isprint` function checks whether a given character is a printable character or not. It takes an integer (`int c`) as input and returns an integer value (`1` for printable characters and `0` for non-printable characters).

## Input

```c
int	ft_isprint(int c)
```

- `c`: An integer representing a character in ASCII.

## Output

The function returns `1` if the character is a printable character (ASCII range 32-126), otherwise `0`.

## Implementation Details

- Verifies if the character falls within the printable ASCII character range (32-126).

## Example Usage

```c
int result1 = ft_isprint('A'); // Returns 1 (printable)
int result2 = ft_isprint('\n'); // Returns 0 (non-printable)
int result3 = ft_isprint('5'); // Returns 1 (printable)
```