Table Creation
---------------
1)
CREATE     TABLE     EMPLOYEE(
SSN     VARCHAR(20)     PRIMARY     KEY,
FNAME  VARCHAR(20),
LNAME  VARCHAR(20),
ADDRESS VARCHAR(35),
SEX CHAR(6),
SALARY INT(10),
SUPERSSN VARCHAR(20),
DNO INT(10));


2)
CREATE    TABLE  DEPARTMENT 
(DNO    INT(10)   PRIMARY    KEY,
DNAME    VARCHAR(20),
MGRSSN  VARCHAR(20),
MGERSTART DATE);


3)
CREATE TABLE DLOACTION(
DNO INT(10),
DLOC VARCHAR(20),
PRIMARY KEY(DNO,DLOC),
FOREIGN  KEY(DNO) REFERENCES DEPARTMENT(DNO));


4)
CREATE     TABLE     PROJECT(
PNO    INT(10)   PRIMARY     KEY,
PNAME     VARCHAR(20),
PLOACTION VARCHAR(20),
DNO INT(10),
FOREIGN KEY(DNO) REFERENCES DEPARTMENT(DNO));


5)
CREATE TABLE WORKS_ON(
SSN VARCHAR(20),
PNO INT(20),
PRIMARY KEY(SSN,PNO),FOREIGN KEY(SSN)  REFERENCES EMPLOYEE(SSN),
FOREIGN   KEY(PNO)   REFERENCES   PROJECT(PNO),
HOURS INT(20));


6)
ALTER   TABLE   EMPLOYEE   
ADD   CONSTRAINT   S   
FOREIGN   KEY(DNO)   REFERENCES DEPARTMENT(DNO);


7)
ALTER  TABLE  DEPARTMENT  
ADD  CONSTRAINT  R  
FOREIGN  KEY(MGRSSN)  REFERENCES  EMPLOYEE(SSN);


Insertion of values to tables
----------------------------------

1)
INSERT INTO EMPLOYEE (SSN, FNAME, LNAME, ADDRESS, SEX, SALARY) VALUES ('JSSECE01','JOHN','SCOTT','BANGALORE','M', 450000);
INSERT INTO EMPLOYEE (SSN, FNAME, LNAME, ADDRESS, SEX, SALARY) VALUES ('JSSCSE01','AKHIL','SHETTI','BANGALORE','M', 500000);
INSERT INTO EMPLOYEE (SSN, FNAME, LNAME, ADDRESS, SEX, SALARY) VALUES ('JSSCSE02','MEGHA','H','BANGALORE','M', 700000);
INSERT INTO EMPLOYEE (SSN, FNAME, LNAME, ADDRESS, SEX, SALARY) VALUES ('JSSCSE03','EDWARD','SCOTT','MYSORE','M', 500000);
INSERT INTO EMPLOYEE (SSN, FNAME, LNAME, ADDRESS, SEX, SALARY) VALUES ('JSSCSE04','PAVAN','HEGDE','MANGALORE','M', 650000);
INSERT INTO EMPLOYEE (SSN, FNAME, LNAME, ADDRESS, SEX, SALARY) VALUES ('JSSCSE05','ADITYA','SIMHA','MYSORE','M', 450000);
INSERT INTO EMPLOYEE (SSN, FNAME, LNAME, ADDRESS, SEX, SALARY) VALUES ('JSSCSE06','NEHA','SN','BANGALORE','F', 800000);
INSERT INTO EMPLOYEE (SSN, FNAME, LNAME, ADDRESS, SEX, SALARY) VALUES ('JSSACC01','ANU','U','MANGALORE','F', 350000);
INSERT INTO EMPLOYEE (SSN, FNAME, LNAME, ADDRESS, SEX, SALARY) VALUES ('JSSACC02','SANTHOSH','KUMAR','MANGALORE','M', 300000);
INSERT INTO EMPLOYEE (SSN, FNAME, LNAME, ADDRESS, SEX, SALARY) VALUES ('JSSISE01','VEENA','M','MYSORE','M', 600000);
INSERT INTO EMPLOYEE (SSN, FNAME, LNAME, ADDRESS, SEX, SALARY) VALUES ('JSSIT01','NAGESH','HR','BANGALORE','M', 500000);


2)
INSERT INTO DEPARTMENT VALUES ('1','ACCOUNTS','JSSACC02','2001-01-01');
INSERT INTO DEPARTMENT VALUES ('2','IT','JSSIT01','2016-08-01');
INSERT INTO DEPARTMENT VALUES ('3','ECE','JSSECE01','2008-06-01');
INSERT INTO DEPARTMENT VALUES ('4','ISE','JSSISE01','2015-08-17'); 
INSERT INTO DEPARTMENT VALUES ('5','CSE','JSSCSE05','2020-06-02');

3)
INSERT INTO DLOACTION VALUES ('1','BANGALORE');
INSERT INTO DLOACTION VALUES ('2','BANGALORE');
INSERT INTO DLOACTION VALUES ('3','BANGALORE');
INSERT INTO DLOACTION VALUES ('4','MANGALORE');
INSERT INTO DLOACTION VALUES ('5','MANGALORE');

4)
INSERT INTO PROJECT VALUES (100,'IOT','BANGALORE','5');
INSERT INTO PROJECT VALUES (101,'CLOUD','BANGALORE','5');
INSERT INTO PROJECT VALUES (102,'BIGDATA','BANGALORE','5');
INSERT INTO PROJECT VALUES (103,'SENSORS','BANGALORE','3');
INSERT INTO PROJECT VALUES (104,'BANK MANAGEMENT','BANGALORE','1');
INSERT INTO PROJECT VALUES (105,'SALARY MANAGEMENT','BANGALORE','1');
INSERT INTO PROJECT VALUES (106,'OPENSTACK','BANGALORE','4');
INSERT INTO PROJECT VALUES (107,'SMART CITY','BANGALORE','2');

