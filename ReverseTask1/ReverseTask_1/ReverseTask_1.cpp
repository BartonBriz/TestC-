///создать поток ввода input.bin
///записать данные в input.bin
///поток на вывод данных input.bin
///чтение файла, если успешно создает файл output.bin  
/// 
/// 

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main()
{
	const char* file = "input.bin";
	std::ofstream fout(file, std::ios::binary | std::ios::out); // поток для записи

	int numb = 123445;
	if (!fout.is_open())
	{
		std::cerr << "Error! Can't open file." << std::endl;
		return 1;
	}
	else if (fout.is_open())
	{
		//fout << "Good,write file succeeded.\n"; //27 bite
		fout << numb; //6 bite
		std::cerr << "Good, write file succeeded.";
	}
	fout.close();
	std::cout << std::endl;
	std::ifstream finp(file, std::ios::in | std::ios::binary); // поток для чтения
	std::vector<char> buffer((std::istreambuf_iterator<char>(finp)), std::istreambuf_iterator<char>());
	char temp;
	if (!finp.is_open())
	{
		std::cerr << "Error! Can't open file.";
		return 1;

	}
	else if (finp.is_open())
	{
		std::cout << "bite: " << buffer.size() << std::endl;
		std::cout << "first byte: ";
		for (size_t i = 0; i < buffer.size(); ++i)
		{
			std::cout << std::hex << static_cast<int>(static_cast<unsigned char>(buffer[i])) << " ";
		}
		std::cout << std::dec << std::endl;
		std::ofstream fout_1("output.bin");
		if (fout_1.is_open())
		{
			std::cerr << "Nice, you create new file output.bin !";
		}
		fout_1.close();
	}
	finp.close();
	return 0;

}