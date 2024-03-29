#ifndef AIRPORT_PLANE_H
#define AIRPORT_PLANE_H

namespace airport {

class Plane {
public:
	enum Status {
		NEVER_USED = 0, LANDING = 1, DEPARTING = 2
	};
private:
	inline static int planesCount = 0;
	int id;
	Status status = NEVER_USED;
public:
	Plane() = delete;

	explicit Plane(Status s) : status(s) {
		this->id = ++planesCount;
	}

	int getId() const;

	void setId(int id);

	Status getStatus() const;

	void setStatus(Status status);

};

}

#endif //AIRPORT_PLANE_H
