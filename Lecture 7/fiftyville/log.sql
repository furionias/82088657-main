-- Keep a log of any SQL queries you execute as you solve the mystery.
SELECT * From crime_reports
Where street = 'Humphrey Street';

SELECT * from interviews
where transcript LIKE '%bakery%';

SELECT * from bakery_security_logs where year = 2021 and month = 7 and day = 28 and hour = 10 and minute between 15 and 25
SELECT p.name, bsl.activity, bsl.license_plate, bsl.year, bsl.month, bsl.day, bsl.minute
From bakery_security_logs bsl
Join people p on p.license_plate = bsl.license_plate
Where bsl.year = 2021 and bsl.month = 7 and bsl.day =28 and bsl.hour = 10 and bsl.minute between 15 and 25;

SELECT * from atm_transactions
Where atm_location = 'Leggett Street'
AND year = 2021 and month = 7 and day =28;

SELECT a.*, p.name
From atm_transactions a
JOIN bank_accounts b ON a.account_number = b.account_number
JOIN people p ON b.person_id =p.id
Where a.atm_location = 'Leggett Street' and a.year =2021 and a.month =7 and a.day= 28 and a.transaction_type = "withdraw";

SELECT * from phone_calls
Where year = 2021 and month =7 and day =28 and duration < 60;

SELECT p.name, pc.caller, pc.receiver, pc.year, pc.month, pc.day, pc.duration
FROM phone_calls pc
JOIN people p ON pc.caller = p.phone_number
Where pc.year = 2021 and pc.month =7 and pc.day = 28 and pc.duration < 60;

SELECT * from airports;
SELECT f.*, origin.full_name AS origin_airport, destination.full_name  AS destination_airport
FROM flights f
JOIN airports origin On f.origin_airport_id =origin.id
JOIN airports destination ON f.destination_airport_id = destination.id
WHERE origin.id =8 and f.year =2021 and f.month =7 and f.day =29
ORDER BY f.hour, f.minute;

SELECT p.name from bakery_security_logs bsl
JOIN people p on p.license_plate = bsl.license_plate
JOIN bank_accounts ba ON ba.person_id = ba.account_number
JOIN phone_calls pc ON pc.caller = p.phone_number
WHERE bsl.year =2021 and bsl.month =7 and bsl.day = 28 and bsl.hour =10 and bsl.minute Between 15 and 25
AND at.atm_location = 'Leggett Street' and at.year = 2021 and at.month =7 and at.day = 28 and at.transaction_type = 'withdraw'
AND pc.year =2021 and pc.month =7 and pc.day =28 and pc.duration < 60;

Select p.name From people p
Join passengers ps on p.passport_number = ps.passport_number
Where ps.flight_id = 36
and p.name IN ('Bruce', 'Diana');

SELECT p2.name AS receiver
FROM phone_calls pc
JOIN people p1 ON pc.caller = p1.phone_number
JOIN people p2 on pc.receiver = p2.phone_number
Where p1.name = 'Bruce' and pc.year = 2021 and pc.month =7 and pc.day = 28 and pc.duration < 60;





