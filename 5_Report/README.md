# TELEPHONE BILLING

# DESCRIPTION

Telephone Billing System, can perform and manage billing operations like they do in Telephonic companies. Here, we can add records with name, phone number and the amount of payment. You can add, search and delete existing records.Using this we can also make payment by providing your phone number instead of name.This project will teach you how to add, search and delete records using file handling.


# FEATURES

* Architecture of this project is very simple and easy to understand the code.
* Add new records: add new data into file with name, phone number and amount to be paid. 
* View payment : shows amount to be paid.
* Search records : search the data with name amd phoone number.
* Deleting records : delete the data which is stored. 


# SWOT ANALYSIS

![Untitled Workspace (1)](https://user-images.githubusercontent.com/82401251/152638461-80c5c1e7-211c-404a-b6ab-d468a7897d5f.jpg)


# 5W's & 1H

![WhatsApp Image 2022-02-11 at 10 44 13](https://user-images.githubusercontent.com/77672209/153552697-2117870e-fc1b-4f4b-b1e6-c03aafe5aa14.jpeg)


# Requriements

## HIGH LEVEL REQURIEMENTS

|HLR(ID)| Description|
---  | --- |
|HLR01| Adding new records (A)|
|HLR02|  Payment(P)|
|HLR03|  For searching records(S)|
|HLR04|  Deleting records(D)|
|HLR05|  Exit(E)|


## LOW LEVEL REQURIEMENTS

|LLR(ID)| Description|
---  | --- |
|LLR01_HLR01|Adding Name|
|LLR02_HLR01|Adding Phone number|
|LLR03_HLR01|Adding Amount|
|LLR04_HLR02| Phone number|
|LLR05_HLR02| Amount|
|LLR06_HLR03|Search Phone number|
|LLR07_HLR04|Delete Phone number|


# Behavioural Design
## High Level Behavioural Design

![Behavioural Design](https://user-images.githubusercontent.com/77672209/152676909-a3c29691-f197-4407-ae3b-efbbe3c49a33.jpg)

## Low Level Behavioural Design

![Behavioural Design - Low level design](https://user-images.githubusercontent.com/77672209/152933170-5da2c615-027e-47d4-b707-327e1e618038.jpeg)



# Structural Design

## **High Level Structural Design**

![Structural Design](https://user-images.githubusercontent.com/77672209/152676827-620f1898-09cf-426d-bb35-1ceb26f594a6.jpg)

## **Low Level Structural Design**

![WhatsApp Image 2022-02-08 at 8 55 12 PM](https://user-images.githubusercontent.com/77672209/153137964-2a0c1e2f-32b1-452c-ba37-a05942703dcb.jpeg)

# Test Plan

## Test Plan for High Level Requirements

|Test ID|HLR|Descrition|Input|EXpected Output|Actual Output|
--- | --- | --- | --- | --- | --- |
|TID01|HLR01|Adding Records|A|Success|Success|
|TID02|HLR02|Payment|P|Success|Success|
|TID03|HLR03|Search Records|S|Success|Success|
|TID04|HLR04|Delete Records|D|Success|Success|
|TID05|HLR05|Exit|E|Success|Success|


## Test Plan for Low Level Requirements

|Test ID|LLR|Description|Input|Expected Output|Actual Output|
--- | --- | --- | --- | --- | --- |
|TID01|LLR01|Adding Records (A)|Name:Nimitha,Phone No:9346154367,Amount:200|Added Successfully|Added Successfully|
|TID02|LLR02|Payment (P)|Phone No:9346154367,Amount:200|Payment Done|Payment Done|
|TID03|LLR03|Search Records (S)|Phone No:9346154367|Record Found|Record Found|
|TID04|LLR04|Delete Record (D)|Phone No:9346154367|Record Successfully Deleted| Record Successfully Deleted|
|TID05|LLR05|Exit (E)|E|Thank You|Thank You|

# Output

![Page_1](https://user-images.githubusercontent.com/77672209/153555735-f18d77d9-3e58-4f99-a4a2-a12012fc8151.png)
![Page_2](https://user-images.githubusercontent.com/77672209/153555745-0c7a50e3-aefa-441c-ab4b-de08096cd287.png)
![Payment](https://user-images.githubusercontent.com/77672209/153555752-1215e101-0af3-4109-aee3-c3c7ce08b517.png)
![Search](https://user-images.githubusercontent.com/77672209/153555761-c5f739f9-643e-4532-bd87-197a5b1db3ef.png)
![Exit](https://user-images.githubusercontent.com/77672209/153555770-04641e2f-4d51-40e0-bf2e-ac1fda24a97a.png)

