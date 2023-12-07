# ft_atoi

## Functionality

The `ft_atoi` function converts a string representation of an integer to its actual integer value. It takes a constant character pointer (`const char *nptr`) as input and returns an integer value (`int`).

## Input

The `ft_atoi` function takes a single argument:
```c
int	ft_atoi(const char *nptr)
```
- `nptr`: A pointer to a null-terminated string containing the integer representation.

## Output

The function returns the integer value represented by the string in `nptr`. If the string is not a valid integer representation, the function's behavior is undefined.

## Edge Cases

- **Leading Whitespace**: The function skips leading whitespace characters (`' '`, `\f`, `\n`, `\r`, `\v`, and `\t`) before parsing the actual integer.
- **Sign Character**: Handles both positive and negative numbers. If the string starts with a `+` or `-` sign, it interprets the number accordingly.
- **Overflow**: If the parsed integer value exceeds the maximum representable value of an `int`, the function's behavior is undefined.

## Error Handling

The `ft_atoi` function does not perform specific error handling. It's the responsibility of the calling code to ensure the provided string is a valid integer representation and to handle potential overflow situations.

## Implementation Details

- Uses a helper function, `ft_isspace`, to identify whitespace characters.
- Iterates through the string, accumulating digits into an integer variable.
- Uses a flag to track the sign of the number.
- Stops parsing once it encounters a non-digit character.

## Example Usage

```c
char str1[] = "123";
char str2[] = "-456";
char str3[] = "abc";

int num1 = ft_atoi(str1); // Returns 123
int num2 = ft_atoi(str2); // Returns -456
int num3 = ft_atoi(str3); // Behavior is undefined
```
