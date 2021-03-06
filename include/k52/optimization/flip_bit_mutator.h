#ifndef FLIP_BIT_MUTATOR_H_
#define FLIP_BIT_MUTATOR_H_

#include <k52/common/disallow_copy_and_assign.h>
#include <k52/optimization/i_mutator.h>
#include <k52/optimization/gen_mutator_base.h>

namespace k52
{
namespace optimization
{

class FlipBitMutator : public GenMutatorBase
{
public:
    FlipBitMutator(double gen_mutation_probability);

protected:
    bool ShouldMutateCurrentGen();
    void AfterGenProcessed(bool wasMutated);

private:
    void SetGensToSkipNow();

    double mutation_probability_;
    int max_number_of_skipped_gens_;
    int currently_skipped_gens_;
    int gens_to_skip_now_;

    DISALLOW_COPY_AND_ASSIGN(FlipBitMutator);
};

}/* namespace optimization */
}/* namespace k52 */

#endif /* FLIP_BIT_MUTATOR_H_ */
