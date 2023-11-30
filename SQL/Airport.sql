# Database creation
DROP DATABASE Airport;

CREATE DATABASE Airport;



#Table creation
USE Airport;

CREATE TABLE planes(
	plane_type VARCHAR(3) PRIMARY KEY,
    capacity INT,
    longitude FLOAT,
    wingspan FLOAT,
    cruising_speed INT
);

CREATE TABLE flights(
	flight_num VARCHAR(6) PRIMARY KEY,
	origin VARCHAR(25),
	destiny VARCHAR(25),
    departure_time TIME(0),
	plane_type VARCHAR(3) NOT NULL,
    
	FOREIGN KEY (plane_type) REFERENCES planes(plane_type)
);

CREATE TABLE bookings(
	booking_id INT PRIMARY KEY,
	flight_num VARCHAR(6),
    flight_date DATE,
    free_places INT,
        
	FOREIGN KEY (flight_num) REFERENCES flights(flight_num)
);



#Data insertion
INSERT INTO planes(plane_type, capacity, longitude, wingspan, cruising_speed) VALUES
("320", 187, 42.15, 32.6, 853),
("72S", 160, 36.2, 25.2, 820),
("737", 172, 38.9, 29, 793),
("73S", 185, 44.1, 30.35, 815),
("DS9", 110, 38.3, 28.5, 815);

INSERT INTO flights(flight_num, origin, destiny, departure_time, plane_type) VALUES
("AF577", "Bilbao", "Paris", "10:10:00", "72S"),
("BA467", "Madrid", "London", "20:40:00", "73S"),
("IB023", "Madrid", "Tenerife", "21:20:00", "320"),
("IB0640", "Madrid", "Barcelona", "06:45:00", "DS9"),
("IB318", "Sevilla", "Madrid", "10:45:00", "320"),
("IB327", "Madrid", "Sevilla", "18:05:00", "320"),
("IB368", "Malaga", "Barcelona", "22:25:00", "737"),
("IB3709", "Dublin", "Barcelona", "14:35:00", "737"),
("IB3742", "Madrid", "Barcelona", "09:15:00", "320"),
("IB510", "Sevilla", "Madrid", "07:45:00", "320"),
("IB600", "Madrid", "London", "10:30:00", "DS9"),
("IB610", "Malaga", "London", "15:05:00", "320"),
("IB721", "Barcelona", "Sevilla", "16:40:00", "320"),
("IB77B", "Barcelona", "Rome", "09:45:00", "320"),
("LH1349", "Copenhagen", "Frankfurt", "10:20:00", "DS9");

INSERT INTO bookings(booking_id, flight_num, flight_date, free_places) VALUES
(1, "BA467", "20-02-24", 32),
(2, "BA467", "21-02-24", 49),
(3, "BA467", "22-02-24", 79),
(4, "IB0640", "20-02-24", 15),
(5, "IB0640", "21-02-24", 21),
(6, "IB0640", "22-02-24", 39),
(7, "IB3709", "20-02-24", 60),
(8, "IB3709", "21-02-24", 72),
(9, "IB3709", "22-02-24", 85),
(10, "IB510", "20-02-24", 19),
(11, "IB510", "21-02-24", 31),
(12, "IB510", "22-02-24", 40),
(13, "IB600", "20-02-24", 46),
(14, "IB600", "21-02-24", 90),
(15, "IB600", "22-02-24", 91);



#Exercises

# 1 - Seleccionar de la tabla vuelos las columnas origen, destino y hora de salida para todas sus filas:

SELECT origin, destiny, departure_time FROM flights;



# 2 - . Igual al anterior, pero que el orden de salida en listado de las columnas sea: origen, hora de salida, destino:

SELECT origin, departure_time, destiny FROM flights;



# 3 - Del resultado anterior eliminar la información que sea redundante:

SELECT DISTINCT origin, departure_time, destiny FROM flights;



# 4 - Escribir la orden adecuada para visualizar el contenido de toda la tabla en el listado:

SELECT * FROM flights;



# 5 - Supongamos que se quieren recuperar de la tabla vuelos sólo aquellos que salen de Madrid:

SELECT * FROM flights
WHERE origin = 'Madrid';



# 6 - Recuperar el número de vuelos y la hora de salida de todos los vuelos que hacen el trayecto Madrid-Londres:

SELECT flight_num, departure_time FROM flights
WHERE (origin = 'Madrid') AND (destiny = 'London');



# 7 - Recuperar los vuelos (fila completa) que tengan por destino Londres pero que no salgan de Madrid:

SELECT * FROM flights
WHERE (destiny = 'London') AND (origin != 'Madrid');



# 8 - Recuperar todos los vuelos que haya entre Madrid y Sevilla:

SELECT * FROM flights
WHERE (destiny IN ('Madrid', 'Sevilla')) AND (origin IN ('Madrid', 'Sevilla'));



# 9 - Recuperar todos los vuelos que salgan de Madrid y lleguen a Barcelona o a Sevilla:

SELECT * FROM flights
WHERE (origin = 'Madrid') AND (destiny IN ('Barcelona', 'Sevilla'));



# 10 - Recuperar los vuelos que salgan de Madrid, Barcelona o Sevilla:

SELECT * FROM flights
WHERE (origin IN ('Madrid', 'Barcelona', 'Sevilla'));



# 11 - Recuperar todos los vuelos excepto los que salgan de Copenhague o Dublín:

SELECT * FROM flights
WHERE (origin NOT IN ('Copenhagen', 'Dublin'));



# 12 - Recuperar todos los vuelos que salgan desde las 6 hasta las 12 de la mañana:

SELECT * FROM flights
WHERE (departure_time BETWEEN '06:00:00' AND '12:00:00');



# 13 - Recuperar todos los vuelos que no son de iberia:

SELECT * FROM flights
WHERE flight_num NOT LIKE 'IB%';



# 14 - Recuperar todos los vuelos de la compañía iberia:

SELECT * FROM flights
WHERE flight_num LIKE 'IB%';