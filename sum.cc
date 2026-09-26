/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Hdez. Aceituno
 * @date Sep 26 2026
 * @brief Add unknown amount of real values
 */

#include <iostream>

int main() {
  double sum{0.0};
  double entry{0.0};
  while (std::cin >> entry) {  // while another value can be read
    sum += entry;
  }
  std::cout << "Sum: " << sum << std::endl;
  return 0;
}