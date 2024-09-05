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

INSERT INTO Dept VALUES (1, 'sales', 'Mainak');
INSERT INTO Dept VALUES (2, 'finance', 'Tuhin');
INSERT INTO Dept VALUES (3, 'management', 'Santosh');
INSERT INTO Dept VALUES (4, 'quality', 'Anjali');

SELECT * FROM Dept;

INSERT INTO Employee VALUES (1, 'Mainak', 'sales', 'Bhoomi');
INSERT INTO Employee VALUES (2, 'Dinesh', 'sales', 'Bhoomi');
INSERT INTO Employee VALUES (3, 'Faizal', 'sales', 'Bhoomi');
INSERT INTO Employee VALUES (4, 'Varun', 'finance', 'Chandan');
INSERT INTO Employee VALUES (5, 'Chandan', 'finance', 'Chandan');
INSERT INTO Employee VALUES (6, 'Tuhin', 'finance', 'Bhoomi');
INSERT INTO Employee VALUES (7, 'Rohit', 'quality', 'Anjali');
INSERT INTO Employee VALUES (8, 'Divya', 'management', 'Chandan');
INSERT INTO Employee VALUES (9, 'Santosh', 'management', 'Santosh');
INSERT INTO Employee VALUES (10, 'Anjali', 'quality', 'Anjali');
INSERT INTO Employee VALUES (11, 'Gourab', 'quality', 'Santosh');
INSERT INTO Employee VALUES (12, 'Himangshu', 'quality', 'Santosh');
INSERT INTO Employee VALUES (13, 'Akshay', 'sales', 'Chandan');
INSERT INTO Employee VALUES (14, 'Bhoomi', 'sales', 'Bhoomi');
INSERT INTO Employee VALUES (15, 'Koushik', 'management', 'Anjali');
INSERT INTO Employee VALUES (16, 'Suman', 'management', 'Santosh');
INSERT INTO Employee VALUES (17, 'Nishant', 'management', 'Anjali');

SELECT * FROM Employee;

INSERT INTO Project VALUES (1, 'hotel management', '25-JUN-2019', '30-SEP-2019', 'Bhoomi');
INSERT INTO Project VALUES (2, 'e-commerce', '12-JUL-2016', '31-Jan-2017', 'Santosh');
INSERT INTO Project VALUES (3, 'railway management', '17-Jan-2015', '26-SEP-2018', 'Anjali');
INSERT INTO Project VALUES (4, 'parking allocation', '06-AUG-2020', '30-NOV-2020', 'Chandan');

SELECT * FROM Project;

INSERT INTO WorksOn VALUES (1, 1);
INSERT INTO WorksOn VALUES (2, 1);
INSERT INTO WorksOn VALUES (3, 1);
INSERT INTO WorksOn VALUES (4, 4);
INSERT INTO WorksOn VALUES (5, 4);
INSERT INTO WorksOn VALUES (6, 1);
INSERT INTO WorksOn VALUES (7, 3);
INSERT INTO WorksOn VALUES (8, 4);
INSERT INTO WorksOn VALUES (9, 2);
INSERT INTO WorksOn VALUES (10, 3);
INSERT INTO WorksOn VALUES (11, 2);
INSERT INTO WorksOn VALUES (12, 2);
INSERT INTO WorksOn VALUES (13, 4);
INSERT INTO WorksOn VALUES (14, 1);
INSERT INTO WorksOn VALUES (15, 3);
INSERT INTO WorksOn VALUES (16, 2);
INSERT INTO WorksOn VALUES (17, 3);

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
WHERE P.proj_code = W.proj_code AND 
      W.emp_no = E1.emp_no AND 
      P.proj_mgr = E2.emp_name
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