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
CAMERA { p 960 546 -1562 n 0 6 99 u 0 100 0  } (recorded)
CAMERA { p 960 546 -1562 n 0 6 99 u 0 100 0  } (recorded)
CAMERA { p 960 549 -1512 n 0 6 99 u 0 100 0  } (recorded)
CAMERA { p 960 553 -1462 n 0 6 99 u 0 100 0  } (recorded)
CAMERA { p 960 556 -1412 n 0 6 99 u 0 100 0  } (recorded)
CAMERA { p 960 559 -1362 n 0 6 99 u 0 100 0  } (recorded)
CAMERA { p 960 563 -1312 n 0 6 99 u 0 100 0  } (recorded)
CAMERA { p 960 566 -1262 n 0 6 99 u 0 100 0  } (recorded)
CAMERA { p 960 569 -1212 n 0 6 99 u 0 100 0  } (recorded)
CAMERA { p 960 573 -1163 n 0 6 99 u 0 100 0  } (recorded)
CAMERA { p 960 576 -1113 n 0 6 99 u 0 100 0  } (recorded)
CAMERA { p 960 579 -1063 n 0 6 99 u 0 100 0  } (recorded)
CAMERA { p 960 583 -1013 n 0 6 99 u 0 100 0  } (recorded)
CAMERA { p 960 586 -963 n 0 6 99 u 0 100 0  } (recorded)
CAMERA { p 960 589 -913 n 0 6 99 u 0 100 0  } (recorded)
CAMERA { p 960 593 -863 n 0 6 99 u 0 100 0  } (recorded)
CAMERA { p 960 596 -813 n 0 6 99 u 0 100 0  } (recorded)
CAMERA { p 960 599 -763 n 0 6 99 u 0 100 0  } (recorded)
CAMERA { p 960 603 -714 n 0 6 99 u 0 100 0  } (recorded)
CAMERA { p 960 606 -664 n 0 6 99 u 0 100 0  } (recorded)
CAMERA { p 960 609 -614 n 0 6 99 u 0 100 0  } (recorded)
CAMERA { p 960 613 -564 n 0 6 99 u 0 100 0  } (recorded)
CAMERA { p 960 616 -514 n 0 6 99 u 0 100 0  } (recorded)
CAMERA { p 960 619 -464 n 0 6 99 u 0 100 0  } (recorded)
CAMERA { p 960 623 -414 n 0 6 99 u 0 100 0  } (recorded)
CAMERA { p 960 626 -364 n 0 6 99 u 0 100 0  } (recorded)
CAMERA { p 960 629 -314 n 0 6 99 u 0 100 0  } (recorded)
CAMERA { p 960 633 -265 n 0 6 99 u 0 100 0  } (recorded)
CAMERA { p 960 633 -265 n 0 2 99 u 0 100 0  } (recorded)
CAMERA { p 960 633 -265 n 0 -1 99 u 0 100 0  } (recorded)
CAMERA { p 960 633 -265 n 0 -5 99 u 0 100 0  } (recorded)
CAMERA { p 960 633 -265 n 0 -9 99 u 0 100 0  } (recorded)
CAMERA { p 960 633 -265 n 0 -13 99 u 0 100 0  } (recorded)
CAMERA { p 960 626 -215 n 0 -13 99 u 0 100 0  } (recorded)
CAMERA { p 960 619 -165 n 0 -13 99 u 0 100 0  } (recorded)
CAMERA { p 960 613 -115 n 0 -13 99 u 0 100 0  } (recorded)
CAMERA { p 960 606 -65 n 0 -13 99 u 0 100 0  } (recorded)
CAMERA { p 960 599 -15 n 0 -13 99 u 0 100 0  } (recorded)
CAMERA { p 960 593 34 n 0 -13 99 u 0 100 0  } (recorded)
CAMERA { p 960 586 84 n 0 -13 99 u 0 100 0  } (recorded)
CAMERA { p 960 579 134 n 0 -13 99 u 0 100 0  } (recorded)
CAMERA { p 960 573 183 n 0 -13 99 u 0 100 0  } (recorded)
CAMERA { p 960 566 233 n 0 -13 99 u 0 100 0  } (recorded)
CAMERA { p 960 559 283 n 0 -13 99 u 0 100 0  } (recorded)
CAMERA { p 960 553 333 n 0 -13 99 u 0 100 0  } (recorded)
CAMERA { p 960 546 383 n 0 -13 99 u 0 100 0  } (recorded)
CAMERA { p 960 539 433 n 0 -13 99 u 0 100 0  } (recorded)
CAMERA { p 960 546 383 n 0 -13 99 u 0 100 0  } (recorded)
CAMERA { p 960 553 333 n 0 -13 99 u 0 100 0  } (recorded)
CAMERA { p 960 559 283 n 0 -13 99 u 0 100 0  } (recorded)
CAMERA { p 960 559 283 n 0 -17 99 u 0 100 0  } (recorded)
CAMERA { p 960 559 283 n 0 -21 99 u 0 100 0  } (recorded)
CAMERA { p 960 559 283 n 0 -17 99 u 0 100 0  } (recorded)
CAMERA { p 960 559 283 n 0 -13 99 u 0 100 0  } (recorded)
CAMERA { p 960 559 283 n 0 -9 99 u 0 100 0  } (recorded)
CAMERA { p 960 559 283 n 0 -5 99 u 0 100 0  } (recorded)
CAMERA { p 960 559 283 n 0 -1 99 u 0 100 0  } (recorded)
CAMERA { p 960 559 283 n 0 2 99 u 0 100 0  } (recorded)
CAMERA { p 960 559 283 n 0 6 99 u 0 100 0  } (recorded)
CAMERA { p 960 559 283 n 0 10 99 u 0 100 0  } (recorded)
CAMERA { p 960 559 283 n 0 14 99 u 0 100 0  } (recorded)
CAMERA { p 960 559 283 n 0 18 99 u 0 100 0  } (recorded)
CAMERA { p 960 559 283 n 0 22 99 u 0 100 0  } (recorded)
CAMERA { p 960 559 283 n 0 26 99 u 0 100 0  } (recorded)
CAMERA { p 960 559 283 n 0 30 99 u 0 100 0  } (recorded)
CAMERA { p 960 559 283 n 0 34 99 u 0 100 0  } (recorded)
CAMERA { p 910 559 283 n 0 34 99 u 0 100 0  } (recorded)
CAMERA { p 860 559 283 n 0 34 99 u 0 100 0  } (recorded)
CAMERA { p 810 559 283 n 0 34 99 u 0 100 0  } (recorded)
CAMERA { p 760 559 283 n 0 34 99 u 0 100 0  } (recorded)
CAMERA { p 710 559 283 n 0 34 99 u 0 100 0  } (recorded)
CAMERA { p 660 559 283 n 0 34 99 u 0 100 0  } (recorded)
CAMERA { p 610 559 283 n 0 34 99 u 0 100 0  } (recorded)
CAMERA { p 610 577 333 n 0 34 99 u 0 100 0  } (recorded)
CAMERA { p 610 594 383 n 0 34 99 u 0 100 0  } (recorded)
CAMERA { p 610 611 433 n 0 34 99 u 0 100 0  } (recorded)
CAMERA { p 610 629 483 n 0 34 99 u 0 100 0  } (recorded)
CAMERA { p 610 646 533 n 0 34 99 u 0 100 0  } (recorded)
CAMERA { p 610 663 583 n 0 34 99 u 0 100 0  } (recorded)
CAMERA { p 610 680 632 n 0 34 99 u 0 100 0  } (recorded)
CAMERA { p 610 698 682 n 0 34 99 u 0 100 0  } (recorded)
CAMERA { p 610 715 732 n 0 34 99 u 0 100 0  } (recorded)
CAMERA { p 610 732 782 n 0 34 99 u 0 100 0  } (recorded)
CAMERA { p 610 732 782 n 4 34 99 u 0 100 0  } (recorded)
CAMERA { p 610 732 782 n 8 34 99 u 0 100 0  } (recorded)
CAMERA { p 610 732 782 n 12 34 99 u 0 100 0  } (recorded)
CAMERA { p 610 732 782 n 16 34 99 u 0 100 0  } (recorded)
CAMERA { p 610 732 782 n 20 34 99 u 0 100 0  } (recorded)
CAMERA { p 610 732 782 n 24 34 99 u 0 100 0  } (recorded)
CAMERA { p 560 732 794 n 24 34 99 u 0 100 0  } (recorded)
CAMERA { p 510 732 806 n 24 34 99 u 0 100 0  } (recorded)
CAMERA { p 461 732 818 n 24 34 99 u 0 100 0  } (recorded)
CAMERA { p 411 732 830 n 24 34 99 u 0 100 0  } (recorded)
CAMERA { p 411 732 830 n 28 34 99 u 0 100 0  } (recorded)
CAMERA { p 411 732 830 n 32 34 99 u 0 100 0  } (recorded)
CAMERA { p 411 732 830 n 36 34 99 u 0 100 0  } (recorded)
CAMERA { p 411 732 830 n 40 34 99 u 0 100 0  } (recorded)
CAMERA { p 411 732 830 n 43 34 99 u 0 100 0  } (recorded)
CAMERA { p 411 732 830 n 47 34 99 u 0 100 0  } (recorded)
CAMERA { p 411 732 830 n 51 34 99 u 0 100 0  } (recorded)
CAMERA { p 437 750 880 n 51 34 99 u 0 100 0  } (recorded)
CAMERA { p 463 767 930 n 51 34 99 u 0 100 0  } (recorded)
CAMERA { p 489 784 980 n 51 34 99 u 0 100 0  } (recorded)
CAMERA { p 515 802 1030 n 51 34 99 u 0 100 0  } (recorded)
CAMERA { p 515 802 1030 n 55 34 99 u 0 100 0  } (recorded)
CAMERA { p 543 819 1080 n 55 34 99 u 0 100 0  } (recorded)
CAMERA { p 543 819 1080 n 60 34 99 u 0 100 0  } (recorded)
CAMERA { p 573 836 1129 n 60 34 99 u 0 100 0  } (recorded)
CAMERA { p 573 836 1129 n 64 34 99 u 0 100 0  } (recorded)
CAMERA { p 605 854 1179 n 64 34 99 u 0 100 0  } (recorded)
CAMERA { p 605 854 1179 n 68 34 99 u 0 100 0  } (recorded)
CAMERA { p 605 854 1179 n 72 34 99 u 0 100 0  } (recorded)
CAMERA { p 641 871 1229 n 72 34 99 u 0 100 0  } (recorded)
CAMERA { p 641 871 1229 n 76 34 99 u 0 100 0  } (recorded)
CAMERA { p 679 888 1279 n 76 34 99 u 0 100 0  } (recorded)
CAMERA { p 679 888 1279 n 80 34 99 u 0 100 0  } (recorded)
CAMERA { p 679 888 1279 n 84 34 99 u 0 100 0  } (recorded)
CAMERA { p 721 906 1329 n 84 34 99 u 0 100 0  } (recorded)
CAMERA { p 763 923 1379 n 84 34 99 u 0 100 0  } (recorded)
CAMERA { p 805 940 1429 n 84 34 99 u 0 100 0  } (recorded)
CAMERA { p 847 958 1479 n 84 34 99 u 0 100 0  } (recorded)
CAMERA { p 889 975 1529 n 84 34 99 u 0 100 0  } (recorded)
CAMERA { p 889 975 1529 n 84 38 99 u 0 100 0  } (recorded)
CAMERA { p 889 975 1529 n 84 42 99 u 0 100 0  } (recorded)
CAMERA { p 889 975 1529 n 84 46 99 u 0 100 0  } (recorded)
CAMERA { p 889 975 1529 n 84 46 99 u -4 99 0  } (recorded)
CAMERA { p 889 975 1529 n 84 46 99 u -9 99 0  } (recorded)
CAMERA { p 889 975 1529 n 84 46 99 u -14 98 0  } (recorded)
CAMERA { p 889 975 1529 n 84 42 99 u -14 98 0  } (recorded)
CAMERA { p 889 975 1529 n 84 38 99 u -14 98 0  } (recorded)
CAMERA { p 889 975 1529 n 84 34 99 u -14 98 0  } (recorded)
CAMERA { p 889 975 1529 n 84 30 99 u -14 98 0  } (recorded)
CAMERA { p 889 975 1529 n 84 26 99 u -14 98 0  } (recorded)
CAMERA { p 889 975 1529 n 84 22 99 u -14 98 0  } (recorded)
CAMERA { p 889 975 1529 n 84 18 99 u -14 98 0  } (recorded)
CAMERA { p 889 975 1529 n 84 14 99 u -14 98 0  } (recorded)
CAMERA { p 889 975 1529 n 84 10 99 u -14 98 0  } (recorded)
CAMERA { p 889 975 1529 n 84 6 99 u -14 98 0  } (recorded)
CAMERA { p 889 975 1529 n 84 2 99 u -14 98 0  } (recorded)
CAMERA { p 889 975 1529 n 84 -1 99 u -14 98 0  } (recorded)
CAMERA { p 889 975 1529 n 84 -5 99 u -14 98 0  } (recorded)
CAMERA { p 889 975 1529 n 84 -9 99 u -14 98 0  } (recorded)
CAMERA { p 931 970 1578 n 84 -9 99 u -14 98 0  } (recorded)
CAMERA { p 973 966 1628 n 84 -9 99 u -14 98 0  } (recorded)
CAMERA { p 1015 961 1678 n 84 -9 99 u -14 98 0  } (recorded)
CAMERA { p 1057 956 1728 n 84 -9 99 u -14 98 0  } (recorded)
CAMERA { p 1099 952 1778 n 84 -9 99 u -14 98 0  } (recorded)
CAMERA { p 1057 956 1728 n 84 -9 99 u -14 98 0  } (recorded)
CAMERA { p 1015 961 1678 n 84 -9 99 u -14 98 0  } (recorded)
CAMERA { p 973 966 1628 n 84 -9 99 u -14 98 0  } (recorded)
CAMERA { p 931 970 1578 n 84 -9 99 u -14 98 0  } (recorded)
CAMERA { p 889 975 1529 n 84 -9 99 u -14 98 0  } (recorded)
CAMERA { p 847 980 1479 n 84 -9 99 u -14 98 0  } (recorded)
CAMERA { p 805 984 1429 n 84 -9 99 u -14 98 0  } (recorded)
CAMERA { p 763 989 1379 n 84 -9 99 u -14 98 0  } (recorded)
CAMERA { p 721 994 1329 n 84 -9 99 u -14 98 0  } (recorded)
CAMERA { p 679 998 1279 n 84 -9 99 u -14 98 0  } (recorded)
CAMERA { p 637 1003 1229 n 84 -9 99 u -14 98 0  } (recorded)
CAMERA { p 595 1008 1179 n 84 -9 99 u -14 98 0  } (recorded)
CAMERA { p 553 1012 1129 n 84 -9 99 u -14 98 0  } (recorded)
CAMERA { p 511 1017 1080 n 84 -9 99 u -14 98 0  } (recorded)
