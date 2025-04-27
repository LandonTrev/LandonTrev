def main():
    x = int(input("What's X? "))
    print("x squared is", square(x))


def square(n):
    return pow(n, 2)


main()

"""
    Main function to prompt the user for an integer input, calculate its square,
    and display the result.

    Prompts:
        Asks the user to input an integer value for 'x'.

    Output:
     Prints the square of the input integer.
"""