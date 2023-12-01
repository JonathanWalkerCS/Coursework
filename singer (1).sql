/*
_____________________________________________________________________________________________
Lab - Autoincrement 
Jonathan Walker
11/07/2023
_____________________________________________________________________________________________
1: 
UPDATE Singer SET OnTour='Touring' WHERE OnTour='Yes';
_____________________________________________________________________________________________
2: 
DELETE FROM Singer WHERE OnTour =  'No';
SELECT * FROM Singer; 
_____________________________________________________________________________________________
3. 
CREATE VIEW Greatest_Hits AS SELECT Singer.TopSongName, Singer.ArtistName From Singer;
SELECT * FROM Greatest_Hits;
_____________________________________________________________________________________________
*/

DROP DATABASE IF EXISTS Singer;
CREATE DATABASE Singer;
USE Singer;
 
CREATE TABLE Singer (
 
	 SingerID INT NOT NULL AUTO_INCREMENT,  
     ArtistName VARCHAR(50),
     Age VARCHAR(3),  
     TopSongName VARCHAR(20) NOT NULL,
     MainGenre VARCHAR(20), 
     OnTour VARCHAR(3),
	
     PRIMARY KEY (SingerID)
);

INSERT INTO Singer(ArtistName, Age, TopSongName, MainGenre, OnTour) VALUES('Beyoncé', '42', 'Crazy In Love', 'R&B', 'No');
INSERT INTO Singer(ArtistName, Age, TopSongName, MainGenre, OnTour) VALUES('Drake', '37', 'One Dance', 'Hip-hop', 'Yes');
INSERT INTO Singer(ArtistName, Age, TopSongName, MainGenre, OnTour) VALUES('Rihanna', '35', 'We Found Love', 'R&B', 'Yes');
INSERT INTO Singer(ArtistName, Age, TopSongName, MainGenre, OnTour) VALUES('Eminem', '51', 'Lose Yourself', 'Hip-hop', 'No');
INSERT INTO Singer(ArtistName, Age, TopSongName, MainGenre, OnTour) VALUES('Bruno Mars', '38', 'Uptown Funk', 'pop', 'No');
INSERT INTO Singer(ArtistName, Age, TopSongName, MainGenre, OnTour) VALUES('Kendrick Lamar', '36', 'Swimming Pools', 'Hip-hop', 'Yes');




