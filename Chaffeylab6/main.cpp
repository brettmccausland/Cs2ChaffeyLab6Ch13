#include <iostream>
#include"binarytree.h"
#include"heap.h"
using namespace std;

// Book code
void bT();
void Ht();
void workorder();
void TelephoneD();
//==============
void Exercise13_2();
void Exercise13_3();
void Exercise13_4();
void Exercise13_5();
int main()
{
    //cout << "Hello World!" << endl;
    system("clear");
    bT();
    return 0;
}
void Exercise13_2()
{
  //Write functions
  //set<int> set_union(set<int> a, set<int> b)
  //set<int> intersection(set<int> a, set<int> b)
  //that compute the set union
  //and intersection of the sets a and b.
  //(Don’t name the first function union that is a reserved word in C++.)
}
void Exercise13_3()
{
  // Implement the sieve of Eratosthenes: a function
  // for computing prime numbers,
  // known to the ancient Greeks.
  // Choose an integer n.
  // This function will compute all prime numbers up to n.
  // First insert all numbers from 1 to n into a set.
  // Then erase all multiples of 2 (except 2); that is, 4, 6, 8, 10, 12, ....
  // Erase all multiples of 3, that is, 6, 9, 12, 15, ... .
  // Go up to ￼ n . The remaining numbers are all primes.

}
void Exercise13_4()
{
  //Write a program that counts how often each word occurs in a text file.
  //Use a multiset<string>.
}
void Exercise13_5()
{
  //Repeat Exercise P13.4, but use a map<string, int>.
}

void workorder()
{
    priority_queue<WorkOrder> tasks;
    tasks.push(WorkOrder(2, "Shampoo carpets"));
    tasks.push(WorkOrder(3, "Empty trash"));
    tasks.push(WorkOrder(2, "Water plants"));
    tasks.push(WorkOrder(1, "Remove pencil sharpener shavings"));
    tasks.push(WorkOrder(4, "Replace light bulb"));
    tasks.push(WorkOrder(9, "Fix overflowing sink"));
    tasks.push(WorkOrder(1, "Clean coffee maker"));
    tasks.push(WorkOrder(5, "Order cleaning supplies"));

    while (tasks.size() > 0)
    {
       WorkOrder task = tasks.top();
       tasks.pop();
       cout << task.get_priority() << " - "
          << task.get_description() << "\n";
    }
}
void TelephoneD()
{
   TelephoneDirectory data;
   data.add_entry("Fred", 7235591);
   data.add_entry("Mary", 3841212);
   data.add_entry("Sarah", 3841212);
   cout << "Number for Fred: " << data.find_entry("Fred") << "\n";
   vector<string> names = data.find_entries(3841212);
   cout << "Names for 3841212: ";
   for (int i = 0; i < names.size(); i++)
      cout << names[i] << " ";
   cout << "\n";
   cout << "All names and numbers:\n";
   data.print_all();

}


void Ht()
{
    Heap tasks;
       tasks.push(2);
       tasks.push(3);
       tasks.push(2);
       tasks.push(1);
       tasks.push(4);
       tasks.push(9);
       tasks.push(1);
       tasks.push(5);

       while (tasks.size() > 0)
       {
          int task = tasks.top();
          tasks.pop();
          cout << task << "\n";
       }
}

void bT()
{
    BinarySearchTree t;
    t.insert("D");
    t.insert("B");
    t.insert("A");
    t.insert("C");
    t.insert("F");
    t.insert("E");
    t.insert("I");
    t.insert("G");
    t.insert("H");
    t.insert("J");
    t.erase("A"); // Removing leaf
    t.erase("B"); // Removing element with one child
    t.erase("F"); // Removing element with two children
    t.erase("D"); // Removing root
    t.print();
    cout << t.count("E") << "\n";
    cout << t.count("F") << "\n";
}

