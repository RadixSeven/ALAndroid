#include <string>
#include <vector>

using Chem = int;
using Offset = int;

class Rule {
	template<typename T>
	using vector=std::vector<T>;

    vector<Offset> offsets;
    vector<Chem> inputs;
    vector<int> weights;
    int weight_sum;
    vector<vector<Chem>> outputs;

    /// Return true if the rule was successfully applied at \a index
    template<typename T>
    bool apply(vector<Chem>& , int index) 
};


struct World {
	template<typename T>
	using vector=std::vector<T>;

    vector<Rule> rules;	
};