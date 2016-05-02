#include "rosenbrock_Method.h"

#include <k52/optimization/params/i_continuous_parameters.h>

using ::std::vector;

namespace k52
{
namespace optimization
{

RosenbrockMethod::RosenbrockMethod()
{
}


RosenbrockMethod* RosenbrockMethod::Clone() const
{
	return new RosenbrockMethod();
}


std::string RosenbrockMethod::get_name() const
{
	return "Rosenbrock Method";
}


vector<double> RosenbrockMethod::FindOptimalParameters(const vector<double>& initial_parameters)
{
	return initial_parameters;
}
}
}