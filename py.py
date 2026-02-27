def text_to_brainfuck(text):
    bf_code = ""
    prev_ascii = 0  # Keep track of previous ASCII value

    for char in text:
        ascii_val = ord(char)  # Get ASCII value of the character
        diff = ascii_val - prev_ascii  # Find the difference from the last character

        if diff > 0:
            bf_code += "+" * diff  # Increase memory cell value
        elif diff < 0:
            bf_code += "-" * abs(diff)  # Decrease memory cell value

        bf_code += "."  # Print the character
        prev_ascii = ascii_val  # Update the previous ASCII value

    return bf_code

# Example usage:
text = "jesan"
brainfuck_code = text_to_brainfuck(text)
print(brainfuck_code)
