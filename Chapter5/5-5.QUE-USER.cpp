// 5-5.QUE-USE.CPP  5.6 class queue
#include <iostream>
#include "5장-8.QUEUE.h"
using namespace std;
#include <stdlib.h>

void main (){
    //주석 1번
    //*
    Queue q;
	Queue t;//t의 사용시에도 실습
	t = q; // 구현 실습
    cout << "queue에 있는 사람은 "<< q.Number () << " 명 입니다." 
         << endl << endl;
    q.Push ( Person ("홍길동") );
    q.Push ( Person ("사임당") );
    q.Push ( Person ("류성룡") );
    q.Push ( Person ("정약용") );
    cout << "queue에 있는 사람은 "
         << q.Number () << " 명 입니다." << endl << endl;

    q.Pop();
    cout << "queue에 있는 사람은 "<< q.Number () << " 명 입니다." 
         << endl << endl;

    q.Push ( Person ("홍대용") );
    cout << "queue에 있는 사람은 " << q.Number () << " 명 입니다." 
         << endl << endl;

    cout << "모든 사람이 queue에서 나갑니다." << endl<<endl;
    while (q.Number () > 0){
       q.Pop ();
       cout << "queue에 있는 사람은 " << q.Number () << " 명 입니다." 
            << endl << endl;
    }
    //*/
    //주석 2번
    /*
    Queue *pq = &q;
    (*pq).Push ( Person ("홍경래") );
    cout << "queue에 있는 사람은 "
         << (*pq).Number () << " 명 입니다." << endl << endl;
    (*pq).Pop();
    */
	system("pause");
}