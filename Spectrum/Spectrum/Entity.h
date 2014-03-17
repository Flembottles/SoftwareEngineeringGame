
class Entity
{
private:
	float x, y;
	int width, height;
public:
	void draw();
	void update();
	float getX(), getY();
	void setX(float x), setY(float y);
};