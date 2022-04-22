--DDL Commands

CREATE TABLE EMPLOYEE
(FNAME  VARCHAR(15) NOT NULL,
MINIT   CHAR,
LNAME VARCHAR(15) NOT NULL,
SSN CHAR(9) NOT NULL,
BDATE DATE,
ADDRESS VARCHAR(30),
SEX CHAR,
SALARY DECIMAL(10,2),
SUPERSSN CHAR(9),
DNO INT NOT NULL,
PRIMARY KEY (SSN));

CREATE TABLE DEPARTMENT
( DNAME VARCHAR(15) NOT NULL,
DNUMBER INT NOT NULL,
MGRSSN CHAR(9) NOT NULL,
MGRSTARTDATE DATE,
PRIMARY KEY (DNUMBER),
UNIQUE (DNAME));

CREATE TABLE DEPT_LOCATIONS
(DNUMBER INT NOT NULL,
DLOCATION VARCHAR(15) NOT NULL,
PRIMARY KEY (DNUMBER,DLOCATION));

CREATE TABLE PROJECT
(PNAME VARCHAR(15) NOT NULL,
PNUMBER INT NOT NULL,
PLOCATION VARCHAR(15),
DNUM INT NOT NULL,
PRIMARY KEY (PNUMBER),
UNIQUE (PNAME));

CREATE TABLE WORKS_ON
(ESSN CHAR(9) NOT NULL,
PNO INT NOT NULL,
HOURS DECIMAL(3,1) NOT NULL,
PRIMARY KEY (ESSN,PNO));

CREATE TABLE DEPENDENT 
(ESSN CHAR(9) NOT NULL,
DEPENDENT_NAME VARCHAR(9) NOT NULL,
SEX CHAR,
BDATE DATE,
RELATIONSHIP VARCHAR(8),
PRIMARY KEY (ESSN,DEPENDENT_NAME));

--Table values

INSERT INTO EMPLOYEE VALUES('john','B','smith',123456789,to_date('1965-01-09','yyyy-mm-dd'),'731 Fondren Houston,TX','M',30000,333445555,5);
INSERT INTO EMPLOYEE VALUES('franklin','T','wong',333445555,to_date('1955-12-08','yyyy-mm-dd'),'638 Voss, Houston, TX','M',40000,888665555,5);
INSERT INTO EMPLOYEE VALUES('alicia','J','zelaya',999887777,to_date('1968-01-19','yyyy-mm-dd'),'3321 Castle, Spring, TX','F',25000,987654321,4);
INSERT INTO EMPLOYEE VALUES('jennifer','S','wallace',987654321,to_date('1941-06-20','yyyy-mm-dd'),'291, Berry Bellaire, TX','F',43000,888665555,4);
INSERT INTO EMPLOYEE VALUES('ramesh','K','narayan',666884444,to_date('1962-09-15','yyyy-mm-dd'),'975 Fire Oak,Humble, TX','M',38000,333445555,5);
INSERT INTO EMPLOYEE VALUES('joyce','A','english',453453453,to_date('1972-07-31','yyyy-mm-dd'),'5631 Rice, Houston, TX','F',25000,333445555,5);
INSERT INTO EMPLOYEE VALUES('ahmad','V','jabbar',987987987,to_date('1969-03-29','yyyy-mm-dd'),'980 Dallas, Houston, TX','M',25000,987654321,4);
INSERT INTO EMPLOYEE VALUES('james','E','borg',888665555,to_date('1937-11-10','yyyy-mm-dd'),'450 Stone, Houston, TX','M',55000,NULL,1);

INSERT INTO DEPARTMENT VALUES('Research',5,333445555,to_date('1988-05-22','yyyy-mm-dd'));
INSERT INTO DEPARTMENT VALUES('Administration',4,987654321,to_date('1995-01-01','yyyy-mm-dd'));
INSERT INTO DEPARTMENT VALUES('Headquarters',1,888665555,to_date('1981-06-19','yyyy-mm-dd'));

