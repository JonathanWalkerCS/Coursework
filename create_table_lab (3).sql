/* 
________________________________________________________________________________________________
Lab - Create Table 																               |
Jonathan Walker																	               |
11/2/2023																		               |
																							   |
My creation commands for the company database and employees table are below these six queries. |
_______________________________________________________________________________________________|
a. No employees have idNum 1115. Although Janice Greenwald does have idNum 1114. 

SELECT employees.IdNum, employees.LName, employees.FName
FROM employees
WHERE employees.IdNum = 1115;
________________________________________________________________________________________________
b. Two employees, Mary Parker and Jack Chin have a salary greater than 40000 . 

SELECT employees.Salary, employees.LName, employees.FName
FROM employees
WHERE employees.Salary > '40000';
________________________________________________________________________________________________
c. The average salary for the employees is 42514.8 .

SELECT AVG(employees.Salary) as Average_salary
FROM employees;
________________________________________________________________________________________________
d. The lowest salary is 29860 . 

SELECT MIN(employees.Salary) as Lowest_salary
FROM employees;
________________________________________________________________________________________________
e. The total amount the company is paying in salaries is 212574 . 

SELECT SUM(employees.Salary) as Total_Company_Pay
FROM employees;
________________________________________________________________________________________________
f. There is one employee for each of the five job codes.

SELECT employees.JobCode, COUNT(employees.JobCode) as Total_employees
FROM employees
GROUP BY JobCode;
________________________________________________________________________________________________
*/ 

-- Company database and employees table creation commands:  

DROP DATABASE IF EXISTS Company;
CREATE DATABASE Company;
USE Company;

DROP TABLE IF EXISTS employees;

CREATE TABLE employees (
 
    IdNum INTEGER NOT NULL,
    Lname VARCHAR(35),
    FName VARCHAR(35),
    JobCode VARCHAR(3),
    Salary VARCHAR(5), 
    Phone VARCHAR(12),
    PRIMARY KEY (IdNum)
);

INSERT INTO employees VALUES(1876,'CHIN','JACK','TA1','42400','212/588-5634');
INSERT INTO employees VALUES(1114,'GREENWALD','JANICE','ME3','38000','212/588-1092');
INSERT INTO employees VALUES(1556,'PENNINGTON','MICHAEL','ME1','29860','718/383-5681');
INSERT INTO employees VALUES(1354,'PARKER','MARY','FA3','65800','914/455-2337');
INSERT INTO employees VALUES(1130,'WOOD','DEBORAH','PT2','36514','212/587-0013');