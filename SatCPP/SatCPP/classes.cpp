/*
객체 관계 분석해서 그걸 가지고 객체를 설계하는 방식을 보통 5가지라고 함

클래스 - 맴버

1. 구성 ( Composition ): Part-of
	[ 두뇌 - 육체 ] ~ 일부다 (부분이다)

2. 집합 ( Aggregation ): Has-a
	[ 교사 - 학생 ] ~ 가지고 있다

3. 연계 ( Association ): Uses-a
	[ 환자 - 의사 ] ~ 사용한다 (서로 필요할때만)

4. 의존 ( Dependency ): Depends-on
	[ 나 - 카페인 ] ~ 사용할 수 밖에 없었다.

5. 상속 (Inheri~): is-a
*/

#include <iostream>
#include <string>

class pos2 {
private:
	int m_x;
	int m_y;
public:
	pos2(const int& _x, const int& _y)
		: m_x(_x)
		, m_y(_y) {

	}

	void set(const int& _x, const int& _y) {
		m_x = _x;
		m_y = _y;
	}

	void set(const pos2 &_pos) {
		m_x = _pos.m_x;
		m_y = _pos.m_y;
	}

	friend std::ostream& operator << (std::ostream& _out, const pos2& _pos2) {
		_out << _pos2.m_x << ", " << _pos2.m_y;
		return _out;
	}
};

class monster {
private:
	std::string m_name;
	pos2 m_pos;
public:
	monster(const std::string& _name, const pos2& _pos)
		: m_name(_name)
		, m_pos(_pos) {

	}

	void move(const pos2 &_pos) {
		m_pos.set(_pos);
	}

	friend std::ostream& operator << (std::ostream& _out, const monster& _monster) {
		_out << _monster.m_name << ": " << _monster.m_pos;
		return _out;
	}
};


int ma2in()
{
	monster mon1("Arch linux", { 0, 0 });
	mon1.move({ 1, 1 });
	std::cout << mon1 << std::endl;


	monster mon2("Debian linux", { 2, 2 });
	mon2.move({ 3, 3 });
	std::cout << mon2 << std::endl;

	return(0);
}