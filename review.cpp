#include <iostream>
#include <vector>

int main() {
  int sum_result = 0;
  int sum_product = 1;
  int sum_even_numbers = 0;
  int product_odd_numbers = 1;

  std::vector<int> number_vector = {2, 4, 3, 6, 1, 9};
  for (int i = 0; i < number_vector.size(); i++) {
    sum_result += number_vector[i];
    sum_product *= number_vector[i];
    if (number_vector[i] % 2 == 0) {
      sum_even_numbers += number_vector[i];
    }
    if (number_vector[i] % 2 != 0) {
      product_odd_numbers *= number_vector[i];
    }
  }

  std::cout << "Sum of numbers is " << sum_result << "\n";
  std::cout << "Product of odd numbers is " << sum_product << "\n";
  std::cout << "Sum of even numbers is " << sum_even_numbers << "\n";
  std::cout << "Product of odd numbers is " << product_odd_numbers;
}