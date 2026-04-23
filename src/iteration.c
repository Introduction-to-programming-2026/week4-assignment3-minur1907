def main():
    # 1 & 2. Ask for a positive integer and validate
    while True:
        try:
            n = int(input("Input: "))
            if n >= 1:
                break
            # If n < 1, the loop continues (asking again)
        except ValueError:
            # Handles non-integer inputs to prevent crashing
            continue

    print("\nOutput:")
    # 3. Print the half-pyramid
    # Outer loop for each row
    for i in range(1, n + 1):
        # Inner loop to print '#' symbols based on current row number
        for j in range(i):
            print("#", end="")
        # Move to the next line after finishing a row
        print()

if __name__ == "__main__":
    main()
