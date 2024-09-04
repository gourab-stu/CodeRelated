CREATE TABLE SALESMAN (
    S_ID NUMBER PRIMARY KEY,
    SNAME VARCHAR(20),
    CITY VARCHAR(20)
);

CREATE TABLE CUSTOMER (
    C_NO NUMBER PRIMARY KEY,
    CNAME VARCHAR(20),
    CITY VARCHAR(20),
    RATING NUMBER,
    S_ID NUMBER REFERENCES SALESMAN
);

CREATE TABLE ORDERS (
    O_NO NUMBER PRIMARY KEY,
    AMOUNT NUMBER,
    O_DATE DATE,
    C_NO NUMBER REFERENCES CUSTOMER,
    S_ID NUMBER REFERENCES SALESMAN
);

INSERT INTO SALESMAN VALUES (1, 'Rajat', 'Barasat');
INSERT INTO SALESMAN VALUES (2, 'Ankush', 'Barasat');
INSERT INTO SALESMAN VALUES (3, 'Gourab', 'Gobardanga');
INSERT INTO SALESMAN VALUES (4, 'Preeti', 'Newtown');
INSERT INTO SALESMAN VALUES (5, 'Bidisha', 'Dasnagar');
INSERT INTO SALESMAN VALUES (6, 'Suman', 'Joka');

SELECT * FROM SALESMAN;

INSERT INTO CUSTOMER VALUES (1, 'Rahul', 'Barasat', 4, 2);
INSERT INTO CUSTOMER VALUES (2, 'Mona', 'Sodepur', 3, 4);
INSERT INTO CUSTOMER VALUES (3, 'Sanam', 'Palta', 2, 4);
INSERT INTO CUSTOMER VALUES (4, 'Subho', 'Naihati', 5, 1);
INSERT INTO CUSTOMER VALUES (5, 'Ranjan', 'Memari', 4, 1);
INSERT INTO CUSTOMER VALUES (6, 'Monti', 'Barasat', 3, 3);
INSERT INTO CUSTOMER VALUES (7, 'Abdul', 'Barasat', 3, 2);

SELECT * FROM CUSTOMER;

INSERT INTO ORDERS VALUES (1, 20000, '24-APR-2023', 1, 2);
INSERT INTO ORDERS VALUES (2, 41000, '04-SEP-2022', 2, 2);
INSERT INTO ORDERS VALUES (3, 22000, '26-JUN-2023', 3, 3);
INSERT INTO ORDERS VALUES (4, 42000, '26-MAY-2024', 4, 6);
INSERT INTO ORDERS VALUES (5, 44000, '04-SEP-2020', 5, 4);
INSERT INTO ORDERS VALUES (6, 62000, '04-SEP-2022', 3, 6);

SELECT * FROM ORDERS;

-- Q1
SELECT *
FROM ORDERS
WHERE AMOUNT > ANY (SELECT DISTINCT AMOUNT
                    FROM ORDERS
                    WHERE TO_CHAR(O_DATE, 'DD/MM') = '04/09');

-- Q2
SELECT CNAME
FROM CUSTOMER
WHERE CITY = (SELECT CITY
              FROM SALESMAN
              WHERE SNAME = 'Rajat') AND CNAME BETWEEN 'A%' AND 'B%';

-- DROP TABLE ORDERS;
-- DROP TABLE CUSTOMER;
-- DROP TABLE SALESMAN;