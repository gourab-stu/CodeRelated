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
    salary NUMBER DEFAULT 10000,
    FOREIGN KEY (emp_name) REFERENCES employee(emp_name)
);

CREATE TABLE manages (
    emp_name VARCHAR(30),
    manager_name VARCHAR(30),
    FOREIGN KEY (emp_name) REFERENCES employee(emp_name)
);

INSERT INTO employee (emp_name, street, city) VALUES ('Aarav', 'BT Road', 'Barrackpore');
INSERT INTO employee (emp_name, street, city) VALUES ('Rajat', 'GT Road', 'Kolkata');
INSERT INTO employee (emp_name, street, city) VALUES ('Vivaan', 'Jessore Road', 'Shyambazar');
INSERT INTO employee (emp_name, street, city) VALUES ('Aditya', 'Barasat Road', 'Sodepur');
INSERT INTO employee (emp_name, street, city) VALUES ('Arjun', 'AJC Bose Road', 'Maniktala');
INSERT INTO employee (emp_name, street, city) VALUES ('Saima', 'MG Road', 'Mumbai');
INSERT INTO employee (emp_name, street, city) VALUES ('Reyansh', 'GT Road', 'Kolkata');
INSERT INTO employee (emp_name, street, city) VALUES ('Ayaan', 'BT Road', 'Barrackpore');
INSERT INTO employee (emp_name, street, city) VALUES ('Krishna', 'MG Road', 'Mumbai');
INSERT INTO employee (emp_name, street, city) VALUES ('Ishaan', 'GT Road', 'Kolkata');
INSERT INTO employee (emp_name, street, city) VALUES ('Ananya', 'BT Road', 'Barrackpore');
INSERT INTO employee (emp_name, street, city) VALUES ('Diya', 'Barasat Road', 'Sodepur');
INSERT INTO employee (emp_name, street, city) VALUES ('Pari', 'AJC Bose Road', 'Maniktala');
INSERT INTO employee (emp_name, street, city) VALUES ('Saanvi', 'Jessore Road', 'Shyambazar');
INSERT INTO employee (emp_name, street, city) VALUES ('Aadhya', 'AJC Bose Road', 'Maniktala');
INSERT INTO employee (emp_name, street, city) VALUES ('Anika', 'MG Road', 'Mumbai');
INSERT INTO employee (emp_name, street, city) VALUES ('Anvi', 'BT Road', 'Barrackpore');
INSERT INTO employee (emp_name, street, city) VALUES ('Aarohi', 'Jessore Road', 'Shyambazar');
INSERT INTO employee (emp_name, street, city) VALUES ('Nisha', 'MG Road', 'Mumbai');
INSERT INTO employee (emp_name, street, city) VALUES ('Sneha', 'AJC Bose Road', 'Maniktala');

SELECT * FROM employee;

INSERT INTO company (company_name, city) VALUES ('ABC', 'Kolkata');
INSERT INTO company (company_name, city) VALUES ('ABC', 'Shyambazar');
INSERT INTO company (company_name, city) VALUES ('ABC', 'Mumbai');
INSERT INTO company (company_name, city) VALUES ('IOC', 'Barrackpore');
INSERT INTO company (company_name, city) VALUES ('IOC', 'Kolkata');
INSERT INTO company (company_name, city) VALUES ('IOC', 'Shyambazar');
INSERT INTO company (company_name, city) VALUES ('IOC', 'Sodepur');
INSERT INTO company (company_name, city) VALUES ('IOC', 'Maniktala');
INSERT INTO company (company_name, city) VALUES ('IOC', 'Mumbai');
INSERT INTO company (company_name, city) VALUES ('XYZ', 'Barrackpore');
INSERT INTO company (company_name, city) VALUES ('XYZ', 'Kolkata');
INSERT INTO company (company_name, city) VALUES ('XYZ', 'Mumbai');

SELECT * FROM company;

