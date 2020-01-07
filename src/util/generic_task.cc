/*MT*
*/

#include "generic_task.h"

GenericTask::GenericTask(task_owner_t taskOwner)
{
    valid = true;
    cancellable = true;
    taskType = Invalid;
    taskID = 0;
    parentTaskID = 0;
    this->taskOwner = taskOwner;
}
