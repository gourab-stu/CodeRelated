-- Consider the following schema of a relational database:
--     Employee (emp_name, street, city)
--     Work (emp_name,company_name, salary) salary defaults to 10,000
--     Company (company_name, city) company name must be either one of IOC, ABC or XYZ
--     Manages (emp_name, manager_name)
-- Create table through appropriate SQL commands. Define all integrity constraints and enter sufficient data 
-- through user-friendly form design. Write SQL commands for the following queries:
--     a) Find the names, street address and cities of residence of all employees who work for ABC company and
--        earn more than Rs. 10.000.
--     b) Find all employees who do not work for IOC company.
--     c) Find the names of all employees who work for IOC company.
--     d) Assume that the company may be located in several cities. Find all companies located in every city
--        in which ABC company is located.
--     e) Find the names and cities of residence of all employees who work for ABC company.
-- Find all employees who earn more than every employee of IOC company.

CREATE DATABASE day1q3;

USE day1q3;

CREATE TABLE employee (
    emp_name VARCHAR(30) PRIMARY KEY,
    street VARCHAR(30),
    city VARCHAR(30)
);

CREATE TABLE company (
    company_name VARCHAR(30),
    city VARCHAR(30),
    CHECK (company_name = 'IOC' OR company_name = 'ABC' OR company_name = 'XYZ')
);

CREATE TABLE work (
    emp_name VARCHAR(30),
    company_name VARCHAR(30),
    salary INT DEFAULT 10000,
    FOREIGN KEY (emp_name) REFERENCES employee(emp_name)
);

CREATE TABLE manages (
    emp_name VARCHAR(30),
    manager_name VARCHAR(30),
    FOREIGN KEY (emp_name) REFERENCES employee(emp_name)
);

INSERT INTO employee (emp_name, street, city) VALUES
('Aarav', 'BT Road', 'Barrackpore'),
('Rajat', 'GT Road', 'Kolkata'),
('Vivaan', 'Jessore Road', 'Shyambazar'),
('Aditya', 'Barasat Road', 'Sodepur'),
('Arjun', 'AJC Bose Road', 'Maniktala'),
('Saima', 'MG Road', 'Mumbai'),
('Reyansh', 'GT Road', 'Kolkata'),
('Ayaan', 'BT Road', 'Barrackpore'),
('Krishna', 'MG Road', 'Mumbai'),
('Ishaan', 'GT Road', 'Kolkata'),
('Ananya', 'BT Road', 'Barrackpore'),
('Diya', 'Barasat Road', 'Sodepur'),
('Pari', 'AJC Bose Road', 'Maniktala'),
('Saanvi', 'Jessore Road', 'Shyambazar'),
('Aadhya', 'AJC Bose Road', 'Maniktala'),
('Anika', 'MG Road', 'Mumbai'),
('Anvi', 'BT Road', 'Barrackpore'),
('Aarohi', 'Jessore Road', 'Shyambazar'),
('Nisha', 'MG Road', 'Mumbai'),
('Sneha', 'AJC Bose Road', 'Maniktala');

INSERT INTO company (company_name, city) VALUES
('ABC', 'Kolkata'),
('ABC', 'Shyambazar'),
('ABC', 'Mumbai'),
('IOC', 'Barrackpore'),
('IOC', 'Kolkata'),
('IOC', 'Shyambazar'),
('IOC', 'Sodepur'),
('IOC', 'Maniktala'),
('IOC', 'Mumbai'),
('XYZ', 'Barrackpore'),
('XYZ', 'Kolkata'),
('XYZ', 'Mumbai');

INSERT INTO work (emp_name, company_name, salary) VALUES
('Aarav', 'IOC', 12000),
('Rajat', 'ABC', 15000),
('Vivaan', 'XYZ', 18000),
('Aditya', 'IOC', 13000),
('Arjun', 'ABC', 14000),
('Saima', 'XYZ', 17000),
('Reyansh', 'IOC', 16000),
('Ayaan', 'ABC', 15000),
('Krishna', 'XYZ', 19000),
('Ishaan', 'IOC', 11000),
('Ananya', 'ABC', 14000),
('Diya', 'XYZ', 17000),
('Pari', 'IOC', 13000),
('Saanvi', 'ABC', 14000),
('Aadhya', 'XYZ', 17000),
('Anika', 'IOC', 15000),
('Anvi', 'ABC', 14000),
('Aarohi', 'XYZ', 16000),
('Nisha', 'IOC', 12000),
('Sneha', 'ABC', 15000);

INSERT INTO manages (emp_name, manager_name) VALUES
('Aarav', 'Rajat'),
('Rajat', 'Rajat'),
('Vivaan', 'Rajat'),
('Aditya', 'Rajat'),
('Arjun', 'Saima'),
('Saima', 'Saima'),
('Reyansh', 'Saima'),
('Ayaan', 'Saima'),
('Krishna', 'Saima'),
('Ishaan', 'Ishaan'),
('Ananya', 'Ishaan'),
('Diya', 'Ishaan'),
('Pari', 'Ishaan'),
('Saanvi', 'Saanvi'),
('Aadhya', 'Saanvi'),
('Anika', 'Saanvi'),
('Anvi', 'Saanvi'),
('Aarohi', 'Saanvi'),
('Nisha', 'Saanvi'),
('Sneha', 'Saanvi');

-- q1
SELECT *
FROM employee
WHERE emp_name IN (SELECT emp_name
                  FROM work
                  WHERE company_name = 'ABC' AND salary > 10000);

-- q2
SELECT emp_name
FROM work
WHERE company_name != 'IOC';

-- q3
SELECT emp_name
FROM work
WHERE company_name = 'IOC';

-- q4
SELECT c1.company_name
FROM company c1
WHERE NOT EXISTS ((SELECT c2.city
                   FROM company c2
                   WHERE company_name = 'ABC') EXCEPT (SELECT c3.city
                                                      FROM company c3
                                                      WHERE c3.city = c1.city));

-- q4 temp
SELECT
    *
FROM
    company c1
WHERE
    EXISTS (
        SELECT
            c3.city
        FROM
            company c3
        WHERE
            c3.city = c1.city
    );

-- DROP DATABASE day1q3;