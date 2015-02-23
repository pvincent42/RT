CAMERA { p 2000 -1000 -4000 n -1 0 1 u 0 1 0 }
CAMERA { p 1 -4000 -4000 n 0 1 1 u 0 1 0 }
BACKGROUND { 30 30 30 }
SCENE { c 0 0 0 seed 42 }

SPOT { xyz -2000 -2000 -3000 c 500 500 500 }
SPOT { xyz -2000 -2000 -2000 c 300 300 300 }
 SPOT { xyz -5000 -1000 0 c 250 250 250 }
 SPOT { xyz 5000 -1000 0 c 250 250 250 }
 SPOT { xyz 0 -1000 -5000 c 250 250 250 }
 SPOT { xyz 0 -1000 5000 c 250 250 250 }

 SPOT { xyz 0 -2000 -2000 c 255 255 255 }
 SPOT { xyz 0 -2000 2000 c 255 255 255 }
 SPOT { xyz -1500 -1000 -1000 c 255 255 255 }
 SPOT { xyz -1500 -1000 1000 c 255 255 255 }
 SPOT { xyz 1500 -1000 1000 c 255 255 255 }
 SPOT { xyz 1500 -1000 -1000 c 255 255 255 }

// good color
 SPHERE { pn 0 -1799 1 n 0 0 0 r 200 c 255 255 212 adsb 50 100 80 20 krl 10}

// miroir           R               G                  B
 TRIANGLE { t -4000 -3000 1 -5000 -1000 -1000 -4500 -1000 1000 c 255 255 255 asdb 100 100 100 100 krl 100}

// miroir 1/2           R               G                  B
TRIANGLE { t -4000 -2800 -100 -4600 -1000 -1000 -4500 -1000 -200 c 255 255 255 asdb 100 100 100 100 krl 100}

// miroir 2/2          R               G                  B
TRIANGLE { t -4000 -3000 1 -4800 -1000 200 -4500 -1000 1000 c 255 255 255 asdb 100 100 100 100 krl 100}

// miroir 2
TRIANGLE { t -4050 -3000 -100 -4000 -3000 -1500 -4500 -2000 -1000 c 255 255 255 asdb 100 100 100 100 krl 100}

// miroir 3
TRIANGLE { t -4000 -3000 1 -5000 -1200 -1000 -4600 -2000 -1000 c 255 255 255 asdb 100 100 100 100 krl 100}

// miroir 4
TRIANGLE { t -4000 -3000 1 -3400 -3500 1000 -4000 -1000 1000 c 255 255 255 asdb 100 100 100 100 krl 100}

 SPHERE { pn -5000 -2900 1 n 0 0 0 r 100 c 255 0 0 asdb 50 70 50 2 kt 0}
 SPHERE { pn 0 -3000 4000 n 0 0 0 r 100 c 0 255 0 asdb 50 70 50 2 kt 0}
 SPHERE { pn 0 -3200 -4000 n 0 0 0 r 100 c 0 0 255 asdb 50 70 50 2 kt 0}

// FOND

PLANE { pn -6000 1 1 1 0 0 c 106 100 106 asdb 50 50 1 1}

// SOCLE

DISC { pn 0 200 0 0 1 0 r 2600 c 23 23 23 adsb 100 100 1 1 noise 4 color 1 2 10 255 100}

// SOL

PLANE { pn 1 300 1 0 -1 0 c 106 100 106 asdb 50 50 1 1}

// Base

SPHERE { pn 0 0 1 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 400 0 1 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 800 0 1 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 1200 0 1 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -400 0 1 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -800 0 1 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -1200 0 1 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}

SPHERE { pn 0 0 401 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 400 0 401 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 800 0 401 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 1200 0 401 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -400 0 401 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -800 0 401 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -1200 0 401 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}

SPHERE { pn 0 0 801 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 400 0 801 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 800 0 801 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 1200 0 801 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -400 0 801 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -800 0 801 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -1200 0 801 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}

