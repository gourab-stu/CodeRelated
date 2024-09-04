CREATE TABLE SALESMAN (
    S_ID INT PRIMARY KEY,
    SNAME VARCHAR(20),
    CITY VARCHAR(20)
);

CREATE TABLE CUSTOMER (
    C_NO INT PRIMARY KEY,
    CNAME VARCHAR(20),
    CITY VARCHAR(20),
    RATING INT,
    S_ID INT REFERENCES SALESMAN
);

CREATE TABLE ORDERS (
    O_NO INT PRIMARY KEY,
    AMOUNT INT,
    O_DATE DATE,
    C_NO INT REFERENCES CUSTOMER,
    S_ID INT REFERENCES SALESMAN
);

INSERT INTO SALESMAN VALUES (1, 'Rajat', 'Barasat'), 
(2, 'Ankush', 'Barasat'), 
(3, 'Gourab', 'Gobardanga'), 
(4, 'Preeti', 'Newtown'), 
(5, 'Bidisha', 'Dasnagar'), 
(6, 'Suman', 'Joka');

SELECT * FROM SALESMAN;

INSERT INTO CUSTOMER VALUES (1, 'Rahul', 'Barasat', 4, 2), 
(2, 'Mona', 'Sodepur', 3, 4), 
(3, 'Sanam', 'Palta', 2, 4), 
(4, 'Subho', 'Naihati', 5, 1), 
(5, 'Ranjan', 'Memari', 4, 1), 
(6, 'Monti', 'Barasat', 3, 3), 
(7, 'Abdul', 'Barasat', 3, 2);

SELECT * FROM CUSTOMER;

INSERT INTO ORDERS VALUES (1, 20000, '2023-04-24', 1, 2), 
(2, 41000, '2022-09-04', 2, 2), 
(3, 22000, '2023-06-26', 3, 3), 
(4, 42000, '2024-05-26', 4, 6), 
(5, 44000, '2020-09-04', 5, 4), 
(6, 62000, '2022-09-04', 3, 6);

SELECT * FROM ORDERS;

-- Q1
SELECT *
FROM ORDERS
WHERE AMOUNT > ANY (SELECT DISTINCT AMOUNT
                    FROM ORDERS
                    WHERE MONTH(O_DATE) = 9 AND DAY(O_DATE) = 4);

-- Q2
SELECT CNAME
FROM CUSTOMER
WHERE CITY = (SELECT CITY
              FROM SALESMAN
              WHERE SNAME = 'Rajat') AND CNAME BETWEEN 'A%' AND 'B%';

-- DROP TABLE ORDERS;
-- DROP TABLE CUSTOMER;
-- DROP TABLE SALESMAN;