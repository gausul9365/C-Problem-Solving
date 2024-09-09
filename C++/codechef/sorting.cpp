#include <vector>
#include <algorithm>

int main() {
    std::vector<int> arrivals = {10, 5, 15, 8};
    std::vector<int> departures = {12, 7, 18, 11};

    std::sort(arrivals.begin(), arrivals.end());
    std::sort(departures.begin(), departures.end());

    
    return 0;
}