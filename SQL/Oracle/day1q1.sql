CREATE TABLE CUSTOMER (
    CID NUMBER PRIMARY KEY,
    CNAME VARCHAR(50),
    C_CITY VARCHAR(50),
    DISCOUNT NUMBER
);

CREATE TABLE AGENTS (
    AID NUMBER PRIMARY KEY,
    ANAME VARCHAR(50),
    A_CITY VARCHAR(50),
    COMMUNICATION VARCHAR(50)
);

CREATE TABLE PRODUCTS (
    PID NUMBER PRIMARY KEY,
    PNAME VARCHAR(50),
    P_CITY VARCHAR(50),
    QUANTITY NUMBER,
    PRICE NUMBER
);

CREATE TABLE ORDERS (
    ORD_NO NUMBER PRIMARY KEY,
    MONTH VARCHAR(50),
    CID NUMBER REFERENCES CUSTOMER,
    AID NUMBER REFERENCES AGENTS,
    PID NUMBER REFERENCES PRODUCTS,
    QTY NUMBER,
    TOTAL_PRICE NUMBER
);

INSERT INTO CUSTOMER VALUES (1, 'Aarav', 'Mumbai', 5);
INSERT INTO CUSTOMER VALUES (2, 'Rajat', 'Delhi', 10);
INSERT INTO CUSTOMER VALUES (3, 'Vivaan', 'Bangalore', 15);
INSERT INTO CUSTOMER VALUES (4, 'Aditya', 'Hyderabad', 20);
INSERT INTO CUSTOMER VALUES (5, 'Arjun', 'Chennai', 25);
INSERT INTO CUSTOMER VALUES (6, 'Saima', 'Kolkata', 30);
INSERT INTO CUSTOMER VALUES (7, 'Reyansh', 'Pune', 7);
INSERT INTO CUSTOMER VALUES (8, 'Ayaan', 'Ahmedabad', 12);
INSERT INTO CUSTOMER VALUES (9, 'Krishna', 'Surat', 17);
INSERT INTO CUSTOMER VALUES (10, 'Ishaan', 'Jaipur', 22);
INSERT INTO CUSTOMER VALUES (11, 'Ananya', 'Lucknow', 27);
INSERT INTO CUSTOMER VALUES (12, 'Diya', 'Kanpur', 3);
INSERT INTO CUSTOMER VALUES (13, 'Pari', 'Nagpur', 8);
INSERT INTO CUSTOMER VALUES (14, 'Saanvi', 'Indore', 13);
INSERT INTO CUSTOMER VALUES (15, 'Aadhya', 'Thane', 18);
INSERT INTO CUSTOMER VALUES (16, 'Anika', 'Bhopal', 23);
INSERT INTO CUSTOMER VALUES (17, 'Anvi', 'Visakhapatnam', 28);
INSERT INTO CUSTOMER VALUES (18, 'Aarohi', 'Patna', 4);
INSERT INTO CUSTOMER VALUES (19, 'Nisha', 'Vadodara', 9);
INSERT INTO CUSTOMER VALUES (20, 'Sneha', 'Ghaziabad', 14);

SELECT * FROM CUSTOMER;

INSERT INTO AGENTS VALUES (1, 'Prakash', 'Mumbai', 'Phone');
INSERT INTO AGENTS VALUES (2, 'Arjun', 'Delhi', 'Email');
INSERT INTO AGENTS VALUES (3, 'Priya', 'Bangalore', 'WhatsApp');
INSERT INTO AGENTS VALUES (4, 'Raj', 'Hyderabad', 'Phone');
INSERT INTO AGENTS VALUES (5, 'Deepak', 'Chennai', 'Email');
INSERT INTO AGENTS VALUES (6, 'Neha', 'Kolkata', 'WhatsApp');

SELECT * FROM AGENTS;

INSERT INTO PRODUCTS VALUES (1, 'Rice', 'Barrackpore', 1000, 50);
INSERT INTO PRODUCTS VALUES (2, 'Wheat', 'Barasat', 800, 40);
INSERT INTO PRODUCTS VALUES (3, 'Sugar', 'Basirhat', 1200, 45);
INSERT INTO PRODUCTS VALUES (4, 'Salt', 'Bidhannagar', 1500, 20);
INSERT INTO PRODUCTS VALUES (5, 'Pulses', 'Bongaon', 900, 60);
INSERT INTO PRODUCTS VALUES (6, 'Cooking Oil', 'Habra', 700, 100);
INSERT INTO PRODUCTS VALUES (7, 'Tea Leaves', 'Kanchrapara', 600, 150);
INSERT INTO PRODUCTS VALUES (8, 'Coffee Beans', 'Madhyamgram', 500, 200);
INSERT INTO PRODUCTS VALUES (9, 'Spices', 'New Barrackpore', 1100, 80);
INSERT INTO PRODUCTS VALUES (10, 'Biscuits', 'Barrackpore', 950, 30);
INSERT INTO PRODUCTS VALUES (11, 'Snacks', 'Ashoknagar', 850, 70);
INSERT INTO PRODUCTS VALUES (12, 'Cereals', 'Dumdum', 750, 90);
INSERT INTO PRODUCTS VALUES (13, 'Milk Powder', 'Bhatpara', 650, 120);
INSERT INTO PRODUCTS VALUES (14, 'Dried Fruits', 'Rajarhat', 550, 180);
INSERT INTO PRODUCTS VALUES (15, 'Nuts', 'Gobardanga', 950, 250);
INSERT INTO PRODUCTS VALUES (16, 'Canned Foods', 'Barasat', 850, 120);
INSERT INTO PRODUCTS VALUES (17, 'Instant Noodles', 'Rajarhat', 750, 40);
INSERT INTO PRODUCTS VALUES (18, 'Condiments', 'Taki', 650, 70);
INSERT INTO PRODUCTS VALUES (19, 'Honey', 'Hingalganj', 550, 150);
INSERT INTO PRODUCTS VALUES (20, 'Jam', 'Deganga', 950, 80);

