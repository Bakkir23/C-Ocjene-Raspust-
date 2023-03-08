#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <stdlib.h>
#include <cmath>
#include <Windows.h>
#include <direct.h>
using namespace std;

string stBos, stEng, stNje, stHis, stGeo, stMat, stFiz, stHem, stBio, stInf, stLik, stSport, stKul, stPro;

void unosFunc() {

ocjene:fstream bosanski("C:/SkolaOcjene/Bosanski.txt");
	fstream engleski("C:/SkolaOcjene/Engleski.txt");
	fstream njemacki("C:/SkolaOcjene/Njemacki.txt");
	fstream historija("C:/SkolaOcjene/Historija.txt");
	fstream geografija("C:/SkolaOcjene/Geografija.txt");
	fstream matematika("C:/SkolaOcjene/Matematika.txt");
	fstream fizika("C:/SkolaOcjene/Fizika.txt");
	fstream hemija("C:/SkolaOcjene/Hemija.txt");
	fstream biologija("C:/SkolaOcjene/Biologija.txt");
	fstream informatika("C:/SkolaOcjene/Informatika.txt");
	fstream likovno("C:/SkolaOcjene/Likovno.txt");
	fstream sport("C:/SkolaOcjene/Sport.txt");
	fstream kulturaReligija("C:/SkolaOcjene/KulturaReligija.txt");
	fstream programiranje("C:/SkolaOcjene/Programiranje.txt");

	string odabirUnos;

	cout << "Odaberi za koji predmet zelis unjeti ocjenu: (predmet upisi sve malim slovima)\n";

	cin >> ws;
	getline(cin, odabirUnos);

	if (odabirUnos == "bosanski") {

	unos:string ocjena = "", odabirOcjena = "";
		cout << "Unesi ocjenu:\n";
		cin >> ocjena;
		bosanski << stBos + ocjena;

		cout << "Da li zelis unjeti jos ocjena za ovaj predmet?\n";
		cin >> odabirOcjena;

		if (odabirOcjena == "da" || odabirOcjena == "Da") {
			system("CLS");
			goto unos;
		}
		else {
			goto ocjene;
		}


	}
	else if (odabirUnos == "engleski") {

	unos1:string ocjena = "", odabirOcjena = "";
		cout << "Unesi ocjenu:\n";
		cin >> ocjena;
		engleski << stEng + ocjena;

		cout << "Da li zelis unjeti jos ocjena za ovaj predmet?\n";
		cin >> odabirOcjena;

		if (odabirOcjena == "da" || odabirOcjena == "Da") {
			system("CLS");
			goto unos1;
		}
		else {
			goto ocjene;
		}
	}
	else if (odabirUnos == "njemacki") {

	unos2:string ocjena = "", odabirOcjena = "";
		cout << "Unesi ocjenu:\n";
		cin >> ocjena;
		njemacki << stNje + ocjena;

		cout << "Da li zelis unjeti jos ocjena za ovaj predmet?\n";
		cin >> odabirOcjena;

		if (odabirOcjena == "da" || odabirOcjena == "Da") {
			system("CLS");
			goto unos2;
		}
		else {
			goto ocjene;
		}
	}
	else if (odabirUnos == "historija") {

	unos3:string ocjena = "", odabirOcjena = "";
		cout << "Unesi ocjenu:\n";
		cin >> ocjena;
		historija << stHis + ocjena;

		cout << "Da li zelis unjeti jos ocjena za ovaj predmet?\n";
		cin >> odabirOcjena;

		if (odabirOcjena == "da" || odabirOcjena == "Da") {
			system("CLS");
			goto unos3;
		}
		else {
			goto ocjene;
		}
	}
	else if (odabirUnos == "geografija") {

	unos4:string ocjena = "", odabirOcjena = "";
		cout << "Unesi ocjenu:\n";
		cin >> ocjena;
		geografija << stGeo + ocjena;

		cout << "Da li zelis unjeti jos ocjena za ovaj predmet?\n";
		cin >> odabirOcjena;

		if (odabirOcjena == "da" || odabirOcjena == "Da") {
			system("CLS");
			goto unos4;
		}
		else {
			goto ocjene;
		}
	}
	else if (odabirUnos == "matematika") {

	unos5:string ocjena = "", odabirOcjena = "";
		cout << "Unesi ocjenu:\n";
		cin >> ocjena;
		matematika << stMat + ocjena;

		cout << "Da li zelis unjeti jos ocjena za ovaj predmet?\n";
		cin >> odabirOcjena;

		if (odabirOcjena == "da" || odabirOcjena == "Da") {
			system("CLS");
			goto unos5;
		}
		else {
			goto ocjene;
		}
	}
	else if (odabirUnos == "fizika") {

	unos6:string ocjena = "", odabirOcjena = "";
		cout << "Unesi ocjenu:\n";
		cin >> ocjena;
		fizika << stFiz + ocjena;

		cout << "Da li zelis unjeti jos ocjena za ovaj predmet?\n";
		cin >> odabirOcjena;

		if (odabirOcjena == "da" || odabirOcjena == "Da") {
			system("CLS");
			goto unos6;
		}
		else {
			goto ocjene;
		}
	}
	else if (odabirUnos == "hemija") {

	unos7:string ocjena = "", odabirOcjena = "";
		cout << "Unesi ocjenu:\n";
		cin >> ocjena;
		hemija << stHem + ocjena;

		cout << "Da li zelis unjeti jos ocjena za ovaj predmet?\n";
		cin >> odabirOcjena;

		if (odabirOcjena == "da" || odabirOcjena == "Da") {
			system("CLS");
			goto unos7;
		}
		else {
			goto ocjene;
		}
	}
	else if (odabirUnos == "biologija") {

	unos8:string ocjena = "", odabirOcjena = "";
		cout << "Unesi ocjenu:\n";
		cin >> ocjena;
		biologija << stBio + ocjena;

		cout << "Da li zelis unjeti jos ocjena za ovaj predmet?\n";
		cin >> odabirOcjena;

		if (odabirOcjena == "da" || odabirOcjena == "Da") {
			system("CLS");
			goto unos8;
		}
		else {
			goto ocjene;
		}
	}
	else if (odabirUnos == "informatika") {

	unos9:string ocjena = "", odabirOcjena = "";
		cout << "Unesi ocjenu:\n";
		cin >> ocjena;
		informatika << stInf + ocjena;

		cout << "Da li zelis unjeti jos ocjena za ovaj predmet?\n";
		cin >> odabirOcjena;

		if (odabirOcjena == "da" || odabirOcjena == "Da") {
			system("CLS");
			goto unos9;
		}
		else {
			goto ocjene;
		}
	}
	else if (odabirUnos == "likovno") {

	unos0:string ocjena = "", odabirOcjena = "";
		cout << "Unesi ocjenu:\n";
		cin >> ocjena;
		likovno << stLik + ocjena;

		cout << "Da li zelis unjeti jos ocjena za ovaj predmet?\n";
		cin >> odabirOcjena;

		if (odabirOcjena == "da" || odabirOcjena == "Da") {
			system("CLS");
			goto unos0;
		}
		else {
			goto ocjene;
		}
	}
	else if (odabirUnos == "sport") {

	unos11:string ocjena = "", odabirOcjena = "";
		cout << "Unesi ocjenu:\n";
		cin >> ocjena;
		sport << stSport + ocjena;

		cout << "Da li zelis unjeti jos ocjena za ovaj predmet?\n";
		cin >> odabirOcjena;

		if (odabirOcjena == "da" || odabirOcjena == "Da") {
			system("CLS");
			goto unos11;
		}
		else {
			goto ocjene;
		}
	}
	else if (odabirUnos == "kultura religija") {

	unos12:string ocjena = "", odabirOcjena = "";
		cout << "Unesi ocjenu:\n";
		cin >> ocjena;
		kulturaReligija << stKul + ocjena;

		cout << "Da li zelis unjeti jos ocjena za ovaj predmet?\n";
		cin >> odabirOcjena;

		if (odabirOcjena == "da" || odabirOcjena == "Da") {
			system("CLS");
			goto unos12;
		}
		else {
			goto ocjene;
		}
	}
	else if (odabirUnos == "programiranje") {

	unos13:string ocjena = "", odabirOcjena = "";
		cout << "Unesi ocjenu:\n";
		cin >> ocjena;
		programiranje << stPro + ocjena;

		cout << "Da li zelis unjeti jos ocjena za ovaj predmet?\n";
		cin >> odabirOcjena;

		if (odabirOcjena == "da" || odabirOcjena == "Da") {
			system("CLS");
			goto unos13;
		}
		else {
			goto ocjene;
		}
	}
	else if (odabirUnos == "ne" || "Ne") {

		system("CLS");
		goto kraj;

	}

	kraj:getline(bosanski, stBos);
	getline(engleski, stEng);
	getline(njemacki, stNje);
	getline(historija, stHis);
	getline(geografija, stGeo);
	getline(matematika, stMat);
	getline(fizika, stFiz);
	getline(hemija, stHem);
	getline(biologija, stBio);
	getline(informatika, stInf);
	getline(likovno, stLik);
	getline(sport, stSport);
	getline(kulturaReligija, stKul);
	getline(programiranje, stPro);

}
	
