#ifndef MODEL_VARIABLE_H
#define MODEL_VARIABLE_H

#include <tuple>
#include <map>
#include <exception>
#include <stdexcept>
using namespace std;

class Model_Variable
{
public:
    Model_Variable();
    enum Page {
        CONTRADICTION_FOUND,
        SOLUTION_FOUND,
        KEEP_GOING,
        CANNOT_PROCEED
    };
     Page process_model(bool verbose = true);
private:
     enum State : int {
         UNKNOWN = -3,
         WHITE = -2,
         BLACK = -1
     };
    std::tuple<std::pair<int,int>, int> dots;
    class Region {
    public:
        Region(const State state, std::tuple<std::pair<int,int>, int> dot)
            : m_state(state), unknowns(dot) {

            if (state == UNKNOWN) {
                throw logic_error("LOGIC ERROR: Grid::Region::Region() - state must be known!");
            }
            // افزودن یک جفت جدید به تاپل
            dot = std::make_tuple(std::make_pair(std::get<0>(dot).first, std::get<0>(dot).second), 4);
                    }
        bool white() const {
            return m_state == WHITE;
        }

        bool black() const {
            return m_state == BLACK;
        }
    private:
         State m_state;
        std::tuple<std::pair<int,int>, int> unknowns;
    };
};

#endif // MODEL_VARIABLE_H
