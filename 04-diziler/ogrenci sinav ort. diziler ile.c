#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define STUDENTS 3
#define EXAMS 4

int minimum(const int grades[][EXAMS],int pupils,int tests);
int maximum(const int grades[][EXAMS],int pupils,int tests);
double average(const int setOfGrades[],int tests);
void printArray(const int grades[][EXAMS],int pupils,int tests);

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Turkish");
	
	int students;
	const int studentsGrades[STUDENTS][EXAMS]={{77,68,86,73},{96,87,89,78},{70,90,86,81}};
	printf("The array is:\n");
	
	printArray(studentsGrades,STUDENTS,EXAMS);
	
	printf("\n\n Lower grade=%d\n High grade=%d\n",minimum(studentsGrades,STUDENTS,EXAMS),maximum(studentsGrades,STUDENTS,EXAMS));
	
	for(students=0; students<STUDENTS; students++){
		printf("The average grade for student %d is %.2f\n",students,average(studentsGrades[students],EXAMS));
	}

	return 0;
}



int minimum(const int grades[][EXAMS],int pupils,int tests)
{
	int i,j;
	int lowGrade=100;
	for(i=0; i<pupils; i++){
		for(j=0; j<tests; j++){
			if(grades[i][j]<lowGrade){
				lowGrade=grades[i][j];
			}
		}
	}
	
	return lowGrade;
} //birinci fonksiyonun bitisi //

int maximum(const int grades[][EXAMS],int pupils,int tests)
{
	int i,j;
	int highGrade=0;
	
	for(i=0; i<pupils; i++){
		for(j=0; j<tests ;j++){
			if(grades[i][j]>highGrade){
				highGrade=grades[i][j];
			}
		}
	}
	
	return highGrade;
} // ikinci fonksiyonun bitisi //

double average(const int setOfGrades[],int tests)
{
	int i;
	int total=0;
	for(i=0; i<tests; i++){
		total+=setOfGrades[i];
	}
    return (double)total/tests; 	
	
	
} // ucuncu fonksiyonun bitisi //

void printArray(const int grades[][EXAMS],int pupils,int tests)
{
	
	int i,j;
	printf("                     [1]  [2]  [3]  [4]");
	
	for(i=0; i<pupils; i++){
		printf("\n studentsGrades[%d]",i);
		for(j=0; j<tests; j++){
			printf("%5d",grades[i][j]);
		}
	}
} // dorduncu fonksiyonun bitisi //
