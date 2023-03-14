/**
 * @file StreamChallenge1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Complex table report
 * @version 0.1
 * @date 2023-03-14
 * @since TuesDay; 11:00 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <iomanip>
#include <vector>
#pragma pack(1)
using namespace std;

void ruler(void){
	for(int i {1}; i <= 10; i++){
		if(i == 10){
			cout<<'0';
		}
		else{
			cout<<i;
		}
	}
}

struct City{
	string cityName{};
	size_t population{};
	double cost{};
};

/*Assume each country has at least ONE city*/
struct Country{
	string countryName{};
	vector <City> cities{};	/*cityName, population, cost*/
};

struct Tours{
	string tourTitle{};
	vector <Country> countries{}; /*countryName, cities*/
};


int main(int argc, const char *const argv[]){
	
	Tours tours
		{"Tour Ticket Prices from Miami",
			{
				{
					"Colombia",{
					{"Bogota", 8778000, 400.98},
					{"Cali", 2401000, 424.12},
					{"Medillin", 2464000, 350.98},
					{"Cartagena", 972000, 345.34},
				},
				
			},
			{
				"Brazil",{
					{"Rio De Janiero", 13500000, 567.45},
					{"Sao Paulo", 11310000, 975.45},
					{"Salvador", 18234000, 855.99},
				},
					
			},
			{
				"Chili",{
					{"Valdivia", 260000, 569.12},
					{"Santiago", 7040000, 520.00},
				},
				
			},
			{
				"Argentina",{
					{"Buenos Aires", 3010000, 723.77},
				},
			},
		},
	};
	constexpr size_t totalWidth {70};
	constexpr size_t fieldWidth1 {20}; /*Country name*/
	constexpr size_t fieldWidth2 {20}; /*City name*/
	constexpr size_t fieldWidth3 {15}; /*Population*/
	constexpr size_t fieldWidht4 {15}; /*Cost*/
	for(int i {1}; i <= 7; i++){
		ruler();
	}
	cout<<endl;
	/*Display the Report title header centered in width of talalWidth
	  You could make this a function for practice*/
	size_t titleLength {tours.tourTitle.length()};
	cout<<setw((totalWidth - titleLength)/2)<<""<<tours.tourTitle<<endl; /*Ensure centre aligned*/
	cout<<endl;
	cout<<setw(fieldWidth1)<<left<<"Country"
		<<setw(fieldWidth2)<<left<<"City"
		<<setw(fieldWidth3)<<right<<"Population"
		<<setw(fieldWidht4)<<right<<"Price"<<endl;
	cout<<setw(totalWidth)<<setfill('-')<<""<<endl;	/*Display totalWidth dashes*/
	
	cout<<setfill(' '); /*Reset setfill to blank spaces*/
	cout<<setprecision(2)<<fixed; /*Displaying the cost width 2 decimal digits*/
	/*Note the use of the conditional operator to display the country name or "" for the country*/
	for(const Country &country: tours.countries){
		for(size_t i{0}; i < country.cities.size(); i++){
			cout<<setw(fieldWidth1)<<left<<((i == 0)?country.countryName:"")
				<<setw(fieldWidth2)<<left<<country.cities.at(i).cityName
				<<setw(fieldWidth3)<<right<<country.cities.at(i).population
				<<setw(fieldWidht4)<<right<<country.cities.at(i).cost<<endl;
		}
	}
	
	return 0;
}