INSERT INTO work (emp_name, company_name, salary) VALUES ('Aarav', 'IOC', 12000);
INSERT INTO work (emp_name, company_name, salary) VALUES ('Rajat', 'ABC', 15000);
INSERT INTO work (emp_name, company_name, salary) VALUES ('Vivaan', 'XYZ', 18000);
INSERT INTO work (emp_name, company_name, salary) VALUES ('Aditya', 'IOC', 13000);
INSERT INTO work (emp_name, company_name, salary) VALUES ('Arjun', 'ABC', 14000);
INSERT INTO work (emp_name, company_name, salary) VALUES ('Saima', 'XYZ', 17000);
INSERT INTO work (emp_name, company_name, salary) VALUES ('Reyansh', 'IOC', 16000);
INSERT INTO work (emp_name, company_name, salary) VALUES ('Ayaan', 'ABC', 9000);
INSERT INTO work (emp_name, company_name, salary) VALUES ('Krishna', 'XYZ', 19000);
INSERT INTO work (emp_name, company_name, salary) VALUES ('Ishaan', 'IOC', 11000);
INSERT INTO work (emp_name, company_name, salary) VALUES ('Ananya', 'ABC', 14000);
INSERT INTO work (emp_name, company_name, salary) VALUES ('Diya', 'XYZ', 17000);
INSERT INTO work (emp_name, company_name, salary) VALUES ('Pari', 'IOC', 13000);
INSERT INTO work (emp_name, company_name, salary) VALUES ('Saanvi', 'ABC', 14000);
INSERT INTO work (emp_name, company_name, salary) VALUES ('Aadhya', 'XYZ', 17000);
INSERT INTO work (emp_name, company_name, salary) VALUES ('Anika', 'IOC', 15000);
INSERT INTO work (emp_name, company_name, salary) VALUES ('Anvi', 'ABC', 10000);
INSERT INTO work (emp_name, company_name, salary) VALUES ('Aarohi', 'XYZ', 16000);
INSERT INTO work (emp_name, company_name, salary) VALUES ('Nisha', 'IOC', 12000);
INSERT INTO work (emp_name, company_name, salary) VALUES ('Sneha', 'ABC', 15000);

SELECT * FROM work;

INSERT INTO manages (emp_name, manager_name) VALUES ('Aarav', 'Rajat');
INSERT INTO manages (emp_name, manager_name) VALUES ('Rajat', 'Rajat');
INSERT INTO manages (emp_name, manager_name) VALUES ('Vivaan', 'Rajat');
INSERT INTO manages (emp_name, manager_name) VALUES ('Aditya', 'Rajat');
INSERT INTO manages (emp_name, manager_name) VALUES ('Arjun', 'Saima');
INSERT INTO manages (emp_name, manager_name) VALUES ('Saima', 'Saima');
INSERT INTO manages (emp_name, manager_name) VALUES ('Reyansh', 'Saima');
INSERT INTO manages (emp_name, manager_name) VALUES ('Ayaan', 'Saima');
INSERT INTO manages (emp_name, manager_name) VALUES ('Krishna', 'Saima');
INSERT INTO manages (emp_name, manager_name) VALUES ('Ishaan', 'Ishaan');
INSERT INTO manages (emp_name, manager_name) VALUES ('Ananya', 'Ishaan');
INSERT INTO manages (emp_name, manager_name) VALUES ('Diya', 'Ishaan');
INSERT INTO manages (emp_name, manager_name) VALUES ('Pari', 'Ishaan');
INSERT INTO manages (emp_name, manager_name) VALUES ('Saanvi', 'Saanvi');
INSERT INTO manages (emp_name, manager_name) VALUES ('Aadhya', 'Saanvi');
INSERT INTO manages (emp_name, manager_name) VALUES ('Anika', 'Saanvi');
INSERT INTO manages (emp_name, manager_name) VALUES ('Anvi', 'Saanvi');
INSERT INTO manages (emp_name, manager_name) VALUES ('Aarohi', 'Saanvi');
INSERT INTO manages (emp_name, manager_name) VALUES ('Nisha', 'Saanvi');
INSERT INTO manages (emp_name, manager_name) VALUES ('Sneha', 'Saanvi');

SELECT * FROM manages;

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
SELECT DISTINCT c1.company_name
FROM company c1
WHERE NOT EXISTS ((SELECT c2.city FROM company c2 WHERE c2.company_name = 'ABC') MINUS
                  (SELECT c3.city FROM company c3 WHERE c3.company_name = c1.company_name));

-- q4 ChatGPT
SELECT DISTINCT company_name
FROM company c1
WHERE NOT EXISTS (SELECT city
                  FROM company c2
                  WHERE c2.company_name = 'ABC' AND NOT EXISTS (SELECT *
                                                                FROM Company c3
                                                                WHERE c3.company_name = C1.company_name AND c3.city = c2.city));

-- q5
SELECT emp_name, city
FROM employee
WHERE emp_name IN (SELECT emp_name
                  FROM work
                  WHERE company_name = 'ABC');

-- q6
SELECT emp_name
FROM work
WHERE salary > ANY (SELECT salary
                    FROM work
                    WHERE company_name = 'IOC');

-- DROP TABLE manages;
-- DROP TABLE work;
-- DROP TABLE company;
-- DROP TABLE employee;