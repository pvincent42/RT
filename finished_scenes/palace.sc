MADE BY PSYCHOCOINCOIN

SCENE { c 30 0 0 }
CAMERA { p 960 540 -1662 n 0 2 30 u 0 1 0 }

BACKGROUND { 0 0 0 }

SPOT { xyz 560 100 300 c 200 200 200 }
SPOT { xyz 1360 100 300 c 55 55 55 }

				     COLONNES
CYLINDER  { pnxyz 1920 0 300 0 1 0 r 90 c 42 42 42 adsb 20 100 50 128 }
CYLINDER  { pnxyz 1920 0 1000 0 1 0 r 90 c 42 42 42 adsb 20 100 50 128 }
CYLINDER  { pnxyz 1920 0 1700 0 1 0 r 90 c 42 42 42 adsb 20 100 50 128 }
CYLINDER  { pnxyz 1920 0 2400 0 1 0 r 90 c 42 42 42 adsb 20 100 50 128 }
CYLINDER  { pnxyz 1440 0 2400 0 1 0 r 90 c 42 42 42 adsb 20 100 50 128 }
CYLINDER  { pnxyz 960  0 2400 0 1 0 r 90 c 42 42 42 adsb 20 100 50 128 }
CYLINDER  { pnxyz 480  0 2400 0 1 0 r 90 c 42 42 42 adsb 20 100 50 128 }
CYLINDER  { pnxyz 0    0 2400 0 1 0 r 90 c 42 42 42 adsb 20 100 50 128 }
CYLINDER  { pnxyz 0    0 1700 0 1 0 r 90 c 42 42 42 adsb 20 100 50 128 }
CYLINDER  { pnxyz 0    0 1000 0 1 0 r 90 c 42 42 42 adsb 20 100 50 128 }
CYLINDER  { pnxyz 0    0 300  0 1 0 r 90 c 42 42 42 adsb 20 100 50 128 }

SPHERE  { p 1920 0 300 n 0 0 1  r 150 c 255 193 37 adsb 90 70 50 2 }
SPHERE  { p 1920 0 1000 n 0 0 1 r 150 c 255 193 37 adsb 90 70 50 2 }
SPHERE  { p 1920 0 1700 n 0 0 1 r 150 c 255 193 37 adsb 90 70 50 2 }
SPHERE  { p 1920 0 2400 n 0 0 1 r 150 c 255 193 37 adsb 90 70 50 2 }
SPHERE  { p 1440 0 2400 n 0 0 1 r 150 c 255 193 37 adsb 90 70 50 2 }
SPHERE  { p 960  0 2400 n 0 0 1 r 150 c 255 193 37 adsb 90 70 50 2 }
SPHERE  { p 480  0 2400 n 0 0 1 r 150 c 255 193 37 adsb 90 70 50 2 }
SPHERE  { p 0    0 2400 n 0 0 1 r 150 c 255 193 37 adsb 90 70 50 2 }
SPHERE  { p 0    0 1700 n 0 0 1 r 150 c 255 193 37 adsb 90 70 50 2 }
SPHERE  { p 0    0 1000 n 0 0 1 r 150 c 255 193 37 adsb 90 70 50 2 }
SPHERE  { p 0    0 300  n 0 0 1 r 150 c 255 193 37 adsb 90 70 50 2 }

SPHERE  { p 1920 1080 300  n 0 0 1 r 150 c 255 193 37 adsb 90 70 50 2 }
SPHERE  { p 1920 1080 1000 n 0 0 1 r 150 c 255 193 37 adsb 90 70 50 2 }
SPHERE  { p 1920 1080 1700 n 0 0 1 r 150 c 255 193 37 adsb 90 70 50 2 }
SPHERE  { p 1920 1080 2400 n 0 0 1 r 150 c 255 193 37 adsb 90 70 50 2 }
SPHERE  { p 1440 1080 2400 n 0 0 1 r 150 c 255 193 37 adsb 90 70 50 2 }
SPHERE  { p 960  1080 2400 n 0 0 1 r 150 c 255 193 37 adsb 90 70 50 2 }
SPHERE  { p 480  1080 2400 n 0 0 1 r 150 c 255 193 37 adsb 90 70 50 2 }
SPHERE  { p 0    1080 2400 n 0 0 1 r 150 c 255 193 37 adsb 90 70 50 2 }
SPHERE  { p 0    1080 1700 n 0 0 1 r 150 c 255 193 37 adsb 90 70 50 2 }
SPHERE  { p 0    1080 1000 n 0 0 1 r 150 c 255 193 37 adsb 90 70 50 2 }
SPHERE  { p 0    1080 300  n 0 0 1 r 150 c 255 193 37 adsb 90 70 50 2 }

					 PLAFOND
PLANE  { pxyz 960 -10 0 nxyz 0 -90 1 c 107 13 13 adsb 30 100 1 1 }

	   			  	 SOL
PLANE  { pxyz 0 1080 0 nxyz 0 90 1 c 42 42 42 adsb 30 100 1 1 krl 10 }

		 	  		 MUR
PLANE  { pxyz -600 0 0 nxyz 1 0 0 c 107 13 13 adsb 30 100 1 1 }
PLANE  { pxyz 2520 0 0 nxyz 1 0 0 c 107 13 13 adsb 30 100 1 1 }
PLANE  { pxyz 0 0 3560 nxyz 0 0 1 c 107 13 13 adsb 30 100 1 1 }

	   	 	  	  	 CENTRAL SPHERE
SPHERE  { p 960 900 960 n 0 1 1 r 300 c 38 97 156 adsb 40 90 100 20 }

				  	 SOCLE
 SPHERE  { p 960 1350 960  r 420 c 255 193 37 adsb 90 70 50 2 }
 SPHERE  { p 960 1526 960  r 560 c 255 193 37 adsb 90 70 50 2 }
SPHERE  { p 960 1798 960  r 800 c 255 193 37 adsb 90 70 50 2 }