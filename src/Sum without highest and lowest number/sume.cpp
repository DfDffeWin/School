#include <vector>
#include <algorithm>

int sum(const std::vector<int> arr)
{
    // Check for input validation
    if (arr.empty() || arr.size() == 1) {
        return 0;
    }

    // Copy the array to not modify the original
    std::vector<int> arrCopy = arr;

    // Remove the highest and lowest elements
    arrCopy.erase(std::max_element(arrCopy.begin(), arrCopy.end()));
    arrCopy.erase(std::min_element(arrCopy.begin(), arrCopy.end()));

    // Calculate the sum of the remaining elements
    int totalSum = 0;
    for (int num : arrCopy) {
        totalSum += num;
    }

    return totalSum;
}

// From CodeWars )