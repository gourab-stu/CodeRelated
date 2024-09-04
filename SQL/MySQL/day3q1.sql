CREATE TABLE Dept (
    dept_no INT PRIMARY KEY, 
    dept_name VARCHAR(20) UNIQUE, 
    dept_head VARCHAR(20)
);

CREATE TABLE Employee (
    emp_no INT PRIMARY KEY, 
    emp_name VARCHAR(20) UNIQUE, 
    dept VARCHAR(20), 
    manager VARCHAR(20), 
    FOREIGN KEY (dept) REFERENCES Dept (dept_name)
);

CREATE TABLE Project (
    proj_code INT PRIMARY KEY, 
    proj_name VARCHAR(20), 
    start_date DATE, 
    end_date DATE, 
    proj_mgr VARCHAR(20), 
    FOREIGN KEY (proj_mgr) REFERENCES Employee (emp_name)
);

CREATE TABLE WorksOn (
    emp_no INT REFERENCES Employee,
    proj_code INT REFERENCES Project
);

INSERT INTO Dept (dept_no, dept_name, dept_head) VALUES (1, 'sales', 'Mainak'), 
(2, 'finance', 'Tuhin'), 
(3, 'management', 'Santosh'), 
(4, 'quality', 'Anjali');

SELECT * FROM Dept;

INSERT INTO Employee (emp_no, emp_name, dept, manager) VALUES (1, 'Mainak', 'sales', 'Bhoomi'), 
(2, 'Dinesh', 'sales', 'Bhoomi'), 
(3, 'Faizal', 'sales', 'Bhoomi'), 
(4, 'Varun', 'finance', 'Chandan'), 
(5, 'Chandan', 'finance', 'Chandan'), 
(6, 'Tuhin', 'finance', 'Bhoomi'), 
(7, 'Rohit', 'quality', 'Anjali'), 
(8, 'Divya', 'management', 'Chandan'), 
(9, 'Santosh', 'management', 'Santosh'), 
(10, 'Anjali', 'quality', 'Anjali'), 
(11, 'Gourab', 'quality', 'Santosh'), 
(12, 'Himangshu', 'quality', 'Santosh'), 
(13, 'Akshay', 'sales', 'Chandan'), 
(14, 'Bhoomi', 'sales', 'Bhoomi'), 
(15, 'Koushik', 'management', 'Anjali'), 
(16, 'Suman', 'management', 'Santosh'), 
(17, 'Nishant', 'management', 'Anjali');

SELECT * FROM Employee;

INSERT INTO Project (proj_code, proj_name, start_date, end_date, proj_mgr) VALUES (1, 'hotel management', '2019-06-25', '2019-09-30', 'Bhoomi'), 
(2, 'e-commerce', '2016-07-12', '2017-01-31', 'Santosh'), 
(3, 'railway management', '2015-01-17', '2018-09-26', 'Anjali'), 
(4, 'parking allocation', '2020-08-06', '2020-11-30', 'Chandan');

SELECT * FROM Project;

INSERT INTO WorksOn (emp_no, proj_code) VALUES (1, 1), 
(2, 1), 
(3, 1), 
(4, 4), 
(5, 4), 
(6, 1), 
(7, 3), 
(8, 4), 
(9, 2), 
(10, 3), 
(11, 2), 
(12, 2), 
(13, 4), 
(14, 1), 
(15, 3), 
(16, 2), 
(17, 3);

SELECT * FROM WorksOn;

-- Q1
SELECT proj_mgr
FROM Project, Dept
WHERE proj_mgr = dept_head;

-- USING SET OPERATION
(SELECT proj_mgr
FROM Project)
INTERSECT
(SELECT dept_head
FROM Dept);

-- Q2
SELECT P.proj_name, P.proj_mgr, E1.emp_name, E2.dept
FROM Project P, WorksOn W, Employee E1, Employee E2
WHERE P.proj_code = W.proj_code AND W.emp_no = E1.emp_no AND P.proj_mgr = E2.emp_name
ORDER BY P.proj_name;

-- Q3
(SELECT emp_name
FROM Employee)
EXCEPT
(SELECT proj_mgr
FROM Project);

-- DROP DATABASE day3q1;