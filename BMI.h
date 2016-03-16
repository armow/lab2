#include<string>
using namespace std;
class BMI{
	public:
		BMI();
		void setStart(float hhh,float www);
		float getStart();
		float getBMI();
		string category(float value);
	private:
		float height,weight;
		float value;
		string c;
};
