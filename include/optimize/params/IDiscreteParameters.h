/*
 * IDiscreteParameters.h
 *
 *  Created on: May 20, 2012
 *      Author: feanor
 */

#ifndef IDISCRETEPARAMETERS_H_
#define IDISCRETEPARAMETERS_H_

#include "IParameters.h"

namespace k52
{
namespace optimize
{

class IDiscreteParameters: public IParameters, IConvertableToChromosome
{
public:
	typedef boost::shared_ptr<IDiscreteParameters> shared_ptr;

	virtual ~IDiscreteParameters() {}

	virtual void setChromosome(std::vector<bool>::iterator from, std::vector<bool>::iterator to) const = 0;

	virtual void setFromChromosome(std::vector<bool>::const_iterator from, std::vector<bool>::const_iterator to) = 0;

	virtual size_t getChromosomeSize() const = 0;

	virtual IDiscreteParameters* Clone() const = 0;

#ifdef BUILD_WITH_MPI
	virtual void send(boost::mpi::communicator* communicator, int target) const = 0;

	virtual void receive(boost::mpi::communicator* communicator) = 0;
#endif
};

}/* namespace optimize */
}/* namespace k52 */

#endif /* IDISCRETEPARAMETERS_H_ */