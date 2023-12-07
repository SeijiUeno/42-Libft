# ft_len & ft_itoa

## ft_len Function

### Functionality

The `ft_len` function calculates the length of an integer when represented as a string. It takes a `long` integer (`long nbr`) as input and returns the count of digits in the number.

### Input

```c
int ft_len(long nbr)
```

- `nbr`: A `long` integer for which the length needs to be calculated.

### Output

The function returns the count of digits in the given number.

### Implementation Details

- If the number is less than or equal to 0, it converts it to a positive number and increments the count.
- Utilizes a while loop to count the digits in the number by dividing it by 10 iteratively until it reaches 0.

## ft_itoa Function

### Functionality

The `ft_itoa` function converts an integer to a string. It takes an `int` (`int n`) as input and returns a string (`char *`) representation of the integer.

### Input

```c
char *ft_itoa(int n)
```

- `n`: An integer that needs to be converted to a string.

### Output

The function returns a dynamically allocated string containing the converted integer.

### Implementation Details

- Calls `ft_len` to determine the length of the string required for the integer representation.
- Allocates memory for the string using `ft_calloc` and checks for allocation failure.
- Converts the integer to a string by iterating through digits and storing them in reverse order.
- Handles negative numbers by converting to positive and placing a '-' sign at the beginning of the string.

## Edge Cases

### Negative Maximum Integer (`INT_MIN`)

- **Scenario**: Handling `INT_MIN` is essential as its absolute value cannot be represented as a positive integer within the range of an `int`.
- **Expected Handling**: Special handling to ensure the function correctly processes `INT_MIN` without causing overflow issues or unexpected behavior.

### Maximum and Minimum Integer Values

- **Scenario**: Testing the function with the maximum and minimum representable integers (`INT_MAX` and `INT_MIN` respectively).
- **Expected Handling**: Verify that the function handles these extreme values accurately without causing overflow or unexpected behavior.

## Error Handling

### Memory Allocation Failure

- **Scenario**: When allocating memory for the string representation, if memory allocation fails using `ft_calloc`.
- **Expected Handling**: The function should detect the failure and return `NULL` to indicate the inability to allocate memory.

### Unsupported Inputs

- **Scenario**: Passing unsupported types (non-integer types) to the function.
- **Expected Handling**: The function should reject such inputs gracefully, ensuring it only processes valid integers.

These edge cases and error-handling strategies are crucial for ensuring the `ft_itoa` function operates reliably and safely across various scenarios and input conditions.


### Example Usage

```c
char *str1 = ft_itoa(123); // str1 contains "123"
char *str2 = ft_itoa(-456); // str2 contains "-456"
char *str3 = ft_itoa(0); // str3 contains "0"
```