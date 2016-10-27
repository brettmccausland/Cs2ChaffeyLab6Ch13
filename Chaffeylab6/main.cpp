#include <iostream>
#include"binarytree.h"
#include"telephonedirectory.h"
#include"heap.h"
#include<set>
using namespace std;

// Book code
void bT();
void Ht();
//void workorder();
void TelephoneD();
//==============
void Exercise13_2();// brett(done)
void Exercise13_3();//brett(done)
void Exercise13_4();//brett()
void Exercise13_5();//brett()
set<int> set_Intersection(set<int>& a, set<int>& b);
set<int> set_union(set<int>& a, set<int>& b);
void printset(set<int>& myset);
void SieveOfEratosthenes(bool PrimeSet[], size_t n );
void PrintPrimeSet(const bool Primeset[],size_t n);
int main()
{
    system("clear");
   cout << "lab 6" << endl<<endl;
    Exercise13_2();
    Exercise13_3();


   // bT();
    return 0;
}
void Exercise13_2()
{
    cout<<"Exercise13_2()"<<endl;
  //Write functions
  //set<int> set_union(set<int> a, set<int> b)
  //set<int> intersection(set<int> a, set<int> b)
  //that compute the set union
  //and intersection of the sets a and b.
  //(Don’t name the first function union that is a reserved word in C++.)
    set<int> a;
    set<int>b;
    set<int> myset;
    a.insert(1);
    a.insert(9);
    a.insert(3);
    a.insert(8);

    b.insert(0);
    b.insert(2);
    b.insert(3);
    b.insert(6);

    myset=set_Intersection(a,b);
    cout<<"set intersection: ";
    printset(myset);
    cout<<endl;
    myset=set_union(a,b);
    cout<<"set intersection: ";
    printset(myset);
    cout<<endl<<endl;

}
void SieveOfEratosthenes(bool PrimeSet[], size_t n )
{
    PrimeSet[1]=PrimeSet[0]=false;
    for(size_t i= 2;i<n;i++)
        PrimeSet[i]=true;


    for(size_t p= 2;p <= n;p++)
        for(size_t L= p*2 ;L<= n;L+=p)
            PrimeSet[L]=false;


}
void PrintPrimeSet(const bool Primeset[],size_t n)
{
    cout<<"The Prime Set of the number "<< n <<"is: "<<endl;
     for(size_t i =2;i<n;i++)
     {
        if(Primeset[i]==true)
        {
            cout<<i<<" ";
        }
     }
}
set<int> set_union(set<int>& a, set<int>& b)
{
    set<int>myreturn;
   // set<int>::iterator it;
    for( set<int>::iterator it=a.begin(); it != a.end();++it )
           myreturn.insert(*it);
    for( set<int>::iterator it=b.begin(); it != b.end();++it )
           myreturn.insert(*it);
    return myreturn;
}
set<int> set_Intersection(set<int>& a, set<int>& b)
{
    set<int>myreturn;
    set<int>::iterator it;
    for( set<int>::iterator it=a.begin(); it != a.end();++it )
       if(b.find(*it)!= b.end())
           myreturn.insert(*it);
    return myreturn;
}
void printset(set<int>& myset)
{
    for(set<int>::iterator iter=myset.begin(); iter!=myset.end();++iter)
        cout<<*iter<<" ";
}

void Exercise13_3()
{
    cout<<"Exercise13_3()"<<endl;
  // Implement the sieve of Eratosthenes: a function
  // for computing prime numbers,
  // known to the ancient Greeks.
  // Choose an integer n.
  // This function will compute all prime numbers up to n.
  // First insert all numbers from 1 to n into a set.
  // Then erase all multiples of 2 (except 2); that is, 4, 6, 8, 10, 12, ....
  // Erase all multiples of 3, that is, 6, 9, 12, 15, ... .
  // Go up to ￼ n . The remaining numbers are all primes.
    size_t n;
    cout<<"what is your number: "<<endl;
       cin>> n;
       bool PrimeSet[n];
       SieveOfEratosthenes(PrimeSet,n);
       PrintPrimeSet(PrimeSet,n);

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

//void workorder()
//{
//    priority_queue<WorkOrder> tasks;
//    tasks.push(WorkOrder(2, "Shampoo carpets"));
//    tasks.push(WorkOrder(3, "Empty trash"));
//    tasks.push(WorkOrder(2, "Water plants"));
//    tasks.push(WorkOrder(1, "Remove pencil sharpener shavings"));
//    tasks.push(WorkOrder(4, "Replace light bulb"));
//    tasks.push(WorkOrder(9, "Fix overflowing sink"));
//    tasks.push(WorkOrder(1, "Clean coffee maker"));
//    tasks.push(WorkOrder(5, "Order cleaning supplies"));

//    while (tasks.size() > 0)
//    {
//       WorkOrder task = tasks.top();
//       tasks.pop();
//       cout << task.get_priority() << " - "
//          << task.get_description() << "\n";
//    }
//}
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

