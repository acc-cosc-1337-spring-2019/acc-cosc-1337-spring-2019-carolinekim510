#include "sample_value_ref.h"
//

void pass_by_val_and_ref(int num1, int & num2, const int & num3)
{
	num1 = 20; //modifiying thia valus is local to the function
	num2 = 50; //modifiying this value will potentially change caller variable
	//num3 = 100; can't be modified const variable : couldn't call it out because we haven't called at the main function.
}
