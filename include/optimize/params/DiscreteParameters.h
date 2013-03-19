/*
 * DiscreteParameters.h
 *
 *  Created on: Jan 31, 2013
 *      Author: pavel
 */

#ifndef DISCRETEPARAMETERS_H_
#define DISCRETEPARAMETERS_H_

#include <optimize/params/IDiscreteParameters.h>

namespace k52
{
namespace optimize
{

class DiscreteParameters : public IDiscreteParameters
{
public:
	typedef boost::shared_ptr<DiscreteParameters> shared_ptr;

	virtual ~DiscreteParameters() {}

	virtual void setChromosome(std::vector<bool>::iterator from, std::vector<bool>::iterator to) const = 0;

	virtual void setFromChromosome(std::vector<bool>::const_iterator from, std::vector<bool>::const_iterator to) = 0;

	virtual size_t getChromosomeSize() const = 0;

	virtual IDiscreteParameters* Clone() const = 0;

#ifdef BUILD_WITH_MPI
	virtual void send(boost::mpi::communicator* communicator, int target) const;

	virtual void receive(boost::mpi::communicator* communicator);
#endif
};

}/* namespace optimize */
}/* namespace k52 */

#endif /* DISCRETEPARAMETERS_H_ */