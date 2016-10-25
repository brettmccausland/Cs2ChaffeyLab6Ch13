#ifndef WORKORDER
#define WORKORDER
#include <iostream>
#include <queue>

using namespace std;

class WorkOrder
{
public:
   WorkOrder(int priority, string description);
   int get_priority() const;
   string get_description() const;
private:
   int priority;
   string description;
};

WorkOrder::WorkOrder(int pr, string descr)
{
   priority = pr;
   description = descr;
}

int WorkOrder::get_priority() const
{
   return priority;
}

string WorkOrder::get_description() const
{
   return description;
}

bool operator<(WorkOrder a, WorkOrder b)
{
   return a.get_priority() < b.get_priority();
}


#endif // WORKORDER

