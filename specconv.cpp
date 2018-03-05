#include <iostream>
#include <cmath>
using namespace std;

int main()
{

	const double h = 6.626E-34, c = 299792458, jPerEv = 6.24150934E+18, kjeV=96.485;
	int unit, again;
	double x, eV, nm, micron, wavenumber, kJMol;
	do
	{
		cout << "Enter the value corresponding to your unit of energy: " << endl;
		cout << "1 = eV\n2 = nm\n3 = microns\n4 = wavenumbers (cm^-1)\n5 = kJ/mol" << endl;
		cin >> unit;
		cout << "Enter the numeric value of energy: " << endl;
		cin >> x;
		if (unit == 1)
		{
			eV = x;
			kJMol = eV*kjeV;
			nm = ((h*c) / (eV / jPerEv))*pow(10.0, 9.0);
			micron = nm*(1E-3);
			wavenumber = (1 / micron)*pow(10.0, 4.0);
			cout << "nm = " << nm << "\nmicrons = " << micron << "\nwavenumbers = " << wavenumber << "\neV = " << eV <<"\nkJ/mol = "<<kJMol<< endl;
		}
		else if (unit == 2)
		{
			nm = x;
			eV = (h*c) / (nm*pow(10.0, -9.0))*jPerEv;
			kJMol = eV*kjeV;
			micron = nm*pow(10.0, -3.0);
			wavenumber = (1 / micron)*pow(10.0, 4.0);
			cout << "nm = " << nm << "\nmicrons = " << micron << "\nwavenumbers = " << wavenumber << "\neV = " << eV << "\nkJ/mol = " << kJMol << endl;
		}
		else if (unit == 3)
		{
			micron = x;
			nm = micron*pow(10.0, 3.0);
			wavenumber = (1 / micron)*pow(10.0, 4.0);
			eV = (h*c) / (micron*pow(10.0, -6.0))*jPerEv;
			kJMol = eV*kjeV;
			cout << "nm = " << nm << "\nmicrons = " << micron << "\nwavenumbers = " << wavenumber << "\neV = " << eV << "\nkJ/mol = " << kJMol << endl;
		}
		else if (unit==4)
		{
			wavenumber = x;
			micron = (1 / wavenumber)*pow(10.0, 4.0);
			nm = micron*pow(10.0, 3.0);
			eV = (h*c) / (nm*pow(10.0, -9.0))*jPerEv;
			kJMol = eV*kjeV;
			cout << "nm = " << nm << "\nmicrons = " << micron << "\nwavenumbers = " << wavenumber << "\neV = " << eV << "\nkJ/mol = " << kJMol << endl;
		}
		else
		{
			kJMol = x;
			eV = x /kjeV;
			nm = ((h*c) / (eV / jPerEv))*pow(10.0, 9.0);
			micron = nm*(1E-3);
			wavenumber = (1 / micron)*pow(10.0, 4.0);
			cout << "nm = " << nm << "\nmicrons = " << micron << "\nwavenumbers = " << wavenumber << "\neV = " << eV << "\nkJ/mol = " << kJMol << endl;
		}
		unit = 0;
		cout << "Again?\n1 = Yes\n2 = No" << endl;
		cin >> again;
	} while (again == 1);



	system("PAUSE");
	return 0;
}
