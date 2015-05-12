//Author: Vasil'ev Anatoly, gr.4302
//version 1.0
//Module: MUL_NN_N
//e-mail: tolya051996@mail.ru


Natural Number MUL_NN_N(Natural Number Number1, Natural Number Number2)//realization first (with 9 digits in each element of vectors)
{
	Natural Number result;

	unsigned int k;

	//result = MUL_ND_N(Number1, (Number2.digitBlocks[0])%10)//второй параметр - unsigned int

	unsigned int n = 0;

	unsigned int mod = 0


		for (k = 0; k < Number2.digitBlocks.size(); k++)//проход по элементам вектора
		{
			mod = Number2.digitBlocks[k];
			do
			{
				mod = mod%10;
				result = ADD_NN_N(result, MUL_Nk_N(MUL_ND_N(Number1, mod), n));
				mod = Number2.digitBlocks[k]/10;
				n++;
			}
			while (mod != 0);

		return result;
}


Natural Number MUL_NN_N(Natural Number Number1, Natural Number Number2)//realization second (with 1 digits in each element of vectors)
{
	Natural Number result;//результат того же класса
	unsigned int i = 0;
	result.digitBlocks = MUL_ND_N(Number1, Number2.digitBlocks[i]);//умножение первого числа на цифру в первом разряде второго числа
	for (i = 1, i < Number2.digitBlocks.size(); i++)//проход по всем элементам вектора, т.е. по всем цифрам второго числа
	{
		result = ADD_NN_N(result, MUL_Nk_N(MUL_ND_N(Number1, Number2.digitBlocks[i]), i));//прибавление к результату числа, которое представляет собой результат умножения первого числа на i-ый разряд второго, умноженный на 10 в степени i
	}
	return result;
}