int ispisFunc(){

	cout << "Tvoje Ocjene su: \n\n";

	cout << "Bosanski Jezik i Knjizevnost - "  << stBos << endl;
	cout << "Engleski Jezik - " << stEng << endl;
	cout << "Njemacki Jezik - " << stNje << endl;
	cout << "Historija - " << stHis << endl;
	cout << "Geografija - " << stGeo << endl;
	cout << "Matematika - " << stMat << endl;
	cout << "Fizika - " << stFiz << endl;
	cout << "Hemija - " << stHem << endl;
	cout << "Biologija - " << stBio << endl;
	cout << "Informatika - " << stInf << endl;
	cout << "Likovna Kultura - " << stLik << endl;
	cout << "Sport - " << stSport << endl;
	cout << "Kultura Religija / Vjeronauka - " << stKul << endl;
	cout << "Programiranje - " << stPro << endl;

	system("pause");
	system("CLS");
	return 0;

}

void prosjekFunc() {

	int intBos = stoi(stBos);
	int intEng = stoi(stEng);
	int intNje = stoi(stNje);
	int intHis = stoi(stHis);
	int intGeo = stoi(stGeo);
	int intMat = stoi(stMat);
	int intFiz = stoi(stFiz);
	int intHem = stoi(stHem); 
	int intBio = stoi(stBio);
	int intInf = stoi(stInf);
	int intLik = stoi(stLik);
	int intSport = stoi(stSport);
	int intKul = stoi(stKul);
	int intPro = stoi(stPro);

	int bbBos = 0, zbBos=0, bbEng=0,zbEng=0, bbNje=0, zbNje=0, bbHis=0, zbHis=0, bbGeo=0, zbGeo=0, bbMat=0, zbMat=0, bbFiz=0, zbFiz=0, bbHem=0, zbHem=0, bbBio=0, zbBio=0, bbInf=0, zbInf=0, bbLik=0, zbLik=0, bbSport=0, zbSport=0, bbKul=0, zbKul=0, bbPro=0, zbPro=0;

	while (intBos > 0) {
		int digit = intBos % 10;
		zbBos += digit;
		bbBos++;

		intBos /= 10;
	}
	double prosjekBos = (float)zbBos / bbBos;
	int prosjekBosInt;

	if (prosjekBos < 1.5) prosjekBosInt = 1;
	if (prosjekBos > 1.5 && prosjekBos < 2.5) prosjekBosInt = 2;
	if (prosjekBos >= 2.5 && prosjekBos < 3.5) prosjekBosInt = 3;
	if (prosjekBos >= 3.5 && prosjekBos < 4.5) prosjekBosInt = 4;
	if (prosjekBos >= 4.5) prosjekBosInt=5;

	while (intEng > 0) {
		int digit = intEng % 10;
		zbEng += digit;
		bbEng++;

		intEng /= 10;
	}
	double prosjekEng = (float)zbEng / bbEng;
	int prosjekEngInt;

	if (prosjekEng < 1.5) prosjekEngInt = 1;
	if (prosjekEng > 1.5 && prosjekEng < 2.5) prosjekEngInt = 2;
	if (prosjekEng >= 2.5 && prosjekEng < 3.5) prosjekEngInt = 3;
	if (prosjekEng >= 3.5 && prosjekEng < 4.5) prosjekEngInt = 4;
	if (prosjekEng >= 4.5) prosjekEngInt = 5;

	while (intNje > 0) {
		int digit = intNje % 10;
		zbNje += digit;
		bbNje++;

		intNje /= 10;
	}
	double prosjekNje = (float)zbNje / bbNje;
	int prosjekNjeInt;

	if (prosjekNje < 1.5) prosjekNjeInt = 1;
	if (prosjekNje > 1.5 && prosjekNje < 2.5) prosjekNjeInt = 2;
	if (prosjekNje >= 2.5 && prosjekNje < 3.5) prosjekNjeInt = 3;
	if (prosjekNje >= 3.5 && prosjekNje < 4.5) prosjekNjeInt = 4;
	if (prosjekNje >= 4.5) prosjekNjeInt = 5;

	while (intHis > 0) {
		int digit = intHis % 10;
		zbHis += digit;
		bbHis++;

		intHis /= 10;
	}
	double prosjekHis = (float)zbHis / bbHis;
	int prosjekHisInt;

	if (prosjekHis < 1.5) prosjekHisInt = 1;
	if (prosjekHis > 1.5 && prosjekHis < 2.5) prosjekHisInt = 2;
	if (prosjekHis >= 2.5 && prosjekHis < 3.5) prosjekHisInt = 3;
	if (prosjekHis >= 3.5 && prosjekHis < 4.5) prosjekHisInt = 4;
	if (prosjekHis >= 4.5) prosjekHisInt = 5;

	while (intGeo > 0) {
		int digit = intGeo % 10;
		zbGeo += digit;
		bbGeo++;

		intGeo /= 10;
	}
	double prosjekGeo = (float)zbGeo / bbGeo;
	int prosjekGeoInt;

	if (prosjekGeo < 1.5) prosjekGeoInt = 1;
	if (prosjekGeo > 1.5 && prosjekGeo < 2.5) prosjekGeoInt = 2;
	if (prosjekGeo >= 2.5 && prosjekGeo < 3.5) prosjekGeoInt = 3;
	if (prosjekGeo >= 3.5 && prosjekGeo < 4.5) prosjekGeoInt = 4;
	if (prosjekGeo >= 4.5) prosjekGeoInt = 5;

	while (intMat > 0) {
		int digit = intMat % 10;
		zbMat += digit;
		bbMat++;

		intMat /= 10;
	}
	double prosjekMat = (float)zbMat / bbMat;
	int prosjekMatInt;

	if (prosjekMat < 1.5) prosjekMatInt = 1;
	if (prosjekMat > 1.5 && prosjekMat < 2.5) prosjekMatInt = 2;
	if (prosjekMat >= 2.5 && prosjekMat < 3.5) prosjekMatInt = 3;
	if (prosjekMat >= 3.5 && prosjekMat < 4.5) prosjekMatInt = 4;
	if (prosjekMat >= 4.5) prosjekMatInt = 5;

	while (intFiz > 0) {
		int digit = intFiz % 10;
		zbFiz += digit;
		bbFiz++;

		intFiz /= 10;
	}
	double prosjekFiz = (float)zbFiz / bbFiz;
	int prosjekFizInt;

	if (prosjekFiz < 1.5) prosjekFizInt = 1;
	if (prosjekFiz > 1.5 && prosjekFiz < 2.5) prosjekFizInt = 2;
	if (prosjekFiz >= 2.5 && prosjekFiz < 3.5) prosjekFizInt = 3;
	if (prosjekFiz >= 3.5 && prosjekFiz < 4.5) prosjekFizInt = 4;
	if (prosjekFiz >= 4.5) prosjekFizInt = 5;

	while (intHem > 0) {
		int digit = intHem % 10;
		zbHem += digit;
		bbHem++;

		intHem /= 10;
	}
	double prosjekHem = (float)zbHem / bbHem;
	int prosjekHemInt;

	if (prosjekHem < 1.5) prosjekHemInt= 1;
	if (prosjekHem > 1.5 && prosjekHem < 2.5) prosjekHemInt= 2;
	if (prosjekHem >= 2.5 && prosjekHem < 3.5) prosjekHemInt = 3;
	if (prosjekHem >= 3.5 && prosjekHem < 4.5) prosjekHemInt = 4;
	if (prosjekHem >= 4.5) prosjekHemInt = 5;

	while (intBio > 0) {
		int digit = intBio % 10;
		zbBio += digit;
		bbBio++;

		intBio /= 10;
	}
	double prosjekBio = (float)zbBio / bbBio;
	int prosjekBioInt;

	if (prosjekBio < 1.5) prosjekBioInt = 1;
	if (prosjekBio > 1.5 && prosjekBio < 2.5) prosjekBioInt = 2;
	if (prosjekBio >= 2.5 && prosjekBio < 3.5) prosjekBioInt = 3;
	if (prosjekBio >= 3.5 && prosjekBio < 4.5) prosjekBioInt = 4;
	if (prosjekBio >= 4.5) prosjekBioInt = 5;

	while (intInf > 0) {
		int digit = intInf % 10;
		zbInf += digit;
		bbInf++;

		intInf /= 10;
	}
	double prosjekInf = (float)zbInf / bbInf;
	int prosjekInfInt;

	if (prosjekInf < 1.5) prosjekInfInt = 1;
	if (prosjekInf > 1.5 && prosjekInf < 2.5) prosjekInfInt = 2;
	if (prosjekInf >= 2.5 && prosjekInf < 3.5) prosjekInfInt = 3;
	if (prosjekInf >= 3.5 && prosjekInf < 4.5) prosjekInfInt = 4;
	if (prosjekInf >= 4.5) prosjekInfInt = 5;

	while (intLik > 0) {
		int digit = intLik % 10;
		zbLik += digit;
		bbLik++;

		intLik /= 10;
	}
	double prosjekLik = (float)zbLik / bbLik;
	int prosjekLikInt;

	if (prosjekLik < 1.5) prosjekLikInt = 1;
	if (prosjekLik > 1.5 && prosjekLik < 2.5) prosjekLikInt = 2;
	if (prosjekLik >= 2.5 && prosjekLik < 3.5) prosjekLikInt = 3;
	if (prosjekLik >= 3.5 && prosjekLik < 4.5) prosjekLikInt = 4;
	if (prosjekLik >= 4.5) prosjekLikInt = 5;

	while (intSport > 0) {
		int digit = intSport % 10;
		zbSport += digit;
		bbSport++;

		intSport /= 10;
	}
	double prosjekSport = (float)zbSport / bbSport;
	int prosjekSportInt;

	if (prosjekSport < 1.5) prosjekSportInt = 1;
	if (prosjekSport > 1.5 && prosjekSport < 2.5) prosjekSportInt = 2;
	if (prosjekSport >= 2.5 && prosjekSport < 3.5) prosjekSportInt = 3;
	if (prosjekSport >= 3.5 && prosjekSport < 4.5) prosjekSportInt = 4;
	if (prosjekSport >= 4.5) prosjekSportInt = 5;

	while (intKul > 0) {
		int digit = intKul % 10;
		zbKul += digit;
		bbKul++;

		intKul /= 10;
	}
	double prosjekKul = (float)zbKul / bbKul;
	int prosjekKulInt;

	if (prosjekKul < 1.5) prosjekKulInt = 1;
	if (prosjekKul > 1.5 && prosjekKul < 2.5) prosjekKulInt = 2;
	if (prosjekKul >= 2.5 && prosjekKul < 3.5) prosjekKulInt = 3;
	if (prosjekKul >= 3.5 && prosjekKul < 4.5) prosjekKulInt = 4;
	if (prosjekKul >= 4.5) prosjekKulInt = 5;

	while (intPro > 0) {
		int digit = intPro % 10;
		zbPro += digit;
		bbPro++;

		intPro /= 10;
	}
	double prosjekPro = (float)zbPro / bbPro;
	int prosjekProInt;

	if (prosjekPro < 1.5) prosjekProInt = 1;
	if (prosjekPro > 1.5 && prosjekPro < 2.5) prosjekProInt = 2;
	if (prosjekPro >= 2.5 && prosjekPro < 3.5) prosjekProInt = 3;
	if (prosjekPro >= 3.5 && prosjekPro < 4.5) prosjekProInt = 4;
	if (prosjekPro >= 4.5) prosjekProInt = 5;

	double prosjekFull = (prosjekBioInt + prosjekBosInt + prosjekEngInt + prosjekFizInt + prosjekGeoInt + prosjekHemInt + prosjekHisInt + prosjekInfInt + prosjekKulInt + prosjekLikInt + prosjekMatInt + prosjekNjeInt + prosjekProInt + prosjekSportInt) / (float)14;

	cout << "Prosjek svih ocjena ti je: \n\n";

	cout << "Bosanski Jezik i Knjizevnost - " << prosjekBos << endl;
	cout << "test 1" << zbBos<< "_" << bbBos;
	cout << "Engleski Jezik - " << prosjekEng << endl;
	cout << "Njemacki Jezik - " << prosjekNje << endl;
	cout << "Historija - " << prosjekHis << endl;
	cout << "Geografija - " << prosjekGeo << endl;
	cout << "Matematika - " << prosjekMat << endl;
	cout << "Fizika - " << prosjekFiz << endl;
	cout << "Hemija - " << prosjekHem << endl;
	cout << "Biologija - " << prosjekBio << endl;
	cout << "Informatika - " << prosjekInf << endl;
	cout << "Likovna Kultura - " << prosjekLik << endl;
	cout << "Sport - " << prosjekSport << endl;
	cout << "Kultura Religija / Vjeronauka - " << prosjekKul << endl;
	cout << "Programiranje - " << prosjekPro << endl;
	cout << "\nA ukupni prosjek ti je: " << prosjekFull<< endl;

	system("pause");
	system("CLS");

}

