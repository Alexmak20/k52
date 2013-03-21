#ifndef MUTATOR_H_
#define MUTATOR_H_

#include <common/disallow_copy_and_assign.h>

#include <vector>

namespace k52
{
namespace optimize
{

class Mutator
{
public:
    /// Implementation of singleton pattern
    /// @return the only instance of Mutator class
    static Mutator& Instance();
    void MutateBoolArray(double gen_mutation_probability, std::vector<bool>* array);

private:
    Mutator();
    void SetMutationProbability(double gen_mutation_probability);
    void SetGensToSkipNow();

    bool was_probability_set_;
    double mutation_probability_;
    int max_number_of_skipped_gens_;
    int currently_skipped_gens_;
    int gens_to_skip_now_;

    DISALLOW_COPY_AND_ASSIGN(Mutator);
};

}/* namespace optimize */
}/* namespace k52 */

#endif /* MUTATOR_H_ */
