CAMERA { p 1 1 -2500 n 0 0 1 u 0 1 0 }
BACKGROUND { 0 0 0 }
SCENE { c 70 70 70 }

SPOT { xyz 0 0 -2500 c 255 255 255 }

// stars
 PLANE { pn 0 0 9000 0 0 1 c 255 255 255 asdb 100 100 100 100 noise 12 color 1 5 1 1 1  }
PLANE { pn 0 0 9000 0 0 1 c 255 255 255 asdb 100 100 100 100 noise 12 color 1 8 1 1 1  }

// starship
QUADRIC { p 0 0 0 n 0 -1 0 r -100000 c 90 94 107 q -1 4 -1 0 0 0 0 0 0 asdb 70 50 100 10 }

CYLINDER { pn -300 0 -200 0 1 0 r 50 c 42 42 42 asdb 50 80 1 1 krl 0 }
CYLINDER { pn -700 0 -300 0 1 0 r 50 c 42 42 42 asdb 50 80 1 1 krl 0 }
CYLINDER { pn -1100 0 -500 0 1 0 r 50 c 42 42 42 asdb 50 80 1 1 krl 0 }
CYLINDER { pn 300 0 -200 0 1 0 r 50 c 42 42 42 asdb 50 80 1 1 krl 0 }
CYLINDER { pn 700 0 -300 0 1 0 r 50 c 42 42 42 asdb 50 80 1 1 krl 0 }
CYLINDER { pn 1100 0 -500 0 1 0 r 50 c 42 42 42 asdb 50 80 1 1 krl 0 }

// planet
SPHERE { pn -1500 100 1600 n 0 0 0 r 150 c 136 168 192 asdb 40 90 100 15 noise 7 color 2 1 1 1200 15}

SPHERE { pn -1500 -400 600 n 0 0 0 r 100 c 191 160 117 asdb 40 90 100 15 noise 7 color 2 1 1 1200 15}

SPHERE { pn 1200 -400 600 n 0 0 0 r 200 c 111 110 197 asdb 40 90 100 15 noise 7 color 2 1 1 1200 15}

SPHERE { pn -300 -100 600 n 0 0 0 r 30 c 111 110 1 asdb 40 90 100 15 noise 7 color 2 1 1 1200 15}

// board floor
TRIANGLE { t -200 200 -500     200 200 -500   -330 200 -2000 c 142 42 42 asdb 70 50 1 1 noise 4 color 10 10 1 1 1}
TRIANGLE { t -330 200 -2000     200 200 -500   330 200 -2000 c 142 42 42 asdb 70 50 1 1 noise 4 color 10 10 1 1 1 }

// tableau de bord
TRIANGLE { t -150 200 -900     150 200 -900   150 100 -900 c 119 136 153 asdb 20 50 100 100 krl 5 }
TRIANGLE { t -150 200 -900     150 100 -900   -150 100 -900 c 119 136 153 asdb 20 50 100 100 krl 5 }
TRIANGLE { t -150 50 -500     150 100 -900   -150 100 -900 c 119 136 153 asdb 20 50 100 100 krl 5 }
TRIANGLE { t -150 50 -500     150 50 -500   150 100 -900 c 119 136 153 asdb 20 50 100 100 krl 5 }

SPHERE { pn 30 75 -750 n 0 0 0 r 3 c 55 255 55 adsb 20 50 50 5}
SPHERE { pn 20 75 -750 n 0 0 0 r 3 c 55 255 55 adsb 20 50 50 5}
SPHERE { pn 10 75 -750 n 0 0 0 r 3 c 55 255 55 adsb 20 50 50 5}
SPHERE { pn 0 75 -750 n 0 0 0 r 3 c 55 255 55 adsb 20 50 50 5}
SPHERE { pn -10 75 -750 n 0 0 0 r 3 c 55 255 55 adsb 20 50 50 5}
SPHERE { pn -20 75 -750 n 0 0 0 r 3 c 55 255 55 adsb 20 50 50 5}
SPHERE { pn -30 75 -750 n 0 0 0 r 3 c 55 255 55 adsb 20 50 50 5}
SPHERE { pn -40 75 -750 n 0 0 0 r 3 c 55 255 55 adsb 20 50 50 5}
SPHERE { pn -50 75 -750 n 0 0 0 r 3 c 55 255 55 adsb 20 50 50 5}
SPHERE { pn -60 75 -750 n 0 0 0 r 3 c 55 255 55 adsb 20 50 50 5}
SPHERE { pn -70 75 -750 n 0 0 0 r 3 c 55 255 55 adsb 20 50 50 5}
SPHERE { pn -80 75 -750 n 0 0 0 r 3 c 55 255 55 adsb 20 50 50 5}
SPHERE { pn -90 75 -750 n 0 0 0 r 3 c 55 255 55 adsb 20 50 50 5}
SPHERE { pn -100 75 -750 n 0 0 0 r 3 c 55 255 55 adsb 20 50 50 5}
SPHERE { pn -110 75 -750 n 0 0 0 r 3 c 55 255 55 adsb 20 50 50 5}
SPHERE { pn -120 75 -750 n 0 0 0 r 3 c 55 255 55 adsb 20 50 50 5}
SPHERE { pn -130 75 -750 n 0 0 0 r 3 c 55 255 55 adsb 20 50 50 5}
SPHERE { pn -140 75 -750 n 0 0 0 r 3 c 55 255 55 adsb 20 50 50 5}

