# include<stdio.h>
int main()
{
    float m1, m2, m3, m4, m5, percentage;
    printf(" Enter marks os 5 subjects: ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);
    percentage = (m1 + m2 + m3 + m4 + m5) / 5;
    if (percentage >= 90)
    printf("Grade A");
    else if (percentage >= 80)
    printf("Grade B");
    else if (percentage >= 60)
    printf("Grade c");
    else
    printf("Grade D");
    return 0;
}