

---

# Credit Card Validator

## Overview

This program validates credit card numbers using the Luhn algorithm, a simple checksum formula used to validate various identification numbers. It determines the validity of a card number and identifies the card brand (VISA, AMEX, or MASTERCARD) based on the card number's length and starting digits.

## Features

- Credit Card Validation: Uses the Luhn algorithm to check if the card number is valid.
- Card Brand Identification: Identifies if the card is a VISA, AMEX, or MASTERCARD based on the number's prefix and length.

## Usage

1. Compile the Program:
  
  
   make card_validator
   
2. Run the Program:
  
  
   ./card_validator
   
   
   You will be prompted to enter a credit card number.

3. Enter Credit Card Number:
   After entering the credit card number, the program will output the card type (VISA, AMEX, MASTERCARD) or "INVALID" if the number does not meet validation criteria.

## Example

For a valid VISA card number with 16 digits (e.g., 4003600000000014):

./card_validator
Enter your credit card number : 4003600000000014
VISA
For a valid AMEX card number with 15 digits (e.g., 378282246310005):

./card_validator
Enter your credit card number : 378282246310005
AMEX
For a valid MASTERCARD number with 16 digits (e.g., 5105105105105100):

./card_validator
Enter your credit card number : 5105105105105100
MASTERCARD
For an invalid card number:

./card_validator
Enter your credit card number : 123456789012345
INVALID
## Code Explanation

- Luhn’s Algorithm: 
  - Adds all digits of the credit card number. 
  - Doubles every second digit from the right and adds the individual digits of the result.
  - Checks if the total sum is divisible by 10 to determine validity.

- Card Brand Identification:
  - Checks the number's prefix and length to determine the card brand.

## License

This project is licensed under the MIT License. See the LICENSE file for details.

## Author

Ye Yint Aung

---

Feel free to adjust the example numbers or any other details as needed!
