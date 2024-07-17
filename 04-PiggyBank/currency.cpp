#include <iostream>

int main() {
  double pesos, reais, soles;

  std::cout << "Enter number of Columbian Pesos:\n";
  std::cin >> pesos;
  std::cout << "Enter number of Brazilian Reais:\n";
  std::cin >> reais;
  std::cout << "Enter number of Peruvian Soles:\n";
  std::cin >> soles; 

  //1 Colombian Peso equals 0.00025 USD
  double pesosToUSD = pesos * 0.00025;
  //1 Brazilian Real equals 0.20 USD
  double reaisToUSD = reais * 0.20;
  //1 Sol equals 0.27 USD
  double solesToUSD = soles * 0.27;

  double dollars = pesosToUSD + reaisToUSD + solesToUSD;

  std::cout << "US Dollars = $" << dollars << "\n";
}