void resetFunc() {

	string odabirReset;

	cout << "\t Da li ste sigurni da zelite ovo uraditi?"<<endl;
	cin >> odabirReset;

	if (odabirReset == "da" || odabirReset == "Da") {

		ofstream bosanski("C:/SkolaOcjene/Bosanski.txt");
		ofstream engleski("C:/SkolaOcjene/Engleski.txt");
		ofstream njemacki("C:/SkolaOcjene/Njemacki.txt");
		ofstream historija("C:/SkolaOcjene/Historija.txt");
		ofstream geografija("C:/SkolaOcjene/Geografija.txt");
		ofstream matematika("C:/SkolaOcjene/Matematika.txt");
		ofstream fizika("C:/SkolaOcjene/Fizika.txt");
		ofstream hemija("C:/SkolaOcjene/Hemija.txt");
		ofstream biologija("C:/SkolaOcjene/Biologija.txt");
		ofstream informatika("C:/SkolaOcjene/Informatika.txt");
		ofstream likovno("C:/SkolaOcjene/Likovno.txt");
		ofstream sport("C:/SkolaOcjene/Sport.txt");
		ofstream kulturaReligija("C:/SkolaOcjene/KulturaReligija.txt");
		ofstream programiranje("C:/SkolaOcjene/Programiranje.txt");
		cout << "\t Molim ponovo pokrenite program za restart.\n";
		system("pause");
		system("CLS");
	}
	

}

