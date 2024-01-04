# include <iostream>

int main()
{
	int iVariable = 20;
    float fVariable = (float) iVariable / 10;
	int* pToInt = &iVariable;
    float* pToFloat = &fVariable;
    
    float* pResult = static_cast<float*>(pToInt);
	return (0);
}
