#include <arcana/threading/task.h>

#include <iostream>

int main()
{
    std::cout << "Hello, world!" << std::endl;

    arcana::task_from_result<std::exception_ptr>(0).then(arcana::inline_scheduler, arcana::cancellation::none(), [](int)
    {
        std::cout << "Here's a continuation." << std::endl;
    });
    return 0;
}
