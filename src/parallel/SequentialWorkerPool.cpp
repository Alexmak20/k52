#include "SequentialWorkerPool.h"

namespace k52
{
namespace parallel
{

SequentialWorkerPool::SequentialWorkerPool(){}

std::vector< ITaskResult::shared_ptr > SequentialWorkerPool::DoTasks (const std::vector<const ITask*>& tasks)
{
	std::vector< ITaskResult::shared_ptr > results(tasks.size());

	for(size_t i = 0; i < tasks.size(); i++)
	{
		results[i] = tasks[i]->Perform();
		_statistics.IncreaseCounted();
	}

	return results;
}

std::vector< WorkerStatistics > SequentialWorkerPool::GetStatistics()
{
	std::vector< WorkerStatistics > statistics(1);
	statistics[0] = _statistics;
	return statistics;
}

} /* parallel */
} /* k52 */