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
    emp_name VARCHAR(30) REFERENCES employee(emp_name),
    company_name VARCHAR(30),
    salary NUMBER DEFAULT 10000
);

CREATE TABLE manages (
    emp_name VARCHAR(30) REFERENCES employee(emp_name),
    manager_name VARCHAR(30)
);

INSERT INTO employee VALUES ('Aarav', 'BT Road', 'Barrackpore');
INSERT INTO employee VALUES ('Rajat', 'GT Road', 'Kolkata');
INSERT INTO employee VALUES ('Vivaan', 'Jessore Road', 'Shyambazar');
INSERT INTO employee VALUES ('Aditya', 'Barasat Road', 'Sodepur');
INSERT INTO employee VALUES ('Arjun', 'AJC Bose Road', 'Maniktala');
INSERT INTO employee VALUES ('Saima', 'MG Road', 'Mumbai');
INSERT INTO employee VALUES ('Reyansh', 'GT Road', 'Kolkata');
INSERT INTO employee VALUES ('Ayaan', 'BT Road', 'Barrackpore');
INSERT INTO employee VALUES ('Krishna', 'MG Road', 'Mumbai');
INSERT INTO employee VALUES ('Ishaan', 'GT Road', 'Kolkata');
INSERT INTO employee VALUES ('Ananya', 'BT Road', 'Barrackpore');
INSERT INTO employee VALUES ('Diya', 'Barasat Road', 'Sodepur');
INSERT INTO employee VALUES ('Pari', 'AJC Bose Road', 'Maniktala');
INSERT INTO employee VALUES ('Saanvi', 'Jessore Road', 'Shyambazar');
INSERT INTO employee VALUES ('Aadhya', 'AJC Bose Road', 'Maniktala');
INSERT INTO employee VALUES ('Anika', 'MG Road', 'Mumbai');
INSERT INTO employee VALUES ('Anvi', 'BT Road', 'Barrackpore');
INSERT INTO employee VALUES ('Aarohi', 'Jessore Road', 'Shyambazar');
INSERT INTO employee VALUES ('Nisha', 'MG Road', 'Mumbai');
INSERT INTO employee VALUES ('Sneha', 'AJC Bose Road', 'Maniktala');

SELECT * FROM employee;

INSERT INTO company VALUES ('ABC', 'Kolkata');
INSERT INTO company VALUES ('ABC', 'Shyambazar');
INSERT INTO company VALUES ('ABC', 'Mumbai');
INSERT INTO company VALUES ('IOC', 'Barrackpore');
INSERT INTO company VALUES ('IOC', 'Kolkata');
INSERT INTO company VALUES ('IOC', 'Shyambazar');
INSERT INTO company VALUES ('IOC', 'Sodepur');
INSERT INTO company VALUES ('IOC', 'Maniktala');
INSERT INTO company VALUES ('IOC', 'Mumbai');
INSERT INTO company VALUES ('XYZ', 'Barrackpore');
INSERT INTO company VALUES ('XYZ', 'Kolkata');
INSERT INTO company VALUES ('XYZ', 'Mumbai');

SELECT * FROM company;

INSERT INTO work VALUES ('Aarav', 'IOC', 12000);
INSERT INTO work VALUES ('Rajat', 'ABC', 15000);
INSERT INTO work VALUES ('Vivaan', 'XYZ', 18000);
INSERT INTO work VALUES ('Aditya', 'IOC', 13000);
INSERT INTO work VALUES ('Arjun', 'ABC', 14000);
INSERT INTO work VALUES ('Saima', 'XYZ', 17000);
INSERT INTO work VALUES ('Reyansh', 'IOC', 16000);
INSERT INTO work VALUES ('Ayaan', 'ABC', 9000);
INSERT INTO work VALUES ('Krishna', 'XYZ', 19000);
INSERT INTO work VALUES ('Ishaan', 'IOC', 11000);
INSERT INTO work VALUES ('Ananya', 'ABC', 14000);
INSERT INTO work VALUES ('Diya', 'XYZ', 17000);
INSERT INTO work VALUES ('Pari', 'IOC', 13000);
INSERT INTO work VALUES ('Saanvi', 'ABC', 14000);
INSERT INTO work VALUES ('Aadhya', 'XYZ', 17000);
INSERT INTO work VALUES ('Anika', 'IOC', 15000);
INSERT INTO work VALUES ('Anvi', 'ABC', 10000);
INSERT INTO work VALUES ('Aarohi', 'XYZ', 16000);
INSERT INTO work VALUES ('Nisha', 'IOC', 12000);
INSERT INTO work VALUES ('Sneha', 'ABC', 15000);

SELECT * FROM work;

INSERT INTO manages VALUES ('Aarav', 'Rajat');
INSERT INTO manages VALUES ('Rajat', 'Rajat');
INSERT INTO manages VALUES ('Vivaan', 'Rajat');
INSERT INTO manages VALUES ('Aditya', 'Rajat');
INSERT INTO manages VALUES ('Arjun', 'Saima');
INSERT INTO manages VALUES ('Saima', 'Saima');
INSERT INTO manages VALUES ('Reyansh', 'Saima');
INSERT INTO manages VALUES ('Ayaan', 'Saima');
INSERT INTO manages VALUES ('Krishna', 'Saima');
INSERT INTO manages VALUES ('Ishaan', 'Ishaan');
INSERT INTO manages VALUES ('Ananya', 'Ishaan');
INSERT INTO manages VALUES ('Diya', 'Ishaan');
INSERT INTO manages VALUES ('Pari', 'Ishaan');
INSERT INTO manages VALUES ('Saanvi', 'Saanvi');
INSERT INTO manages VALUES ('Aadhya', 'Saanvi');
INSERT INTO manages VALUES ('Anika', 'Saanvi');
INSERT INTO manages VALUES ('Anvi', 'Saanvi');
INSERT INTO manages VALUES ('Aarohi', 'Saanvi');
INSERT INTO manages VALUES ('Nisha', 'Saanvi');
INSERT INTO manages VALUES ('Sneha', 'Saanvi');

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
WHERE NOT EXISTS ((SELECT c2.city 
                   FROM company c2 
                   WHERE c2.company_name = 'ABC') MINUS
                  (SELECT c3.city 
                   FROM company c3 
                   WHERE c3.company_name = c1.company_name));

-- q4 ChatGPT
SELECT DISTINCT company_name
FROM company c1
WHERE NOT EXISTS (SELECT city
                  FROM company c2
                  WHERE c2.company_name = 'ABC' AND 
                        NOT EXISTS (SELECT *
                                    FROM Company c3
                                    WHERE c3.company_name = C1.company_name AND 
                                          c3.city = c2.city));

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