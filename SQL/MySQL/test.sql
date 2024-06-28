USE TEST;

CREATE TABLE employee (
    emp_name VARCHAR(30),
    street VARCHAR(30),
    city VARCHAR(30)
);

CREATE TABLE work (
    emp_name VARCHAR(30),
    company_name VARCHAR(30),
    salary INT DEFAULT 10000
);

CREATE TABLE company (
    company_name VARCHAR(30),
    city VARCHAR(30),
    CHECK (company_name = 'IOC' OR company_name = 'ABC' OR company_name = 'XYZ')
);

CREATE TABLE manages (
    emp_name VARCHAR(30),
    manager_name VARCHAR(30)
);

INSERT INTO employee (emp_name, street, city) VALUES
('Rajat', 'GT Road', 'Kolkata'),
('Aditya', 'Barasat Road', 'Sodepur'),
('Arjun', 'AJC Bose Road', 'Maniktala'),
('Saima', 'MG Road', 'Mumbai'),
('Reyansh', 'GT Road', 'Kolkata'),
('Ayaan', 'BT Road', 'Barrackpore'),
('Krishna', 'MG Road', 'Mumbai');

INSERT INTO company (company_name, city) VALUES
('IOC', 'Kolkata'),
('ABC', 'Mumbai'),
('XYZ', 'Shyambazar');

INSERT INTO manages (emp_name, manager_name) VALUES
('Rajat', 'Rajat'),
('Aditya', 'Rajat'),
('Arjun', 'Saima'),
('Saima', 'Saima'),
('Reyansh', 'Saima'),
('Ayaan', 'Saima'),
('Krishna', 'Saima');

INSERT INTO work (emp_name, company_name, salary) VALUES
('Rajat', 'ABC', 15000),
('Aditya', 'IOC', 13000),
('Arjun', 'ABC', 14000),
('Saima', 'XYZ', 17000),
('Reyansh', 'IOC', 16000),
('Ayaan', 'ABC', 15000),
('Krishna', 'XYZ', 19000);


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

--q4
SELECT company_name
FROM company
WHERE city IN (SELECT city
               FROM company
               WHERE company_name = 'ABC');

-- q4
SELECT emp_name, city
FROM employee
WHERE emp_name IN (SELECT emp_name
                   FROM work
                   WHERE company_name = 'ABC');

-- SELECT emp_name
-- FROM work
-- WHERE salary > (SELECT salary
--                 FROM work
--                 WHERE company_name = 'IOC');
