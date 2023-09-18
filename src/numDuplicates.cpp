#include <iostream>
#include <vector>

int numDuplicates(std::vector<int>& numbers) {
   int count = 0;
   for (int i = 0; i < numbers.size(); i++) {
      for (int j = i + 1; j < numbers.size(); j++) {
         if (numbers[i] == numbers[j]) {
            count++;
            break;
         }
      }
   }
   return count;
}

int numDuplicatesSorted(std::vector<int>& numbers) {
   int count = 0;
   for (int i = 0; i < numbers.size() - 1; i++) {
      if (numbers[i] == numbers[i + 1]) {
         count++;
      }
   }
   return count;
}

int main() {
   std::vector<int> numbers = { 9, 3, 4, 2, 1, 1, 2, 8, 8, 22, 55, 49, 23, 11, 7, 1, 0 };
   std::vector<int> sortedNumbers = { 0, 1, 1, 1, 2, 2, 3, 4, 7, 8, 8, 9, 11, 22, 23, 49, 55 };

   std::cout << "Number of duplicates = " << numDuplicates(numbers) << std::endl;
   std::cout << "Number of duplicates = " << numDuplicatesSorted(sortedNumbers) << std::endl;

   return 0;
}
