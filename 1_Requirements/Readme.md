# Requirements
## Introduction
 -Cashflow Manager is an application the enables users have a track of their day to day cash inflow and outflow. This application will help to get a clear idea of their income and expenses. The application makes users aware of unnecessary expense and helps to understand money management.

## Research

-- Cashflow application is essential part of this generation as money needs to be managed efficiently therefore applkication is designed to keep a track of Income-Expense of the users.
### Benefits
--There are many application available in market but this application is user-friendly and can be easy managed by uses to keep track of their savings after their expenses being deducted from the various sources of income of the user. 
### Overview
--The allows users to include multi-income source such as income from rental property or other varied income source which generates awareness to have multiple source of income for better finalcial independence.

--Overall the application is hassle free way to keep track of the money that you earn and will help you make effecient saving and forcast future expenses and save accordingly.
## Cost and Features
![Description](Link to Pic)
### Existing System
--Existing system do not use the easy and userfriendly concept that are used now a days. In previous systems, users had to manage and maintain the Excel sheets,
CSV etc files for the user expenses be it daily or monthly. 

--In existing, there is no as such complete solution to keep a track of its
daily expenditure easily 

### Features
--CashFlow Application allows

Name of the user

Income to be added

Grocery Expense

Other Expense

Will ask for option to confirm if you have Other sources of income 

if yes then u will have to add the income generates

With the data given it will show the monthly saving done by the user after balancing the cashflow.

This will be really helpful for budget planning for users for upcoming months and any event.

## Defining Our System
   CASHFLOW Management Application have few inbuilt features like:

Create a new user record of income
Read a User record
create the income sources for user
view the users cashflow
view users saving

## SWOT ANALYSIS

![SWOT-Sample]
![](https://github.com/geek-gopi/C_Mini_Project_265459/blob/main/1_Requirements/swot.png)


# 4W&#39;s and 1&#39;H

## Who:

 This is for the users 


## What:

Cashflow is application

## When:

**TBD**

## Where:

**TBD**

## How:

**TBD**

# Detail requirements
## High Level Requirements: 
| ID | Description | Category | Status | 
| ----- | ----- | ------- | ---------|
| HR01 | User shall be able to add new patient record | Techincal | IMPLEMENTED | 
| HR02 | User shall be able to read a patient record | Techincal |  IMPLEMENTED  |
| HR03 | User shall be able to update a patient record | Techincal |  IMPLEMENTED  |
| HR04 | User shall be able to delete a patient record | Techincal |  IMPLEMENTED  |
| HR05 | User shall be able to save records in a file | Techincal |  IMPLEMENTED  |
| HR06 | User shall be able to read data from a file | Techincal |  IMPLEMENTED  |
| HR07 | Data should not be lost in case of faliure | Scenario | FUTURE |
| HR08 | Data should always be stored when closing the system | Scenario |  IMPLEMENTED |
##  Low level Requirements:
 
| ID | Description | HLR ID | Status (Implemented/Future) |
| ------ | --------- | ------ | ----- |
| LR01 | (1). New record shall be added by providing all the asked information                                                                                                    (2). Id should be unique and validated from persistant file or else patient record should not be accepted. | HR01 |  IMPLEMENTED  |
| LR02 | Reading patient data should be possible in 2 ways (1). first being by searching by id of a patient (2). By printing all the records available | HR02 |  IMPLEMENTED |
| LR03 | While reading all the records, only 10 records per page should be visible and should add 10 more if user wants to see more | HR02 | FUTURE |
| LR04 | If user searches for an invalid ID "No Record Found" message should be displayed | HR02 |  IMPLEMENTED  |
| LR05 | User need to search by id for the pateint record to be updated, if no such record is available then "No Record Found" Message should be displayed | HR03 |  IMPLEMENTED  |
| LR06 | User need to search by id for the pateint record to be deleted, if no such record is available then "No Record Found" Message should be displayed | HR04 |  IMPLEMENTED  |
| LR05 | User shall be able to save the files, if file already exists then it should append to file and should not overwrite it and if file does not exists then it should create a new file | HR05 |  IMPLEMENTED  |
| LR06 | If opening the file fails, then the system shloud prompt the message "Unable to access file" and should not end the program execution | HR05, HR06, HR07, HR08 |  IMPLEMENTED  |
| LR07 | When user Log off the system perform check and save data to file (1). If new data in inserted add it to file (2). If New data is not inserted do not add anything to file | HR08 |  IMPLEMENTED  |

