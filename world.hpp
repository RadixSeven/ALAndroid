#include <string>
#include <vector>

using Offset = int;
using Chem = unsigned;

/// An unsigned integer weight - must be greater than 0
class Weight {
    unsigned w;
public:
    /// Initialize the weight from an unsigned integer. 0 becomes 1.
    Weight(unsigned w):w{w==0?1:w} {}
    operator unsigned(){ return w; }
};

class WeightedChemList {
    template<typename T>
    using vector=std::vector<T>;

    vector<Chem> chems;
    vector<Weight> weights;
    unsigned weight_sum;
public:
    WeightedChemList(): chems{}, weights{}, weight_sum{0} {}

    void push_back(Chem c, Weight w){
	chems.push_back(c);
	weights.push_back(w);
	weight_sum += w;
    }
};

class Rule {
	template<typename T>
	using vector=std::vector<T>;

    vector<Offset> offsets;
    vector<Chem> inputs;
    unsigned weight_sum;
    vector<unsigned> weights;
    vector<vector<Chem> > outputs;
public:
    /// Apply the rule was successfully applied at \a index
    template<typename T>
    void apply(vector<Chem>& in, vector<WeightedChemList>& out, int index){
    }
};


struct World {
	template<typename T>
	using vector=std::vector<T>;

    vector<Rule> rules;
};
