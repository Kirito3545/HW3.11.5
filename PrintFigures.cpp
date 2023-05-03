#include "PrintFigures.h"

namespace FigureLibraryDynamic
{
	void printFigures(Figure* figure)
	{
		std::cout << std::endl;
		std::cout << figure->getNameOfFigure() << ":" << std::endl;

		std::cout << "�������:";
		std::cout << " a = " << figure->getSideLengthA() << ", b = " << figure->getSideLengthB() << ", c = " << figure->getSideLengthC();
		if (figure->getHaveFourSides())
		{
			std::cout << ", d = " << figure->getSideLengthD() << std::endl;
		}
		else { std::cout << std::endl; }

		std::cout << "����:";
		std::cout << " A = " << figure->getAngleA() << ", B = " << figure->getAngleB() << ", C = " << figure->getAngleC();
		if (figure->getHaveFourSides()) { std::cout << ", D = " << figure->getAngleD() << std::endl; }
		else { std::cout << std::endl; }
	}
}