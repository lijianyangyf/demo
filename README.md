# 1.Database db
数据库名字 FlightManagementSystem_DB

## 1.1 tableName Customer_Info
(1)CustomerId 账户的唯一编号 int primary key AUTO_INCRESEMENT默认自增
(2)CustomerName 用户姓名 varchar(50) NOT NULL 不允许为空
(3)CustomerAge 用户年龄 int NOT NULL 不允许为空
(4)CustomerIdentityNumber 用户身份证件 varchar(20) NULL 允许为空
(5)CustomerTelephone 用户联系电话 varchar(20) NULL 允许为空
(6)CustomerEmail 用户邮箱 varchar(30) NULL 允许为空
(7)CustomerSex 用户性别 int DEFAULT 0 规则如下:不填为0,男为1,女为2. 默认为0
(8)CustomerRegisterDate 用户注册日期 datetime DEFAULT CURRENT_TIMESTAMP注册时填入注册日期和时间

### mysql创建语句 
create table Customer_Info
(
CustomerId int primary key auto_increment,
CustomerName varchar(50),
CustomerAge int not null,
CustomerIdentityNumber varchar(20) null,
CustomerTelephone varchar(20) null,
CustomerEmail varchar(30) null,
CustomerSex int default 0,
CustomerRegisterDate DATETIME DEFAULT CURRENT_TIMESTAMP
);

## 1.2 tableName Flight_Info
(1)FlightId 航班唯一编号 int primary key AUTO_INCRESEMENT默认自增
(2)FlightCode 航班号 varchar(20) not null 不允许为空
(3)FlightDate 航班日期 date not null 不允许为空
(4)FlightTime 航班时间 time not null 不允许为空
(5)FlightEconomyClass 经济舱余票 int not null 不允许为空
(6)FlightEconomyPrice 经济舱价格 decimal(6,3) not null 不允许为空
(7)FlightBusinessClass 商务舱余票 int not null 不允许为空
(8)FlightBusinessPrice 商务舱价格 decimal(6,3) not null 不允许为空
### mysql创建语句 
create table Flight_Info
(
FlightID int primary key auto_increment,
FlightCode varchar(20) not null,
FlightDate date not null,
FlightTime time not null,
FlightEconomyClass int not null,
FlightEconomyPrice decimal(6,3) not null,
FlightBusinessClass int not null,
FlightBusinessPrice decimal(6,3) not null
);

## 1.3 tableName Ticket_Info
(1)TicketId 机票唯一编号 int primary key AUTO_INCRESEMENT默认自增
(2)Ticket_FlightId 机票的航班唯一编号  int not null 不允许为空
(3)Ticket_FlightCode 机票的航班号  varchar(20) not null 不允许为空
(4)Ticket_CustomerId 机票的用户唯一编号 int not null 不允许为空
(5)Ticket_CustomerName 机票的用户姓名 varchar(30) not null 不允许为空
(6)TicketOwnerName 机票所有人的姓名 varchar(30) not null 不允许为空
(7)TicketOwnerIdentityNumber 机票所有人的身份信息 varchar(20) not null 不允许为空
(8)TicketOwnerAge 机票所有人年龄 int not null 不允许为空
(9)TicketOnwerType 机票所有人类型 int not null 不允许为空 规则如下：0为小孩，1为成人
(10)TicketContactName 机票联络人姓名 varchar(30) not null 不允许为空
(11)TicketContactTelephone 机票联络人电话 varchar(20) not null 不允许为空
(12)TicketContactEmail 机票联络人邮箱 varchar(30) not null 不允许为空

### mysql创建语句 
create table Ticket_Info
(
TicketId int primary key auto_increment,
Ticket_FlightId int not null,
Ticket_FlightCode varchar(20) not null,
Ticket_CustomerId int not null,
Ticket_CustomerName varchar(30) not null,
TicketOwnerName varchar(30) not null,
TicketOwnerIdentityNumber varchar(20) not null,
TicketOwnerAge int not null,
TicketOwnerType int not null,
TicketContactName varchar(30) not null,
TicketContactTelephone varchar(20) not null,
TicketContactEmail varchar(30) not null
);

## 1.4  Ticket_Info的外键约束 
跟随对应航班和用户，自动更改Ticket_Info中的Ticket_FlightCode和Ticket_CustomerName
### mysql创建语句 
(1)Ticket_FlightCode -> Flight_Info.FlightCode (以下为语句):

CREATE INDEX idx_flight_code ON Flight_Info(FlightCode);

ALTER TABLE Ticket_Info
ADD CONSTRAINT fk_ticket_flight_code
FOREIGN KEY (Ticket_FlightCode) REFERENCES Flight_Info(FlightCode)
ON DELETE CASCADE
ON UPDATE CASCADE;

(2)Ticket_CustomerName -> Customer_Info.CustomerName (以下为语句):

CREATE INDEX idx_customer_name ON Customer_Info(CustomerName);

ALTER TABLE Ticket_Info
ADD CONSTRAINT fk_ticket_customer_name
FOREIGN KEY (Ticket_CustomerName) REFERENCES Customer_Info(CustomerName)
ON DELETE CASCADE
ON UPDATE CASCADE;
