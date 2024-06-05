#include <queue>
#include <set>

class DoubleLinear {
public:
    static int dblLinear(int n) {
        std::priority_queue<int, std::vector<int>, std::greater<int>> pq;
        std::set<int> seen;

        pq.push(1);
        seen.insert(1);
 
        for (int i = 0; i < n; ++i) {
            int current = pq.top();
            pq.pop();

            int y = 2 * current + 1;
            int z = 3 * current + 1;

            if (seen.insert(y).second) {
                pq.push(y);
            }

            if (seen.insert(z).second) {
                pq.push(z);
            }
        }

        return pq.top();
    };
};