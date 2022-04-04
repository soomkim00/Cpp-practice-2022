// 5¿Â-9.QUEUE.CPP   5.6 class queue
#include <iostream>
#include "5¿Â-8.QUEUE.h"
using namespace std;
Queue :: Queue (){
	number = 0;
}
void Queue :: Push (Person p){
	line [number] = p;
	number++;
	cout<<number<<endl;
	cout<<p.Name()<<" has joined the queue"<<endl;
}

Person Queue :: Pop (){
	Person  p = line [0];

	for (int i = 1; i < number; i++) 
		line [i-1] = line [i];
	number --;

    cout << p.Name () << " has left the queue" << endl;
    return p;
}
int Queue :: Number (){
    return number;
}