```python
# Number System Converter
# Binary, Octal, Decimal and Hexadecimal

def using_functions():
    print("\n1. Binary to Decimal")
    print("2. Decimal to Binary")
    print("3. Octal to Hexadecimal")
    print("4. Hexadecimal to Octal")
    print("5. Binary to Hexadecimal")

    choice = input("Enter your choice (1-5): ")

    if choice == "1":
        n = input("Enter a binary number: ")
        print("Decimal =", int(n, 2))

    elif choice == "2":
        n = int(input("Enter a decimal number: "))
        print("Binary =", bin(n)[2:])

    elif choice == "3":
        n = input("Enter an octal number: ")
        print("Hexadecimal =", hex(int(n, 8))[2:].upper())

    elif choice == "4":
        n = input("Enter a hexadecimal number: ")
        print("Octal =", oct(int(n, 16))[2:])

    elif choice == "5":
        n = input("Enter a binary number: ")
        print("Hexadecimal =", hex(int(n, 2))[2:].upper())

    else:
        print("Invalid choice!")


def manual_conversion():
    print("\n1. Binary to Decimal")
    print("2. Decimal to Binary")
    print("3. Octal to Decimal")
    print("4. Decimal to Octal")
    print("5. Hexadecimal to Decimal")

    choice = input("Enter your choice (1-5): ")

    if choice == "1":
        binary = input("Enter a binary number: ")
        decimal = 0
        power = 0

        for digit in binary[::-1]:
            decimal = decimal + int(digit) * (2 ** power)
            power = power + 1

        print("Decimal =", decimal)

    elif choice == "2":
        decimal = int(input("Enter a decimal number: "))
        binary = ""

        if decimal == 0:
            binary = "0"

        while decimal > 0:
            remainder = decimal % 2
            binary = str(remainder) + binary
            decimal = decimal // 2

        print("Binary =", binary)

    elif choice == "3":
        octal = input("Enter an octal number: ")
        decimal = 0
        power = 0

        for digit in octal[::-1]:
            decimal = decimal + int(digit) * (8 ** power)
            power = power + 1

        print("Decimal =", decimal)

    elif choice == "4":
        decimal = int(input("Enter a decimal number: "))
        octal = ""

        if decimal == 0:
            octal = "0"

        while decimal > 0:
            remainder = decimal % 8
            octal = str(remainder) + octal
            decimal = decimal // 8

        print("Octal =", octal)

    elif choice == "5":
        hexadecimal = input("Enter a hexadecimal number: ").upper()
        digits = "0123456789ABCDEF"
        decimal = 0
        power = 0

        for digit in hexadecimal[::-1]:
            value = digits.index(digit)
            decimal = decimal + value * (16 ** power)
            power = power + 1

        print("Decimal =", decimal)

    else:
        print("Invalid choice!")


print("===== NUMBER SYSTEM CONVERTER =====")
print("1. Using Built-in Functions")
print("2. Manual Conversion")

method = input("Choose conversion method (1 or 2): ")

if method == "1":
    using_functions()

elif method == "2":
    manual_conversion()

else:
    print("Invalid method selected!")
```
