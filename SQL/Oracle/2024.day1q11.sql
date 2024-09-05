CREATE TABLE BOOK_MASTER (
    B_CODE NUMBER PRIMARY KEY, 
    B_NAME VARCHAR(50), 
    AUTHOR VARCHAR(50), 
    PUBLISHER VARCHAR(20)
);

CREATE TABLE BOOK_TRANSACTION (
    B_CODE NUMBER REFERENCES BOOK_MASTER, 
    COPY_NO NUMBER, 
    STATUS VARCHAR(20), 
    PRICE NUMBER, 
    DATE_OF_ISSUE DATE
);

CREATE TABLE MEMBER_MASTER (
    M_CODE NUMBER PRIMARY KEY, 
    M_NAME VARCHAR(20), 
    ADDRESS VARCHAR(50), 
    PHONE_NO NUMBER(10)
);

CREATE TABLE REGISTER (
    B_CODE NUMBER REFERENCES BOOK_MASTER, 
    COPY_NO NUMBER, 
    M_CODE NUMBER REFERENCES MEMBER_MASTER, 
    DATE_OF_ISSUE DATE, 
    DATE_OF_RETURN DATE
);

INSERT INTO BOOK_MASTER VALUES (1, 'Oracle Basics', 'John Doe', 'TechBooks');
INSERT INTO BOOK_MASTER VALUES (2, 'Advanced SQL', 'Jane Smith', 'DataPub');
INSERT INTO BOOK_MASTER VALUES (3, 'Database Design', 'Alice Brown', 'InfoPress');

INSERT INTO BOOK_TRANSACTION VALUES (1, 1, 'Issued', 500, TO_DATE('2024-08-20', 'YYYY-MM-DD'));
INSERT INTO BOOK_TRANSACTION VALUES (1, 2, 'Available', 500, NULL);
INSERT INTO BOOK_TRANSACTION VALUES (2, 1, 'Issued', 600, TO_DATE('2024-08-15', 'YYYY-MM-DD'));
INSERT INTO BOOK_TRANSACTION VALUES (3, 1, 'Issued', 550, TO_DATE('2024-08-25', 'YYYY-MM-DD'));

INSERT INTO MEMBER_MASTER VALUES (1, 'Rahul Sharma', '123 Elm Street', '9876543210');
INSERT INTO MEMBER_MASTER VALUES (2, 'Anita Kumar', '456 Oak Avenue', '9876501234');
INSERT INTO MEMBER_MASTER VALUES (3, 'Vikram Singh', '789 Pine Road', '9876546789');

INSERT INTO REGISTER VALUES (1, 1, 1, TO_DATE('2024-08-20', 'YYYY-MM-DD'), NULL);
INSERT INTO REGISTER VALUES (2, 1, 2, TO_DATE('2024-08-15', 'YYYY-MM-DD'), NULL);
INSERT INTO REGISTER VALUES (3, 1, 3, TO_DATE('2024-08-25', 'YYYY-MM-DD'), TO_DATE('2024-09-02', 'YYYY-MM-DD'));

SELECT * FROM BOOK_MASTER;
SELECT * FROM BOOK_TRANSACTION;
SELECT * FROM MEMBER_MASTER;
SELECT * FROM REGISTER;

-- Q1
SELECT B_NAME, COPY_NO, M_NAME
FROM BOOK_MASTER B, MEMBER_MASTER M, REGISTER R
WHERE B.B_CODE = R.B_CODE AND
      M.M_CODE = R.M_CODE AND
      B.B_CODE = 3;

-- Q2
SELECT M_NAME, ADDRESS
FROM MEMBER_MASTER M, REGISTER R
WHERE M.M_CODE = R.M_CODE AND
      FLOOR(SYSDATE - DATE_OF_ISSUE) >= 15 AND
      DATE_OF_RETURN IS NULL;

-- DROP TABLE REGISTER;
-- DROP TABLE MEMBER_MASTER;
-- DROP TABLE BOOK_TRANSACTION;
-- DROP TABLE BOOK_MASTER;