int main() {

	string odabirPrviPut, odabirMain;

	fstream bosanski("C:/SkolaOcjene/Bosanski.txt");
	fstream engleski("C:/SkolaOcjene/Engleski.txt");
	fstream njemacki("C:/SkolaOcjene/Njemacki.txt");
	fstream historija("C:/SkolaOcjene/Historija.txt");
	fstream geografija("C:/SkolaOcjene/Geografija.txt");
	fstream matematika("C:/SkolaOcjene/Matematika.txt");
	fstream fizika("C:/SkolaOcjene/Fizika.txt");
	fstream hemija("C:/SkolaOcjene/Hemija.txt");
	fstream biologija("C:/SkolaOcjene/Biologija.txt");
	fstream informatika("C:/SkolaOcjene/Informatika.txt");
	fstream likovno("C:/SkolaOcjene/Likovno.txt");
	fstream sport("C:/SkolaOcjene/Sport.txt");
	fstream kulturaReligija("C:/SkolaOcjene/KulturaReligija.txt");
	fstream programiranje("C:/SkolaOcjene/Programiranje.txt");

	getline(bosanski, stBos);
	getline(engleski, stEng);
	getline(njemacki, stNje);
	getline(historija, stHis);
	getline(geografija, stGeo);
	getline(matematika, stMat);
	getline(fizika, stFiz);
	getline(hemija, stHem);
	getline(biologija, stBio);
	getline(informatika, stInf);
	getline(likovno, stLik);
	getline(sport, stSport);
	getline(kulturaReligija, stKul);
	getline(programiranje, stPro);

	bosanski.close();

	ifstream prviUlazakUpis("C:/SkolaOcjene/prvi.txt");

	if (prviUlazakUpis.good()) {

		goto unos;

	}
	else {

		ofstream prviUlazakIspis("C:/SkolaOcjene/prvi.txt");
		prviUlazakIspis.close();

	}


	cout << "Da li je ovo prvi put da palite program? ( Da ili Ne )";
	cin >> odabirPrviPut;

	if (odabirPrviPut == "Da" || odabirPrviPut == "da") {

		_mkdir("C:/SkolaOcjene");
		ofstream bosanski("C:/SkolaOcjene/Bosanski.txt");
		ofstream engleski("C:/SkolaOcjene/Engleski.txt");
		ofstream njemacki("C:/SkolaOcjene/Njemacki.txt");
		ofstream historija("C:/SkolaOcjene/Historija.txt");
		ofstream geografija("C:/SkolaOcjene/Geografija.txt");
		ofstream matematika("C:/SkolaOcjene/Matematika.txt");
		ofstream fizika("C:/SkolaOcjene/Fizika.txt");
		ofstream hemija("C:/SkolaOcjene/Hemija.txt");
		ofstream biologija("C:/SkolaOcjene/Biologija.txt");
		ofstream informatika("C:/SkolaOcjene/Informatika.txt");
		ofstream likovno("C:/SkolaOcjene/Likovno.txt");
		ofstream sport("C:/SkolaOcjene/Sport.txt");
		ofstream kulturaReligija("C:/SkolaOcjene/KulturaReligija.txt");
		ofstream programiranje("C:/SkolaOcjene/Programiranje.txt");

	}
	else {

		system("CLS");
		goto unos;

	}

unos: cout << "\t\t Kalkulator za Ocjene\n";
	cout << "\t	Odaberi Jednu od Opcija\n";
	cout << "Unos Ocjena      Ispis Ocjena      Prosjek      Reset\n\t\t	";

	cin >> ws;
	getline(cin, odabirMain);

	if (odabirMain == "unos" || odabirMain == "Unos" || odabirMain == "1" || odabirMain == "unos ocjena" || odabirMain == "Unos ocjena" || odabirMain == "Unos Ocjena") {
		unosFunc();
		goto unos;
	}
	else if (odabirMain == "ispis" || odabirMain == "Ispis" || odabirMain == "2" || odabirMain == "ispis ocjena" || odabirMain == "Ispis ocjena" || odabirMain == "Ispis Ocjena") {
		ispisFunc();
		goto unos;
	}
	else if (odabirMain == "prosjek" || odabirMain == "Prosjek" || odabirMain == "3") {
		prosjekFunc();
		goto unos;
	}
	else if (odabirMain == "reset" || odabirMain == "Reset" || odabirMain == "4") {
		resetFunc();
		goto unos;
	}
	else if (odabirMain == "exit" || odabirMain == "izlaz" || odabirMain == "Exit" || odabirMain == "Izlaz") {
		exit(0);

	}
	else {

		cout << "Pogresna vrijednost!\n Ponovi Unos!\n";
		system("pause");
		system("CLS");
		goto unos;

	}

	return 0;

	//Bakir Omanovic
}
