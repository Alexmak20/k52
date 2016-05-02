#ifndef ROSENBROCK_METHOD_H_
#define ROSENBROCK_METHOD_H_

#include <boost/shared_ptr.hpp>


#include <k52/optimization/continuous_optimizer.h>

namespace k52
{
namespace optimization
{

class RosenbrockMethod : public ContinuousOptimizer
{
public:
	RosenbrockMethod();

/// Creates deep clone of an object with resource allocation. See ICloneable
/// @return deep clone of an object
virtual RosenbrockMethod* Clone() const;
virtual std::string get_name() const;


protected:
	virtual std::vector<double> FindOptimalParameters(const std::vector<double>& initial_parameters);
};
}
}

#endif