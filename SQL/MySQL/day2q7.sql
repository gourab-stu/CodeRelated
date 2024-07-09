CREATE TABLE JOB (
    JOB_ID INT PRIMARY KEY,
    FUNCTION VARCHAR(30)
);

CREATE TABLE LOCATION (
    LOCATION_ID INT PRIMARY KEY,
    REGIONAL_GROUP VARCHAR(30)
);

CREATE TABLE DEPARTMENT (
    D_ID INT PRIMARY KEY,
    NAME VARCHAR(30),
    LOCATION_ID INT,
    FOREIGN KEY (LOCATION_ID) REFERENCES LOCATION(LOCATION_ID)
);

CREATE TABLE EMPLOYEE (
    EID INT PRIMARY KEY,
    F_NAME VARCHAR(30),
    L_NAME VARCHAR(30),
    JOB_ID INT,
    SALARY INT,
    D_ID INT,
    FOREIGN KEY (D_ID) REFERENCES DEPARTMENT(D_ID),
    FOREIGN KEY (JOB_ID) REFERENCES JOB(JOB_ID)
);

-- INSERTING DATA INTO JOB TABLE
INSERT INTO JOB VALUES (1, 'Programmer'), (2, 'Engineer'), (3, 'Analyst');

SELECT * FROM JOB;

-- INSERTING DATA INTO LOCATION TABLE
INSERT INTO LOCATION VALUES (1, 'Kolkata'), (2, 'Salt Lake'), (3, 'Mumbai');
SELECT * FROM LOCATION;

-- INSERTING DATA INTO DEPARTMENT TABLE
INSERT INTO DEPARTMENT VALUES (1, 'IT', 1), (2, 'Finance', 2), (3, 'Marketing', 3), (4, 'Communication', 2);
SELECT * FROM DEPARTMENT;

-- INSERTING DATA INTO EMPLOYEE TABLE
INSERT INTO EMPLOYEE VALUES (1, 'John', 'Doe', 1, 50000, 1),
(2, 'Jane', 'Smith', 2, 60000, 2),
(3, 'Alice', 'Johnson', 3, 70000, 3),
(4, 'Bob', 'Williams', 1, 80000, 4),
(5, 'Charlie', 'Brown', 2, 90000, 1),
(6, 'David', 'Jones', 3, 100000, 2),
(7, 'Eve', 'Miller', 1, 110000, 3),
(8, 'Frank', 'Davis', 2, 120000, 4),
(9, 'Grace', 'Garcia', 3, 130000, 1),
(10, 'Hank', 'Martinez', 1, 140000, 2),
(11, 'Ivy', 'Rodriguez', 2, 150000, 3),
(12, 'Jack', 'Wilson', 3, 60000, 4),
(13, 'Kara', 'Lopez', 1, 70000, 1),
(14, 'Leo', 'Gonzalez', 2, 80000, 2),
(15, 'Mia', 'Perez', 3, 90000, 3),
(16, 'Nina', 'Thomas', 1, 100000, 4),
(17, 'Oscar', 'Anderson', 2, 110000, 1),
(18, 'Paul', 'Taylor', 3, 120000, 2),
(19, 'Quinn', 'Moore', 1, 130000, 3),
(20, 'Ryan', 'Jackson', 2, 140000, 4);
SELECT * FROM EMPLOYEE;

-- Q1
SELECT F_NAME, L_NAME
FROM EMPLOYEE E1
WHERE SALARY > ANY (SELECT AVG(SALARY)
                    FROM EMPLOYEE E2
                    WHERE E2.D_ID = E1.D_ID
                    GROUP BY D_ID);

-- Q2
SELECT NAME
FROM DEPARTMENT
WHERE LOCATION_ID = (SELECT LOCATION_ID
                     FROM LOCATION
                     WHERE REGIONAL_GROUP = 'Salt Lake');

-- DROP DATABASE day2q7;