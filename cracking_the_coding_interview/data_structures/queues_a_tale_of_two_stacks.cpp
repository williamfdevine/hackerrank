/**
    @file queues_a_tale_of_two_stacks.cpp
*/

#include <stack>
#include <iostream>
#include <exception>

enum CMD_T
{
    PUSH = 1,
    POP = 2,
    FRONT = 3
};

class Queue
{

public:

    void push(int val)
    {
        stack_new_top_.push(val);
    }

    void pop(void)
    {
        refreshQueue();
        stack_old_top_.pop();
    }

    int front(void)
    {
        refreshQueue();
        return stack_old_top_.top();
    }

private:

    std::stack<int> stack_new_top_;
    std::stack<int> stack_old_top_;

    void refreshQueue(void)
    {
        if(stack_new_top_.empty() && stack_old_top_.empty())
        {
            throw std::runtime_error("QUEUE EMPTY");
        }

        if(stack_old_top_.empty())
        {
            while(!stack_new_top_.empty())
            {
                stack_old_top_.push(stack_new_top_.top());
                stack_new_top_.pop();
            }
        }
    }

};

int main()
{
    Queue queue;
    int num_cmds = 0;
    std::cin >> num_cmds;

    for(int i = 0; i < num_cmds; i++)
    {
        int cmd = 0;
        std::cin >> cmd;

        switch((CMD_T)cmd)
        {
            case PUSH:
            {
                int to_push = 0;
                std::cin >> to_push;
                queue.push(to_push);
            }
            break;

            case POP:
            {
                queue.pop();
            }
            break;

            case FRONT:
            {
                std::cout << queue.front() << std::endl;
            }
            break;

            default:
            {
                throw std::runtime_error("INVALID CMD");
            }
        }
    }

    return 0;
}