INSERT INTO WORKS_ON VALUES(123456789,1,32.5);
INSERT INTO WORKS_ON VALUES(123456789,2,7.5);
INSERT INTO WORKS_ON VALUES(666884444,3,40.0);
INSERT INTO WORKS_ON VALUES(453453453,1,20.0);
INSERT INTO WORKS_ON VALUES(453453453,2,20.0);
INSERT INTO WORKS_ON VALUES(333445555,2,10.0);
INSERT INTO WORKS_ON VALUES(333445555,3,10.0);
INSERT INTO WORKS_ON VALUES(333445555,10,10.0);
INSERT INTO WORKS_ON VALUES(333445555,20,10.0);
INSERT INTO WORKS_ON VALUES(999887777,30,30.0);
INSERT INTO WORKS_ON VALUES(999887777,10,10.0);
INSERT INTO WORKS_ON VALUES(987987987,10,35.0);
INSERT INTO WORKS_ON VALUES(987987987,30,5.0);
INSERT INTO WORKS_ON VALUES(987654321,30,20.0);
INSERT INTO WORKS_ON VALUES(987654321,20,15.0);
INSERT INTO WORKS_ON VALUES(888665555,20,0);

INSERT INTO PROJECT VALUES('ProductX',1,'Bellaire',5);
INSERT INTO PROJECT VALUES('ProductY',2,'Sugarland',5);
INSERT INTO PROJECT VALUES('ProductZ',3,'Houston',5);
INSERT INTO PROJECT VALUES('Computerization',10,'Stafford',4);
INSERT INTO PROJECT VALUES('Reorganization',20,'Houston',1);
INSERT INTO PROJECT VALUES('Newbenefits',30,'Stafford',4);

INSERT INTO DEPENDENT VALUES (333445555,'Alice','F',to_date('1986-04-05','yyyy-mm-dd'),'Daugter');
INSERT INTO DEPENDENT VALUES (333445555,'Theodore','M',to_date('1983-10-25','yyyy-mm-dd'),'Son');
INSERT INTO DEPENDENT VALUES (333445555,'Joy','F',to_date('1958-05-03','yyyy-mm-dd'),'Spouse');
INSERT INTO DEPENDENT VALUES (987654321,'Abner','M',to_date('1942-02-28','yyyy-mm-dd'),'Spouse');
INSERT INTO DEPENDENT VALUES (123456789,'Michael','M',to_date('1988-01-04','yyyy-mm-dd'),'Son');
INSERT INTO DEPENDENT VALUES (123456789,'Alice','F',to_date('1988-12-30','yyyy-mm-dd'),'Daugter');
INSERT INTO DEPENDENT VALUES (123456789,'Elizabeth','F',to_date('1967-05-05','yyyy-mm-dd'),'Spouse');

INSERT INTO DEPT_LOCATIONS VALUES (1,'Houston');
INSERT INTO DEPT_LOCATIONS VALUES (4,'Stafford');
INSERT INTO DEPT_LOCATIONS VALUES (5,'Bellaire');
INSERT INTO DEPT_LOCATIONS VALUES (5,'Sugarland');
INSERT INTO DEPT_LOCATIONS VALUES (5,'Houston');

--Constraints

ALTER TABLE EMPLOYEE ADD FOREIGN KEY (SUPERSSN) REFERENCES EMPLOYEE(SSN);
ALTER TABLE EMPLOYEE ADD FOREIGN KEY (DNO) REFERENCES DEPARTMENT(DNUMBER);
ALTER TABLE DEPARTMENT ADD FOREIGN KEY (MGRSSN) REFERENCES EMPLOYEE(SSN);
ALTER TABLE DEPT_LOCATIONS ADD FOREIGN KEY (DNUMBER) REFERENCES DEPARTMENT (DNUMBER);
ALTER TABLE PROJECT ADD FOREIGN KEY (DNUM) REFERENCES DEPARTMENT(DNUMBER);
ALTER TABLE WORKS_ON ADD FOREIGN KEY (ESSN) REFERENCES EMPLOYEE(SSN);
ALTER TABLE WORKS_ON ADD FOREIGN KEY (PNO) REFERENCES PROJECT(PNUMBER);
ALTER TABLE DEPENDENT ADD FOREIGN KEY (ESSN) REFERENCES EMPLOYEE(SSN);