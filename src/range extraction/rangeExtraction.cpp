#include <vector>
#include <string>
#include <sstream>

std::string range_extraction(std::vector<int> numbers) {
  std::ostringstream result;

    for (size_t i = 0; i < numbers.size(); ++i) {
        int start = numbers[i];
        int end = start;

        while (i + 1 < numbers.size() && numbers[i + 1] == end + 1) {
            ++i;
            end = numbers[i];
        }

        if (end - start >= 2) {
            result << start << "-" << end;
        } else {
            result << start;
            if (end != start) {
                result << "," << end;
            }
        }

        if (i < numbers.size() - 1) {
            result << ",";
        }
    }

    return result.str();
}