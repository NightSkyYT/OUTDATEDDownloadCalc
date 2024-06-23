def read_numbers_from_file(filename):
    try:
        with open(filename, 'r') as file:
            content = file.readlines()
            numbers = [int(num) for line in content for num in line.split()]
    except FileNotFoundError:
        numbers = []
    return numbers


def write_numbers_to_file(filename, numbers):
    with open(filename, 'w') as file:
        lines = ' '.join(map(str, numbers))
        file.write(lines + '\n')


def input_numbers():
    numbers = []
    while True:
        user_input = input("Enter a number (or 'stop' to finish): ")
        if user_input.lower() == 'stop':
            break
        try:
            number = int(user_input)
            numbers.append(number)
        except ValueError:
            print("Please enter a valid number.")
    return numbers


def main():
    filename = 'file.txt'

    # Optionally: Read the current numbers from the file
    current_numbers = read_numbers_from_file(filename)
    print(f"Current numbers in {filename}: {current_numbers}")

    # Manually input the new numbers
    new_numbers = input_numbers()
    print(f"New numbers: {new_numbers}")

    # Write the new numbers to the file
    write_numbers_to_file(filename, new_numbers)
    print(f"New numbers have been saved to {filename}.")


if __name__ == "__main__":
    main()