SELECT * FROM PRODUCTS;

INSERT INTO ORDERS VALUES (1, 'January', 1, 1, 1, 10, 500);
INSERT INTO ORDERS VALUES (2, 'January', 2, 2, 2, 8, 320);
INSERT INTO ORDERS VALUES (3, 'February', 3, 3, 3, 12, 540);
INSERT INTO ORDERS VALUES (4, 'February', 4, 4, 4, 15, 300);
INSERT INTO ORDERS VALUES (5, 'March', 5, 5, 5, 9, 540);
INSERT INTO ORDERS VALUES (6, 'March', 6, 6, 6, 7, 700);
INSERT INTO ORDERS VALUES (7, 'April', 7, 1, 7, 6, 900);
INSERT INTO ORDERS VALUES (8, 'April', 8, 2, 8, 5, 1000);
INSERT INTO ORDERS VALUES (9, 'May', 9, 3, 9, 11, 880);
INSERT INTO ORDERS VALUES (10, 'May', 10, 4, 10, 9, 270);
INSERT INTO ORDERS VALUES (11, 'June', 11, 5, 11, 8, 560);
INSERT INTO ORDERS VALUES (12, 'June', 12, 6, 12, 7, 630);
INSERT INTO ORDERS VALUES (13, 'July', 13, 1, 13, 6, 720);
INSERT INTO ORDERS VALUES (14, 'July', 14, 2, 14, 5, 900);
INSERT INTO ORDERS VALUES (15, 'August', 15, 3, 15, 9, 2250);
INSERT INTO ORDERS VALUES (16, 'August', 16, 4, 16, 8, 960);
INSERT INTO ORDERS VALUES (17, 'September', 17, 5, 17, 7, 280);
INSERT INTO ORDERS VALUES (18, 'September', 18, 6, 18, 6, 420);
INSERT INTO ORDERS VALUES (19, 'October', 19, 1, 19, 5, 750);
INSERT INTO ORDERS VALUES (20, 'October', 20, 2, 20, 9, 720);
INSERT INTO ORDERS VALUES (21, 'November', 1, 3, 1, 10, 500);
INSERT INTO ORDERS VALUES (22, 'November', 2, 4, 2, 8, 320);
INSERT INTO ORDERS VALUES (23, 'December', 3, 5, 3, 12, 540);
INSERT INTO ORDERS VALUES (24, 'December', 4, 6, 4, 15, 300);
INSERT INTO ORDERS VALUES (25, 'January', 5, 1, 5, 9, 540);
INSERT INTO ORDERS VALUES (26, 'January', 6, 2, 6, 7, 700);
INSERT INTO ORDERS VALUES (27, 'February', 7, 3, 7, 6, 900);
INSERT INTO ORDERS VALUES (28, 'February', 8, 4, 8, 5, 1000);
INSERT INTO ORDERS VALUES (29, 'March', 9, 5, 9, 11, 880);
INSERT INTO ORDERS VALUES (30, 'March', 10, 6, 10, 9, 270);

SELECT * FROM ORDERS;

-- Q1 
-- USING NESTED QUERY
SELECT ANAME
FROM AGENTS
WHERE AID IN (SELECT AID
              FROM ORDERS
              WHERE CID = (SELECT CID
                           FROM CUSTOMER
                           WHERE CNAME = 'Rajat'));

-- USING JOIN
SELECT ANAME
FROM CUSTOMER, ORDERS, AGENTS
WHERE CUSTOMER.CID = ORDERS.CID AND AGENTS.AID = ORDERS.AID AND CUSTOMER.CNAME = 'Rajat';

-- USING DIVISION
SELECT ANAME
FROM AGENTS A1
WHERE NOT EXISTS ((SELECT PID FROM CUSTOMER, ORDERS WHERE CUSTOMER.CID = ORDERS.CID AND CUSTOMER.CNAME = 'Rajat') MINUS
                  (SELECT PID FROM ORDERS WHERE A1.AID = ORDERS.AID));

-- Q2
-- USING NESTED QUERY
SELECT ANAME
FROM AGENTS
WHERE AID NOT IN (SELECT AID
                  FROM ORDERS
                  WHERE PID IN (SELECT PID
                                FROM PRODUCTS
                                WHERE P_CITY = 'Barasat')) AND ANAME LIKE 'N%';

-- DROP TABLE ORDERS;
-- DROP TABLE PRODUCTS;
-- DROP TABLE AGENTS;
-- DROP TABLE CUSTOMER;