// 5-5.QUE-USE.CPP  5.6 class queue
#include <iostream>
#include "5��-8.QUEUE.h"
using namespace std;
#include <stdlib.h>

void main (){
    //�ּ� 1��
    //*
    Queue q;
	Queue t;//t�� ���ÿ��� �ǽ�
	t = q; // ���� �ǽ�
    cout << "queue�� �ִ� ����� "<< q.Number () << " �� �Դϴ�." 
         << endl << endl;
    q.Push ( Person ("ȫ�浿") );
    q.Push ( Person ("���Ӵ�") );
    q.Push ( Person ("������") );
    q.Push ( Person ("�����") );
    cout << "queue�� �ִ� ����� "
         << q.Number () << " �� �Դϴ�." << endl << endl;

    q.Pop();
    cout << "queue�� �ִ� ����� "<< q.Number () << " �� �Դϴ�." 
         << endl << endl;

    q.Push ( Person ("ȫ���") );
    cout << "queue�� �ִ� ����� " << q.Number () << " �� �Դϴ�." 
         << endl << endl;

    cout << "��� ����� queue���� �����ϴ�." << endl<<endl;
    while (q.Number () > 0){
       q.Pop ();
       cout << "queue�� �ִ� ����� " << q.Number () << " �� �Դϴ�." 
            << endl << endl;
    }
    //*/
    //�ּ� 2��
    /*
    Queue *pq = &q;
    (*pq).Push ( Person ("ȫ�淡") );
    cout << "queue�� �ִ� ����� "
         << (*pq).Number () << " �� �Դϴ�." << endl << endl;
    (*pq).Pop();
    */
	system("pause");
}