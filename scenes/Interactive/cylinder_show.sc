SCENE { c 0 0 0 seed 42 }
CAMERA { p 0 -300 -2000 n 0 0 1 u 0 1 0 }
BACKGROUND { 0 0 0 }

SPOT { xyz 0 -300 -1660 c 205 205 205 }
SPOT { xyz 0 0 -1000 c 155 155 155 }

CYLINDER  { pnxyz -500 -200 100 1 1 1 r 50 c 200 100 100 adsb 20 100 50 128 }
CYLINDER  { pnxyz  0 0 100 1 0 1 r 50 c 100 200 100 adsb 20 100 50 128 }
CYLINDER  { pnxyz 500 0 100 1 1 0 r 50 c 100 100 200 adsb 20 100 50 128 }
CYLINDER  { pnxyz -300 0 100 0 1 1 r 50 c 200 200 100 adsb 20 100 50 128 }
CYLINDER  { pnxyz -300 150 -200 1 0 0 r 50 c 200 100 200 adsb 20 100 50 128 }
CYLINDER  { pnxyz 500 150 -300 0 1 0 r 50 c 100 200 200 adsb 20 100 50 128 }

PLANE  { pxyz 0 200 0 nxyz 0 1 0 c 255 255 255 adsb 30 100 1 1 krl 20 }
PLANE  { pxyz 0 0 2000 nxyz 0 0 1 c 255 255 255 adsb 30 100 1 1 krl 20}
