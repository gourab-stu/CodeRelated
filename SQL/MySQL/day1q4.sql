CREATE TABLE STUDENTS (
    SID INT PRIMARY KEY, 
    NAME VARCHAR(20), 
    ADDRESS VARCHAR(50)
);

CREATE TABLE DEPARTMENT (
    DID INT PRIMARY KEY, 
    D_NAME VARCHAR(20)
);

CREATE TABLE PROFESSOR (
    PID INT PRIMARY KEY, 
    NAME VARCHAR(20), 
    AGE INT, 
    D_ID INT REFERENCES DEPARTMENT, 
    POSITION VARCHAR(20),
    CHECK (POSITION = 'HOD' OR POSITION = 'Assistant Professor')
);

CREATE TABLE COURSE (
    C_NO INT PRIMARY KEY, 
    C_NAME VARCHAR(20)
);

CREATE TABLE TAKE (
    SID INT REFERENCES STUDENTS, 
    C_NO INT REFERENCES COURSE, 
    MARKS INT
);

CREATE TABLE TEACH (
    PID INT REFERENCES PROFESSOR, 
    C_NO INT REFERENCES COURSE, 
    D_ID INT REFERENCES DEPARTMENT
);

INSERT INTO STUDENTS (SID, NAME, ADDRESS) VALUES (1, 'Alice', '123 Main St'), 
(2, 'Bob', '456 Maple St'), 
(3, 'Charlie', '789 Oak St'), 
(4, 'David', '101 Pine St'), 
(5, 'Eva', '102 Pine St'), 
(6, 'Frank', '103 Pine St'), 
(7, 'Grace', '104 Pine St'), 
(8, 'Henry', '105 Pine St'), 
(9, 'Ivy', '106 Pine St'), 
(10, 'Jack', '107 Pine St'), 
(11, 'Karen', '108 Pine St'), 
(12, 'Leo', '109 Pine St'), 
(13, 'Mia', '110 Pine St'), 
(14, 'Nina', '111 Pine St'), 
(15, 'Oscar', '112 Pine St'), 
(16, 'Paul', '113 Pine St'), 
(17, 'Quinn', '114 Pine St'), 
(18, 'Rita', '115 Pine St'), 
(19, 'Sam', '116 Pine St'), 
(20, 'Tina', '117 Pine St'), 
(21, 'Uma', '118 Pine St'), 
(22, 'Vera', '119 Pine St'), 
(23, 'Will', '120 Pine St'), 
(24, 'Xena', '121 Pine St'), 
(25, 'Yara', '122 Pine St'), 
(26, 'Zack', '123 Pine St'), 
(27, 'Anna', '124 Pine St'), 
(28, 'Ben', '125 Pine St'), 
(29, 'Cara', '126 Pine St'), 
(30, 'Dylan', '127 Pine St');

SELECT * FROM STUDENTS;

INSERT INTO DEPARTMENT (DID, D_NAME) VALUES (1, 'Computer Science'), 
(2, 'Mathematics'), 
(3, 'Physics'), 
(4, 'Electronics');

SELECT * FROM DEPARTMENT;

INSERT INTO PROFESSOR (PID, NAME, AGE, D_ID, POSITION) VALUES (1, 'Prof. Smith', 45, 1, 'HOD'), 
(2, 'Prof. Johnson', 50, 2, 'HOD'), 
(3, 'Prof. Williams', 40, 3, 'Assistant Professor'), 
(4, 'Prof. Brown', 55, 4, 'Assistant Professor'), 
(5, 'Prof. Taylor', 35, 1, 'Assistant Professor'), 
(6, 'Prof. Anderson', 60, 2, 'Assistant Professor'), 
(7, 'Prof. Thomas', 50, 3, 'HOD'), 
(8, 'Prof. Jackson', 45, 4, 'HOD'), 
(9, 'Prof. White', 38, 1, 'Assistant Professor'), 
(10, 'Prof. Harris', 48, 2, 'Assistant Professor');

SELECT * FROM PROFESSOR;

INSERT INTO COURSE (C_NO, C_NAME) VALUES (1, 'CS1 Hons'), 
(2, 'CS2 Hons'), 
(3, 'CS3 Hons'), 
(4, 'PHS1 Hons'), 
(5, 'PHS2 Hons');

SELECT * FROM COURSE;

INSERT INTO TAKE (SID, C_NO, MARKS) VALUES (1, 1, 85), 
(2, 2, 90), 
(3, 3, 75), 
(4, 4, 80), 
(5, 5, 70), 
(6, 1, 95), 
(7, 2, 85), 
(8, 3, 88), 
(9, 4, 92), 
(10, 5, 87), 
(11, 1, 77), 
(12, 2, 80), 
(13, 3, 89), 
(14, 4, 94), 
(15, 5, 73), 
(16, 1, 68), 
(17, 2, 83), 
(18, 3, 91), 
(19, 4, 95), 
(20, 5, 76), 
(21, 1, 85), 
(22, 2, 88), 
(23, 3, 79), 
(24, 4, 93), 
(25, 5, 81), 
(26, 1, 78), 
(27, 2, 85), 
(28, 3, 90), 
(29, 4, 77), 
(30, 5, 82);

SELECT * FROM TAKE;

INSERT INTO TEACH (PID, C_NO, D_ID) VALUES (1, 1, 1), 
(2, 2, 2), 
(2, 3, 1), 
(2, 5, 4), 
(3, 3, 3), 
(4, 4, 4), 
(5, 5, 1), 
(6, 1, 2), 
(7, 2, 3), 
(8, 3, 4), 
(8, 2, 4), 
(9, 4, 1), 
(10, 5, 2);

SELECT * FROM TEACH;

-- Q1
SELECT NAME 
FROM STUDENTS 
WHERE SID IN (SELECT SID 
              FROM TAKE 
              WHERE C_NO = (SELECT C_NO 
                            FROM COURSE 
                            WHERE C_NAME = 'CS3 Hons'));

-- Q2
SELECT NAME 
FROM (SELECT NAME, COUNT(*) AS C1 FROM PROFESSOR P, TEACH T WHERE P.PID = T.PID AND P.POSITION = 'HOD' GROUP BY NAME)
WHERE C1 = (SELECT MAX(C2) 
            FROM (SELECT NAME, COUNT(*) AS C2 FROM PROFESSOR P, TEACH T WHERE P.PID = T.PID AND P.POSITION = 'HOD' GROUP BY NAME));

-- Q2
SELECT * 
FROM (SELECT NAME, COUNT(*) FROM PROFESSOR P, TEACH T WHERE P.PID = T.PID AND P.POSITION = 'HOD' GROUP BY NAME);

-- DROP TABLE TEACH;
-- DROP TABLE TAKE;
-- DROP TABLE COURSE;
-- DROP TABLE PROFESSOR;
-- DROP TABLE DEPARTMENT;
-- DROP TABLE STUDENTS;