5)
INSERT INTO WORKS_ON(SSN,HOURS,PNO) VALUES ('JSSCSE01', 4, 100);
INSERT INTO WORKS_ON(SSN,HOURS,PNO) VALUES ('JSSCSE01', 6, 101);
INSERT INTO WORKS_ON(SSN,HOURS,PNO) VALUES ('JSSCSE01', 8, 102);
INSERT INTO WORKS_ON(SSN,HOURS,PNO) VALUES ('JSSCSE02', 10,100);
INSERT INTO WORKS_ON(SSN,HOURS,PNO) VALUES ('JSSCSE04', 3, 100);
INSERT INTO WORKS_ON(SSN,HOURS,PNO) VALUES ('JSSCSE05', 4, 101);
INSERT INTO WORKS_ON(SSN,HOURS,PNO) VALUES ('JSSCSE06', 5, 102);
INSERT INTO WORKS_ON(SSN,HOURS,PNO) VALUES ('JSSCSE03', 6, 102);
INSERT INTO WORKS_ON(SSN,HOURS,PNO) VALUES ('JSSECE01', 7, 103);
INSERT INTO WORKS_ON(SSN,HOURS,PNO) VALUES ('JSSACC01', 5, 104);
INSERT INTO WORKS_ON(SSN,HOURS,PNO) VALUES ('JSSACC02', 6, 105);
INSERT INTO WORKS_ON(SSN,HOURS,PNO) VALUES ('JSSISE01', 4, 106);
INSERT INTO WORKS_ON(SSN,HOURS,PNO) VALUES ('JSSIT01', 10, 107);


UPDATE EMPLOYEE SET
SUPERSSN=NULL, DNO='3'
WHERE SSN='JSSECE01';

UPDATE EMPLOYEE SET
SUPERSSN='JSSCSE02', DNO='5' 
WHERE SSN='JSSCSE01';

UPDATE EMPLOYEE SET
SUPERSSN='JSSCSE03', DNO='5'
WHERE SSN='JSSCSE02';

UPDATE EMPLOYEE SET
SUPERSSN='JSSCSE04', DNO='5'
WHERE SSN='JSSCSE03';

UPDATE EMPLOYEE SET
DNO='5', SUPERSSN='JSSCSE05'
WHERE SSN='JSSCSE04';

UPDATE EMPLOYEE SET
DNO='5', SUPERSSN='JSSCSE06'
WHERE SSN='JSSCSE05';

UPDATE EMPLOYEE SET
DNO='5', SUPERSSN=NULL
WHERE SSN='JSSCSE06';

UPDATE EMPLOYEE SET
DNO='1', SUPERSSN='JSSACC02'
WHERE SSN='JSSACC01';

UPDATE EMPLOYEE SET
DNO='1', SUPERSSN=NULL
WHERE SSN='JSSACC02';

UPDATE EMPLOYEE SET
DNO='4', SUPERSSN=NULL
WHERE SSN='JSSISE01';

UPDATE EMPLOYEE SET
DNO='2', SUPERSSN=NULL
WHERE SSN='JSSIT01';


SELECT * FROM EMPLOYEE;
SELECT * FROM DEPARTMENT;
SELECT * FROM DLOACTION;
SELECT * FROM PROJECT;
SELECT * FROM WORKS_ON;


QUERIES ;-
-------------

QUERY 1
---------
(SELECT P.PNO
FROM PROJECT P, DEPARTMENT D, EMPLOYEE E
WHERE P.DNO=D.DNO
AND D.MGRSSN=E.SSN
AND E.LNAME='SCOTT')
UNION
(SELECT DISTINCT P1.PNO
FROM PROJECT P1, WORKS_ON W, EMPLOYEE E1
WHERE P1.PNO=W.PNO
AND E1.SSN=W.SSN
AND E1.LNAME='SCOTT');


QUERY 2
---------
SELECT E.FNAME, E.LNAME, 1.1*E.SALARY AS INCR_SAL
FROM EMPLOYEE E, WORKS_ON W, PROJECT P
WHERE E.SSN=W.SSN
AND W.PNO=P.PNO
AND P.PNAME='IOT';


QUERY 3 
---------
SELECT SUM(E.SALARY), MAX(E.SALARY), MIN(E.SALARY), AVG(E.SALARY)
FROM EMPLOYEE E, DEPARTMENT D
WHERE E.DNO=D.DNO
AND D.DNAME='ACCOUNTS';


QUERY 4
---------
SELECT  FNAME,  LNAME  FROM  EMPLOYEE  E  
WHERE  NOT  EXISTS(SELECT  PNO  FROM PROJECT  WHERE  DNO=5  
AND  PNO  NOT  IN(SELECT  PNO  FROM  WORKS_ON  WHERE  E.SSN=SSN));


QUERY 5
---------
SELECT D.DNO, COUNT(*)
FROM DEPARTMENT D, EMPLOYEE E
WHERE D.DNO=E.DNO
AND E.SALARY > 600000
AND D.DNO IN (SELECT E1.DNO
FROM EMPLOYEE E1
GROUP BY E1.DNO
HAVING COUNT(*) > 5)
GROUP BY D.DNO;
