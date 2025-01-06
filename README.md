# 1.Database db
数据库名字 FlightManagementSystem_DB

## 1.1 tableName Customer_Info
(1)CustomerAccount 用户账号 int primary key auto_increment
(2)CustomerPassword 用户密码 varchar(30) not null
(3)CustomerName 用户姓名 varchar(50) not null
(4)CustomerSex 用户性别 int DEFAULT 0 规则如下:保密为0,男为1,女为2. 默认为0
(5)CustomerBirthday 用户出生日期 date not null
(6)CustomerIdentityNumber 用户身份证号码 varchar(20) not null
(7)CustomerTelephone 用户联系电话 varchar(20) not null
(8)CustomerEmail 用户邮箱 varchar(30) 
(9)CustomerAddress 用户邮递地址 varchar(100)
(10)CustomerUserName 用户账户名 varchar(30) not null
(11)CustomerAvatar 用户所选择的头像 int default 1 表示选择了第几个头像，默认选择第一个头像 
(12)CustomerType 用户类型 int  default 0 规则如下:普通为0，其他数字为等级 vip1~3. 默认为0
(13)CustomerRegisterDate 用户注册日期 date not null


### mysql创建语句 
create table Customer_Info
(
CustomerAccount int primary key auto_increment,
CustomerPassword varchar(30) not null,
CustomerName varchar(50) not null,
CustomerSex int default 0,
CustomerBirthday date not null,
CustomerIdentityNumber varchar(20) not null,
CustomerTelephone varchar(20) not null,
CustomerEmail varchar(30),
CustomerAddress varchar(100),
CustomerUserName varchar(30) not null,
CustomerAvatar int default 1,
CustomerType int default 0,
CustomerRegisterDate date not null
)auto_increment = 10000000;


## 1.2 tableName Flight_Info
(1)FlightId 航班唯一编号 int primary key AUTO_INCRESEMENT默认自增
(2)FlightCode 航班号 varchar(20) not null
(3)FlightLeaveTime 航班起飞时间 datetime not null
(4)FlightArriveTime 航班降落时间 datetime not null
(5)FlightDeparture 航班始发地 varchar(20) not null
(6)FlightDestination 航班目的地 varchar(20) not null
(7)FlightEconomyClass 经济舱余票 int not null
(8)FlightEconomyPrice 经济舱价格 decimal(10,3) not null
(9)FlightBusinessClass 商务舱余票 int not null
(10)FlightBusinessPrice 商务舱价格 decimal(10,3) not null
(11)FlightState 航班起飞状态 int default 0 规则如下：-1为已取消、0为待起飞、1为飞行中、2为已降落，默认为0


### mysql创建语句 
create table Flight_Info
(
FlightID int primary key auto_increment,
FlightCode varchar(20) not null,
FlightLeaveTime datetime not null,
FlightArriveTime datetime not null,
FlightDeparture varchar(20) not null,
FlightDestination varchar(20) not null,
FlightEconomyClass int not null,
FlightEconomyPrice decimal(10,3) not null,
FlightBusinessClass int not null,
FlightBusinessPrice decimal(10,3) not null,
FlightState int default 0
);


## 1.3 tableName Ticket_Info
(1)TicketId 机票唯一编号 int primary key AUTO_INCRESEMENT默认自增
(2)Ticket_FlightId 机票的航班唯一编号  int not null
(3)Ticket_FlightCode 机票的航班号  varchar(20) not null
(4)Ticket_CustomerAccount 机票的用户账号 int not null
(5)Ticket_FlightState 机票的航班起飞状态 int default 0 规则如下：-1为已取消、0为待起飞、1为飞行中、2为已降落，默认为0
(6)TicketOwnerName 机票乘机人的姓名 varchar(30) not null
(7)TicketOwnerIdentityNumber 机票乘机人的身份证号码 varchar(20) not null
(8)TicketOwnerBirthday 机票乘机人出生日期 date not null
(9)TicketOwnerType 机票乘机人类型 int not null 规则如下：0为小孩，1为成人，2为老人 
(10)TicketOwnerTelephone 机票乘机人电话 varchar(20) not null
(11)TicketOwnerEmail 机票乘机人邮箱 varchar(30) null
(12)TicketSeatType 机票座位类型 int 规则如下：0为经济舱，1为商务舱
(13)TicketSeatNumber 机票座位号 varchar(10) not null
(14)TicketPayState 机票支付状态 int default 0 规则如下：0为未支付，1为已支付
(15)TicketPayTime 机票订单生成时间 datetime



### mysql创建语句 
create table Ticket_Info
(
TicketId int primary key auto_increment,
Ticket_FlightId int not null,
Ticket_FlightCode varchar(20) not null,
Ticket_CustomerAccount int not null,
Ticket_FlightState int default 0,
TicketOwnerName varchar(30) not null,
TicketOwnerIdentityNumber varchar(20) not null,
TicketOwnerBirthday date not null,
TicketOwnerType int not null,
TicketOwnerTelephone varchar(20) not null,
TicketOwnerEmail varchar(30),
TicketSeatType int not null,
TicketSeatNumber varchar(10) not null, 
TicketPayState int default 0,
TicketPayTime datetime
);


## 1.4 Announcement_Info
(1)AnnouncementId 公告唯一编号 int primary key auto_increment
(2)AnnouncementPosition 公告位置 int not null 规定如下：正常显示的文章位置为1~7,位置为-1表示文章不显示
(3)AnnouncementContent 公告内容 varchar(255) 字数长度最多为25字


### mysql创建语句 
create table Announcement_Info
(
AnnouncementId int primary key auto_increment,
AnnouncementPosition int not null,
AnnouncementContent varchar(255)
);


## 1.5 Article_Info
(1)ArticleId 文章唯一编号 int primary key AUTO_INCRESEMENT
(2)ArticlePosition 文章位置 int not null 规定如下：正常显示的文章位置为1~7,位置为-1表示文章不显示
(3)ArticleTitle 文章标题 varchar(255)
(4)ArticleContent 文章内容 text


### mysql创建语句 
create table Article_Info
(
ArticleId int primary key auto_increment,
ArticlePosition int not null,
ArticleTitle varchar(255),
ArticleContent text
);
