#ifndef BASE_TEST_SIGSLOT_H_
#define BASE_TEST_SIGSLOT_H_

#include "base/sigslot.h"
#include "base/util.h"
#include <iostream>

class alarm_clock
{
public:
	sigslot::signal1<int> tick;//��������
	void send_msg(int num)
	{
		tick(num);
	}
};

struct student : public sigslot::has_slots<>
{
	void weak_up(int num)//�����������¼��Ĵ��� ��Tick�Ĳ���һһ��Ӧ
	{
		std::cout << "��ʱ�� : " <<num<< std::endl;
	}
};

#endif