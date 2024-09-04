CREATE TABLE Dept (
    dept_no NUMBER PRIMARY KEY, 
    dept_name VARCHAR(20) UNIQUE, 
    dept_head VARCHAR(20)
);

CREATE TABLE Employee (
    emp_no NUMBER PRIMARY KEY, 
    emp_name VARCHAR(20) UNIQUE, 
    dept VARCHAR(20), 
    manager VARCHAR(20), 
    FOREIGN KEY (dept) REFERENCES Dept (dept_name)
);

CREATE TABLE Project (
    proj_code NUMBER PRIMARY KEY, 
    proj_name VARCHAR(20), 
    start_date DATE, 
    end_date DATE, 
    proj_mgr VARCHAR(20), 
    FOREIGN KEY (proj_mgr) REFERENCES Employee (emp_name)
);

CREATE TABLE WorksOn (
    emp_no NUMBER REFERENCES Employee,
    proj_code NUMBER REFERENCES Project
);

INSERT INTO Dept (dept_no, dept_name, dept_head) VALUES (1, 'sales', 'Mainak');
INSERT INTO Dept (dept_no, dept_name, dept_head) VALUES (2, 'finance', 'Tuhin');
INSERT INTO Dept (dept_no, dept_name, dept_head) VALUES (3, 'management', 'Santosh');
INSERT INTO Dept (dept_no, dept_name, dept_head) VALUES (4, 'quality', 'Anjali');

SELECT * FROM Dept;

INSERT INTO Employee (emp_no, emp_name, dept, manager) VALUES (1, 'Mainak', 'sales', 'Bhoomi');
INSERT INTO Employee (emp_no, emp_name, dept, manager) VALUES (2, 'Dinesh', 'sales', 'Bhoomi');
INSERT INTO Employee (emp_no, emp_name, dept, manager) VALUES (3, 'Faizal', 'sales', 'Bhoomi');
INSERT INTO Employee (emp_no, emp_name, dept, manager) VALUES (4, 'Varun', 'finance', 'Chandan');
INSERT INTO Employee (emp_no, emp_name, dept, manager) VALUES (5, 'Chandan', 'finance', 'Chandan');
INSERT INTO Employee (emp_no, emp_name, dept, manager) VALUES (6, 'Tuhin', 'finance', 'Bhoomi');
INSERT INTO Employee (emp_no, emp_name, dept, manager) VALUES (7, 'Rohit', 'quality', 'Anjali');
INSERT INTO Employee (emp_no, emp_name, dept, manager) VALUES (8, 'Divya', 'management', 'Chandan');
INSERT INTO Employee (emp_no, emp_name, dept, manager) VALUES (9, 'Santosh', 'management', 'Santosh');
INSERT INTO Employee (emp_no, emp_name, dept, manager) VALUES (10, 'Anjali', 'quality', 'Anjali');
INSERT INTO Employee (emp_no, emp_name, dept, manager) VALUES (11, 'Gourab', 'quality', 'Santosh');
INSERT INTO Employee (emp_no, emp_name, dept, manager) VALUES (12, 'Himangshu', 'quality', 'Santosh');
INSERT INTO Employee (emp_no, emp_name, dept, manager) VALUES (13, 'Akshay', 'sales', 'Chandan');
INSERT INTO Employee (emp_no, emp_name, dept, manager) VALUES (14, 'Bhoomi', 'sales', 'Bhoomi');
INSERT INTO Employee (emp_no, emp_name, dept, manager) VALUES (15, 'Koushik', 'management', 'Anjali');
INSERT INTO Employee (emp_no, emp_name, dept, manager) VALUES (16, 'Suman', 'management', 'Santosh');
INSERT INTO Employee (emp_no, emp_name, dept, manager) VALUES (17, 'Nishant', 'management', 'Anjali');

SELECT * FROM Employee;

INSERT INTO Project (proj_code, proj_name, start_date, end_date, proj_mgr) VALUES (1, 'hotel management', '25-JUN-2019', '30-SEP-2019', 'Bhoomi');
INSERT INTO Project (proj_code, proj_name, start_date, end_date, proj_mgr) VALUES (2, 'e-commerce', '12-JUL-2016', '31-Jan-2017', 'Santosh');
INSERT INTO Project (proj_code, proj_name, start_date, end_date, proj_mgr) VALUES (3, 'railway management', '17-Jan-2015', '26-SEP-2018', 'Anjali');
INSERT INTO Project (proj_code, proj_name, start_date, end_date, proj_mgr) VALUES (4, 'parking allocation', '06-AUG-2020', '30-NOV-2020', 'Chandan');

SELECT * FROM Project;

INSERT INTO WorksOn (emp_no, proj_code) VALUES (1, 1);
INSERT INTO WorksOn (emp_no, proj_code) VALUES (2, 1);
INSERT INTO WorksOn (emp_no, proj_code) VALUES (3, 1);
INSERT INTO WorksOn (emp_no, proj_code) VALUES (4, 4);
INSERT INTO WorksOn (emp_no, proj_code) VALUES (5, 4);
INSERT INTO WorksOn (emp_no, proj_code) VALUES (6, 1);
INSERT INTO WorksOn (emp_no, proj_code) VALUES (7, 3);
INSERT INTO WorksOn (emp_no, proj_code) VALUES (8, 4);
INSERT INTO WorksOn (emp_no, proj_code) VALUES (9, 2);
INSERT INTO WorksOn (emp_no, proj_code) VALUES (10, 3);
INSERT INTO WorksOn (emp_no, proj_code) VALUES (11, 2);
INSERT INTO WorksOn (emp_no, proj_code) VALUES (12, 2);
INSERT INTO WorksOn (emp_no, proj_code) VALUES (13, 4);
INSERT INTO WorksOn (emp_no, proj_code) VALUES (14, 1);
INSERT INTO WorksOn (emp_no, proj_code) VALUES (15, 3);
INSERT INTO WorksOn (emp_no, proj_code) VALUES (16, 2);
INSERT INTO WorksOn (emp_no, proj_code) VALUES (17, 3);

SELECT * FROM WorksOn;

-- Q1
SELECT proj_mgr
FROM Project, Dept
WHERE proj_mgr = dept_head;

-- USING SET OPERATION
SELECT proj_mgr
FROM Project
INTERSECT
SELECT dept_head
FROM Dept;

-- Q2
SELECT P.proj_name, P.proj_mgr, E1.emp_name, E2.dept
FROM Project P, WorksOn W, Employee E1, Employee E2
WHERE P.proj_code = W.proj_code AND W.emp_no = E1.emp_no AND P.proj_mgr = E2.emp_name
ORDER BY P.proj_name;

-- Q3
SELECT emp_name
FROM Employee
MINUS
SELECT proj_mgr
FROM Project;

-- DROP TABLE WorksOn;
-- DROP TABLE Project;
-- DROP TABLE Employee;
-- DROP TABLE Dept;