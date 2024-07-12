CREATE TABLE JOB (
    JOB_ID NUMBER PRIMARY KEY,
    FUNCTION VARCHAR(30)
);

CREATE TABLE LOCATION (
    LOCATION_ID NUMBER PRIMARY KEY,
    REGIONAL_GROUP VARCHAR(30)
);

CREATE TABLE DEPARTMENT (
    D_ID NUMBER PRIMARY KEY,
    NAME VARCHAR(30),
    LOCATION_ID NUMBER REFERENCES LOCATION
);

CREATE TABLE EMPLOYEE (
    EID NUMBER PRIMARY KEY,
    F_NAME VARCHAR(30),
    L_NAME VARCHAR(30),
    JOB_ID NUMBER REFERENCES JOB,
    SALARY NUMBER,
    D_ID NUMBER REFERENCES DEPARTMENT
);

-- INSERTING DATA INTO JOB TABLE
INSERT INTO JOB (JOB_ID, FUNCTION) VALUES (1, 'Programmer');
INSERT INTO JOB (JOB_ID, FUNCTION) VALUES (2, 'Engineer');
INSERT INTO JOB (JOB_ID, FUNCTION) VALUES (3, 'Analyst');

SELECT * FROM JOB;

-- INSERTING DATA INTO LOCATION TABLE
INSERT INTO LOCATION (LOCATION_ID, REGIONAL_GROUP) VALUES (1, 'Kolkata');
INSERT INTO LOCATION (LOCATION_ID, REGIONAL_GROUP) VALUES (2, 'Salt Lake');
INSERT INTO LOCATION (LOCATION_ID, REGIONAL_GROUP) VALUES (3, 'Mumbai');

SELECT * FROM LOCATION;

-- INSERTING DATA INTO DEPARTMENT TABLE
INSERT INTO DEPARTMENT (D_ID, NAME, LOCATION_ID) VALUES (1, 'IT', 1);
INSERT INTO DEPARTMENT (D_ID, NAME, LOCATION_ID) VALUES (2, 'Finance', 2);
INSERT INTO DEPARTMENT (D_ID, NAME, LOCATION_ID) VALUES (3, 'Marketing', 3);
INSERT INTO DEPARTMENT (D_ID, NAME, LOCATION_ID) VALUES (4, 'Communication', 2);

SELECT * FROM DEPARTMENT;

-- INSERTING DATA INTO EMPLOYEE TABLE
INSERT INTO EMPLOYEE (EID, F_NAME, L_NAME, JOB_ID, SALARY, D_ID) VALUES (1, 'John', 'Doe', 1, 50000, 1);
INSERT INTO EMPLOYEE (EID, F_NAME, L_NAME, JOB_ID, SALARY, D_ID) VALUES (2, 'Jane', 'Smith', 2, 60000, 2);
INSERT INTO EMPLOYEE (EID, F_NAME, L_NAME, JOB_ID, SALARY, D_ID) VALUES (3, 'Alice', 'Johnson', 3, 70000, 3);
INSERT INTO EMPLOYEE (EID, F_NAME, L_NAME, JOB_ID, SALARY, D_ID) VALUES (4, 'Bob', 'Williams', 1, 80000, 4);
INSERT INTO EMPLOYEE (EID, F_NAME, L_NAME, JOB_ID, SALARY, D_ID) VALUES (5, 'Charlie', 'Brown', 2, 90000, 1);
INSERT INTO EMPLOYEE (EID, F_NAME, L_NAME, JOB_ID, SALARY, D_ID) VALUES (6, 'David', 'Jones', 3, 100000, 2);
INSERT INTO EMPLOYEE (EID, F_NAME, L_NAME, JOB_ID, SALARY, D_ID) VALUES (7, 'Eve', 'Miller', 1, 110000, 3);
INSERT INTO EMPLOYEE (EID, F_NAME, L_NAME, JOB_ID, SALARY, D_ID) VALUES (8, 'Frank', 'Davis', 2, 120000, 4);
INSERT INTO EMPLOYEE (EID, F_NAME, L_NAME, JOB_ID, SALARY, D_ID) VALUES (9, 'Grace', 'Garcia', 3, 130000, 1);
INSERT INTO EMPLOYEE (EID, F_NAME, L_NAME, JOB_ID, SALARY, D_ID) VALUES (10, 'Hank', 'Martinez', 1, 140000, 2);
INSERT INTO EMPLOYEE (EID, F_NAME, L_NAME, JOB_ID, SALARY, D_ID) VALUES (11, 'Ivy', 'Rodriguez', 2, 150000, 3);
INSERT INTO EMPLOYEE (EID, F_NAME, L_NAME, JOB_ID, SALARY, D_ID) VALUES (12, 'Jack', 'Wilson', 3, 60000, 4);
INSERT INTO EMPLOYEE (EID, F_NAME, L_NAME, JOB_ID, SALARY, D_ID) VALUES (13, 'Kara', 'Lopez', 1, 70000, 1);
INSERT INTO EMPLOYEE (EID, F_NAME, L_NAME, JOB_ID, SALARY, D_ID) VALUES (14, 'Leo', 'Gonzalez', 2, 80000, 2);
INSERT INTO EMPLOYEE (EID, F_NAME, L_NAME, JOB_ID, SALARY, D_ID) VALUES (15, 'Mia', 'Perez', 3, 90000, 3);
INSERT INTO EMPLOYEE (EID, F_NAME, L_NAME, JOB_ID, SALARY, D_ID) VALUES (16, 'Nina', 'Thomas', 1, 100000, 4);
INSERT INTO EMPLOYEE (EID, F_NAME, L_NAME, JOB_ID, SALARY, D_ID) VALUES (17, 'Oscar', 'Anderson', 2, 110000, 1);
INSERT INTO EMPLOYEE (EID, F_NAME, L_NAME, JOB_ID, SALARY, D_ID) VALUES (18, 'Paul', 'Taylor', 3, 120000, 2);
INSERT INTO EMPLOYEE (EID, F_NAME, L_NAME, JOB_ID, SALARY, D_ID) VALUES (19, 'Quinn', 'Moore', 1, 130000, 3);
INSERT INTO EMPLOYEE (EID, F_NAME, L_NAME, JOB_ID, SALARY, D_ID) VALUES (20, 'Ryan', 'Jackson', 2, 140000, 4);

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

-- DROP TABLE EMPLOYEE;
-- DROP TABLE DEPARTMENT;
-- DROP TABLE LOCATION;
-- DROP TABLE JOB;