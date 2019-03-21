#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Passenger 
{
public:
    virtual ~Passenger() {};

protected:
    string name;
    int age;
};

class Student : public Passenger
{
public:
	void Study() { cout << "Student study" << endl; }
};

class Teacher : public Passenger
{
public:
	void Teach() { cout << "Teacher teach" << endl; }
};

class Doctor : public Passenger
{
public:
	void Treat() { cout << "Doctor::treat" << endl; }
	void Operate() { cout << "Doctor::operate" << endl; }
};

int main()
{
	typedef vector<Passenger *> PassengerVector;
	PassengerVector passengerVect;

	Passenger* pPS = new Student();
	if ( pPS )
	{
		passengerVect.push_back( pPS );
		// 비행기 타자마자 공부한다고 치고~
		// pPS가 명확하게 어느 클래스의 인스턴스인지 알고 있다.
		// 이 경우엔 굳이 비용이 들어가는 dynamic_cast가 아닌, static_cast를 쓰는게 낫다.
		Student* pS = static_cast<Student *>( pPS );
		pS->Study();
	}

	Passenger* pPT = new Teacher();
	if ( pPT )
	{
		passengerVect.push_back( pPT );
	}
	
    passengerVect.push_back(new Doctor());

	// 응급 환자 발생. passengerVect 중 의사가 있다면 수술을 시켜야 한다.
	PassengerVector::iterator bIter(passengerVect.begin());
	PassengerVector::iterator eIter(passengerVect.end());
	for( ; bIter != eIter; ++bIter )
	{
		// Passenger 포인터로 저장된 녀석들 중 누가 의사인지 구분해야 한다.
		// 런타임 다형성 체크에 의해 Doctor가 아닌 녀석들에 대한 형변환 결과는 NULL
		Doctor* pD = dynamic_cast<Doctor *>(*bIter);
		if ( pD )
		{
			pD->Operate();
		}
	}
}