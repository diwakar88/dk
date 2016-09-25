/*
Student Name:Diwakar kandel
Subject:programming Fund
Roll No:
Program:WAP to print area of trapezium
Lab No:01
Date:25sep,2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float l,b,h,Area;
printf("Enter length of trapezium:");
scanf("%f",&l);
printf("Enter base of trapezium:");
scanf("%f",&b);
printf("Enter height of trapezium:");
scanf("%f",&h);
Area=0.5*(l+b)*h;
printf("Area of trapezium of %f",Area);
getch();
}