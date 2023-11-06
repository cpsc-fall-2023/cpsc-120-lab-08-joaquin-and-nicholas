// Joaquin Alba
// alfonsoalba@csu.fullerton.edu
// @JoaquinAlba1
// Partners: @NicholasPerez1402

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number.\n";

    return 1;
  }

  double sum = 0.0;

  for (int i = 1; i < arguments.size(); ++i) {
    sum += std::stod(arguments[i]);
  }

  double average = sum / static_cast<double>(arguments.size() - 1);

  std::cout << "average = " << average << "\n";

  return 0;
}