SPHERE { pn 30 82 -790 n 0 0 0 r 3 c 255 55 55 adsb 20 50 50 5}
SPHERE { pn 20 82 -790 n 0 0 0 r 3 c 255 55 55 adsb 20 50 50 5}
SPHERE { pn 10 82 -790 n 0 0 0 r 3 c 255 55 55 adsb 20 50 50 5}
SPHERE { pn 0 82 -790 n 0 0 0 r 3 c 255 55 55 adsb 20 50 50 5}
SPHERE { pn -10 82 -790 n 0 0 0 r 3 c 255 55 55 adsb 20 50 50 5}
SPHERE { pn -20 82 -790 n 0 0 0 r 3 c 255 55 55 adsb 20 50 50 5}
SPHERE { pn -30 82 -790 n 0 0 0 r 3 c 255 55 55 adsb 20 50 50 5}
SPHERE { pn -40 82 -790 n 0 0 0 r 3 c 255 55 55 adsb 20 50 50 5}
SPHERE { pn -50 82 -790 n 0 0 0 r 3 c 255 55 55 adsb 20 50 50 5}
SPHERE { pn -60 82 -790 n 0 0 0 r 3 c 255 55 55 adsb 20 50 50 5}
SPHERE { pn -70 82 -790 n 0 0 0 r 3 c 255 55 55 adsb 20 50 50 5}
SPHERE { pn -80 82 -790 n 0 0 0 r 3 c 255 55 55 adsb 20 50 50 5}
SPHERE { pn -90 82 -790 n 0 0 0 r 3 c 255 55 55 adsb 20 50 50 5}
SPHERE { pn -100 82 -790 n 0 0 0 r 3 c 255 55 55 adsb 20 50 50 5}
SPHERE { pn -110 82 -790 n 0 0 0 r 3 c 255 55 55 adsb 20 50 50 5}
SPHERE { pn -120 82 -790 n 0 0 0 r 3 c 255 55 55 adsb 20 50 50 5}
SPHERE { pn -130 82 -790 n 0 0 0 r 3 c 255 55 55 adsb 20 50 50 5}
SPHERE { pn -140 82 -790 n 0 0 0 r 3 c 255 55 55 adsb 20 50 50 5}

TRIANGLE { t 40 50 -600     130 90 -900   40 90 -900 c 55 55 255 asdb 100 100 10 10 noise 5 color 100 10 1 1 1 }
TRIANGLE { t 40 50 -600     130 90 -900   130 50 -600 c 55 55 255 asdb 100 100 10 10 noise 5 color 100 10 1 1 1 }

DISC { pn 10 50 -700 0 -3 1 r 10 c 119 136 159 adsb 100 100 100 100}
DISC { pn -110 50 -700 0 -3 1 r 10 c 119 136 159 adsb 100 100 100 100}
DISC { pn -70 50 -700 0 -3 1 r 10 c 119 136 159 adsb 100 100 100 100}
DISC { pn -30 50 -700 0 -3 1 r 10 c 119 136 159 adsb 100 100 100 100}

DISC { pn 10 60 -800 0 -3 1 r 10 c 119 136 159 adsb 100 100 100 100}
DISC { pn -110 60 -800 0 -3 1 r 10 c 119 136 159 adsb 100 100 100 100}
DISC { pn -70 60 -800 0 -3 1 r 10 c 119 136 159 adsb 100 100 100 100}
DISC { pn -30 60 -800 0 -3 1 r 10 c 119 136 159 adsb 100 100 100 100}