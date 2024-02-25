#!/usr/bin/python3
""" FizzBuzz
"""
import sys


def fizzbuzz(n):
    """
    FizzBuzz function prints numbers from 1 to n separated by a space.

    - For multiples of three print "Fizz" instead of the number and for
      multiples of five print "Buzz".
    - For numbers which are multiples of both three and five print "FizzBuzz".

    Args:
        n (int): The upper limit of the range.

    Returns:
        None
    """
    if not isinstance(n, int) or n < 1:
        print("Invalid input: n must be a positive integer.")
        return

    tmp_result = []
    for i in range(1, n + 1):
        if (i % 3) == 0 and (i % 5) == 0:
            tmp_result.append("FizzBuzz")
        elif (i % 3) == 0:
            tmp_result.append("Fizz")
        elif (i % 5) == 0:
            tmp_result.append("Buzz")
        else:
            tmp_result.append(str(i))
    print(" ".join(tmp_result))


if __name__ == '__main__':
    if len(sys.argv) != 2:
        print("Usage: ./0-fizzbuzz.py <number>")
        print("Example: ./0-fizzbuzz.py 89")
        sys.exit(1)

    number = sys.argv[1]
    fizzbuzz(int(number))

