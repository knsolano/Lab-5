#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::endl;
using std::string;

	struct BusinessCard {
		string CompanyName;
		string CompanyAddress;
		string CompanyPhoneNumber;
		string CompanyWorkHours;
		string RepresentativePOC;
		double PriceQuoted;
	};

	int main() {
		srand(time(nullptr));

		BusinessCard company1("Tech Solutions", "123 Tech Street, Silicon Valley, CA", "123-456-7890", "9AM - 5PM", "Maria Sancho", rand() % 1000 + 200);
		BusinessCard company2("Software Innovations", "456 Innovate Drive, Teccno, TX", "987-654-3210", "8AM - 6PM", "Mario Lorde", rand() % 1000 + 200);
		BusinessCard company3("New World Ware", "789 Newton Blvd, Future Town, NY", "555-123-4567", "10AM - 4PM", "Alexa Noiuse", rand() % 1000 + 200);
		BusinessCard company4("CyberTech", "321 Cybercane Lane, Techville, WA", "444-987-6543", "7AM - 3PM", "Karina Mendo", rand() % 1000 + 200);
		BusinessCard company5("Quantum Innovations", "654 Quantum Road, Techopolis, FL", "333-123-4567", "11AM - 7PM", "John Doe", rand() % 1000 + 200);

		cout << "Company 1: " << company1.CompanyName << ", " << company1.CompanyAddress << ", " << company1.CompanyPhoneNumber << ", " << company1.CompanyWorkHours << ", " << company1.RepresentativePOC << ", $" << company1.PriceQuoted << endl;
		cout << "Company 2: " << company2.CompanyName << ", " << company2.CompanyAddress << ", " << company2.CompanyPhoneNumber << ", " << company2.CompanyWorkHours << ", " << company2.RepresentativePOC << ", $" << company2.PriceQuoted << endl;
		cout << "Company 3: " << company3.CompanyName << ", " << company3.CompanyAddress << ", " << company3.CompanyPhoneNumber << ", " << company3.CompanyWorkHours << ", " << company3.RepresentativePOC << ", $" << company3.PriceQuoted << endl;
		cout << "Company 4: " << company4.CompanyName << ", " << company4.CompanyAddress << ", " << company4.CompanyPhoneNumber << ", " << company4.CompanyWorkHours << ", " << company4.RepresentativePOC << ", $" << company4.PriceQuoted << endl;
		cout << "Company 5: " << company5.CompanyName << ", " << company5.CompanyAddress << ", " << company5.CompanyPhoneNumber << ", " << company5.CompanyWorkHours << ", " << company5.RepresentativePOC << ", $" << company5.PriceQuoted << endl;

		BusinessCard companies[5] = { company1, company2, company3, company4, company5 };
		BusinessCard bestCompany = companies[0];

		for (int i = 1; i < 5; ++i) {
			if (companies[i].PriceQuoted < bestCompany.PriceQuoted) {
				bestCompany = companies[i];
			}
		}
		cout << "\nThe company with the lowest price quote is: " << bestCompany.CompanyName << " with a quote of $" << bestCompany.PriceQuoted << endl;

		return 0;
	}