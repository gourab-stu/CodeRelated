CREATE TABLE CUSTOMER (
    CID INTEGER PRIMARY KEY,
    CNAME VARCHAR(50),
    C_CITY VARCHAR(50),
    DISCOUNT INTEGER
);

CREATE TABLE AGENTS (
    AID INTEGER PRIMARY KEY,
    ANAME VARCHAR(50),
    A_CITY VARCHAR(50),
    COMMUNICATION VARCHAR(50)
);

CREATE TABLE PRODUCTS (
    PID INTEGER PRIMARY KEY,
    PNAME VARCHAR(50),
    P_CITY VARCHAR(50),
    QUANTITY INTEGER,
    PRICE INTEGER
);

CREATE TABLE ORDERS (
    ORD_NO INTEGER PRIMARY KEY,
    MONTH VARCHAR(50),
    CID INTEGER,
    AID INTEGER,
    PID INTEGER,
    QTY INTEGER,
    TOTAL_PRICE INTEGER,
    FOREIGN KEY (CID) REFERENCES CUSTOMER(CID),
    FOREIGN KEY (AID) REFERENCES AGENTS(AID),
    FOREIGN KEY (PID) REFERENCES PRODUCTS(PID)
);

INSERT INTO CUSTOMER (CID, CNAME, C_CITY, DISCOUNT) VALUES
(1, 'Aarav', 'Mumbai', 5),
(2, 'Rajat', 'Delhi', 10),
(3, 'Vivaan', 'Bangalore', 15),
(4, 'Aditya', 'Hyderabad', 20),
(5, 'Arjun', 'Chennai', 25),
(6, 'Saima', 'Kolkata', 30),
(7, 'Reyansh', 'Pune', 7),
(8, 'Ayaan', 'Ahmedabad', 12),
(9, 'Krishna', 'Surat', 17),
(10, 'Ishaan', 'Jaipur', 22),
(11, 'Ananya', 'Lucknow', 27),
(12, 'Diya', 'Kanpur', 3),
(13, 'Pari', 'Nagpur', 8),
(14, 'Saanvi', 'Indore', 13),
(15, 'Aadhya', 'Thane', 18),
(16, 'Anika', 'Bhopal', 23),
(17, 'Anvi', 'Visakhapatnam', 28),
(18, 'Aarohi', 'Patna', 4),
(19, 'Nisha', 'Vadodara', 9),
(20, 'Sneha', 'Ghaziabad', 14);

SELECT * FROM CUSTOMER;

INSERT INTO AGENTS (AID, ANAME, A_CITY, COMMUNICATION) VALUES
(1, 'Prakash', 'Mumbai', 'Phone'),
(2, 'Arjun', 'Delhi', 'Email'),
(3, 'Priya', 'Bangalore', 'WhatsApp'),
(4, 'Raj', 'Hyderabad', 'Phone'),
(5, 'Deepak', 'Chennai', 'Email'),
(6, 'Neha', 'Kolkata', 'WhatsApp');

SELECT * FROM AGENTS;

INSERT INTO PRODUCTS (PID, PNAME, P_CITY, QUANTITY, PRICE) VALUES
(1, 'Rice', 'Barrackpore', 1000, 50),
(2, 'Wheat', 'Barasat', 800, 40),
(3, 'Sugar', 'Basirhat', 1200, 45),
(4, 'Salt', 'Bidhannagar', 1500, 20),
(5, 'Pulses', 'Bongaon', 900, 60),
(6, 'Cooking Oil', 'Habra', 700, 100),
(7, 'Tea Leaves', 'Kanchrapara', 600, 150),
(8, 'Coffee Beans', 'Madhyamgram', 500, 200),
(9, 'Spices', 'New Barrackpore', 1100, 80),
(10, 'Biscuits', 'Barrackpore', 950, 30),
(11, 'Snacks', 'Ashoknagar', 850, 70),
(12, 'Cereals', 'Dumdum', 750, 90),
(13, 'Milk Powder', 'Bhatpara', 650, 120),
(14, 'Dried Fruits', 'Rajarhat', 550, 180),
(15, 'Nuts', 'Gobardanga', 950, 250),
(16, 'Canned Foods', 'Barasat', 850, 120),
(17, 'Instant Noodles', 'Rajarhat', 750, 40),
(18, 'Condiments', 'Taki', 650, 70),
(19, 'Honey', 'Hingalganj', 550, 150),
(20, 'Jam', 'Deganga', 950, 80);

SELECT * FROM PRODUCTS;

INSERT INTO ORDERS (ORD_NO, MONTH, CID, AID, PID, QTY, TOTAL_PRICE) VALUES
(1, 'January', 1, 1, 1, 10, 500),
(2, 'January', 2, 2, 2, 8, 320),
(3, 'February', 3, 3, 3, 12, 540),
(4, 'February', 4, 4, 4, 15, 300),
(5, 'March', 5, 5, 5, 9, 540),
(6, 'March', 6, 6, 6, 7, 700),
(7, 'April', 7, 1, 7, 6, 900),
(8, 'April', 8, 2, 8, 5, 1000),
(9, 'May', 9, 3, 9, 11, 880),
(10, 'May', 10, 4, 10, 9, 270),
(11, 'June', 11, 5, 11, 8, 560),
(12, 'June', 12, 6, 12, 7, 630),
(13, 'July', 13, 1, 13, 6, 720),
(14, 'July', 14, 2, 14, 5, 900),
(15, 'August', 15, 3, 15, 9, 2250),
(16, 'August', 16, 4, 16, 8, 960),
(17, 'September', 17, 5, 17, 7, 280),
(18, 'September', 18, 6, 18, 6, 420),
(19, 'October', 19, 1, 19, 5, 750),
(20, 'October', 20, 2, 20, 9, 720),
(21, 'November', 1, 3, 1, 10, 500),
(22, 'November', 2, 4, 2, 8, 320),
(23, 'December', 3, 5, 3, 12, 540),
(24, 'December', 4, 6, 4, 15, 300),
(25, 'January', 5, 1, 5, 9, 540),
(26, 'January', 6, 2, 6, 7, 700),
(27, 'February', 7, 3, 7, 6, 900),
(28, 'February', 8, 4, 8, 5, 1000),
(29, 'March', 9, 5, 9, 11, 880),
(30, 'March', 10, 6, 10, 9, 270);

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
WHERE NOT EXISTS ((SELECT PID FROM CUSTOMER, ORDERS WHERE CUSTOMER.CID = ORDERS.CID AND CUSTOMER.CNAME = 'Rajat') EXCEPT
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

-- DROP DATABASE day1q1;