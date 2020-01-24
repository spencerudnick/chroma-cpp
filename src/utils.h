#include <vector>

namespace chroma {
    namespace utils {
        template<typename V>
        V limit(V value, V lower, V upper) {
            return value < lower ? lower : value > upper ? upper : value;
        }

        template<typename V>
        std::vector<V> limit(std::vector<V> values, V lower, V upper) {
            std::vector<V> limitedValues;
            values.for_each([lower, upper](V value) {
                limitedValues.push_back(limit(value, lower, upper));
            });
            return limitedValues;
        }
    }
}