SPHERE { pn 0 0 1201 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 400 0 1201 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 800 0 1201 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 1200 0 1201 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -400 0 1201 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -800 0 1201 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -1200 0 1201 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}

SPHERE { pn 0 0 -401 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 400 0 -401 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 800 0 -401 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 1200 0 -401 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -400 0 -401 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -800 0 -401 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -1200 0 -401 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}

SPHERE { pn 0 0 -801 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 400 0 -801 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 800 0 -801 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 1200 0 -801 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -400 0 -801 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -800 0 -801 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -1200 0 -801 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}

SPHERE { pn 0 0 -1201 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 400 0 -1201 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 800 0 -1201 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 1200 0 -1201 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -400 0 -1201 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -800 0 -1201 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -1200 0 -1201 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}

// 1floor

SPHERE { pn 200 -299 201 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 600 -299 201 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 1000 -299 201 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -200 -299 201 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -600 -299 201 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -1000 -299 201 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}

SPHERE { pn 200 -299 601 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 600 -299 601 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 1000 -299 601 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -200 -299 601 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -600 -299 601 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -1000 -299 601 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}

SPHERE { pn 200 -299 1001 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 600 -299 1001 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 1000 -299 1001 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -200 -299 1001 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -600 -299 1001 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -1000 -299 1001 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}

SPHERE { pn 200 -299 -201 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 600 -299 -201 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 1000 -299 -201 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -200 -299 -201 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -600 -299 -201 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -1000 -299 -201 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}

SPHERE { pn 200 -299 -601 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 600 -299 -601 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 1000 -299 -601 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -200 -299 -601 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -600 -299 -601 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -1000 -299 -601 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}

SPHERE { pn 200 -299 -1001 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 600 -299 -1001 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 1000 -299 -1001 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -200 -299 -1001 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -600 -299 -1001 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -1000 -299 -1001 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}

// 2 floor

SPHERE { pn 0 -599 1 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 400 -599 1 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 800 -599 1 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -400 -599 1 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -800 -599 1 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}

SPHERE { pn 0 -599 401 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 400 -599 401 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 800 -599 401 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -400 -599 401 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -800 -599 401 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}

SPHERE { pn 0 -599 801 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 400 -599 801 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 800 -599 801 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -400 -599 801 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -800 -599 801 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}

SPHERE { pn 0 -599 -401 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 400 -599 -401 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 800 -599 -401 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -400 -599 -401 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -800 -599 -401 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}

SPHERE { pn 0 -599 -801 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 400 -599 -801 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 800 -599 -801 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -400 -599 -801 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -800 -599 -801 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}

// 3 floor

SPHERE { pn 200 -899 -201 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 600 -899 -201 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -200 -899 -201 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -600 -899 -201 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}

SPHERE { pn 200 -899 201 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 600 -899 201 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -200 -899 201 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -600 -899 201 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}

SPHERE { pn 200 -899 -601 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 600 -899 -601 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -200 -899 -601 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -600 -899 -601 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}

SPHERE { pn 200 -899 601 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 600 -899 601 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -200 -899 601 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -600 -899 601 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}

// 4 floor

SPHERE { pn 000 -1199 001 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 400 -1199 001 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -400 -1199 001 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}

SPHERE { pn 000 -1199 401 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 400 -1199 401 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -400 -1199 401 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}

SPHERE { pn 000 -1199 -401 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn 400 -1199 -401 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -400 -1199 -401 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}

// 5 floor

SPHERE { pn 200 -1499 201 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -200 -1499 201 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}

SPHERE { pn 200 -1499 -201 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}
SPHERE { pn -200 -1499 -201 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}

// 6 floor

SPHERE { pn 0 -1799 1 n 0 0 0 r 200 c 255 255 212 adsb 40 90 80 20 krl 10 kt 0}


