-- Generated [
-- Format      : ECLIPSE keywords (ASCII)
-- Exported by : Petrel 2016.3 (64-bit) Schlumberger
-- User name   : BCHUAH
-- Date        : Wednesday, November 15 2017 16:22:18
-- Project     : BaseCase367.pet
-- Generated ]

RPTSCHED                               -- Generated : Petrel
  FIP=3 WELLS /

RPTRST                                 -- Generated : Petrel
  BASIC=3 FLOWS FLORES FREQ=30 ALLPROPS RSSAT PCOW BG BO BW /

WELSPECS                               -- Generated : Petrel
--'B2' is the simulation well name used to describe flow from 'B2'
--'B4' is the simulation well name used to describe flow from 'B4'
--'B1' is the simulation well name used to describe flow from 'B1'
--
  B2 BANANG 20 56 4554.99 LIQ 1* STD STOP YES 1* SEG /
  B4 BANANG 26 46 4269.36 LIQ 1* STD STOP YES 1* SEG /
  B1 BANANG 28 59 4269.36 LIQ 1* STD STOP YES 1* SEG /
  /

COMPDAT                                -- Generated : Petrel
  B2 20 56 29 29 OPEN 1* 1.6070E+001 0.37500 9344.20 0.00 1* Z 11.52 /
  B2 20 56 30 30 OPEN 1* 9.3158E+000 0.37500 5412.02 0.00 1* Z 11.48 /
  B2 20 56 31 31 OPEN 1* 1.2239E-002 0.37500 7.11 0.00 1* Z 11.47 /
  B2 21 56 31 31 OPEN 1* 1.0534E+002 0.37500 60811.08 0.00 1* Z 11.18 /
  B2 21 56 32 32 OPEN 1* 5.5181E+001 0.37500 31864.36 0.00 1* Z 11.19 /
  B2 22 56 32 32 OPEN 1* 6.2385E+000 0.37500 3602.75 0.00 1* Z 11.20 /
  B2 22 56 33 33 OPEN 1* 9.4697E+001 0.37500 54690.29 0.00 1* Z 11.20 /
  B2 22 56 34 34 OPEN 1* 5.8767E+001 0.37500 33949.77 0.00 1* Z 11.21 /
  B2 23 56 34 34 OPEN 1* 5.1838E+001 0.37500 29809.84 0.00 1* X 11.01 /
  B2 23 57 34 34 OPEN 1* 1.1664E+001 0.37500 6709.63 0.00 1* X 11.02 /
  B2 23 57 35 35 OPEN 1* 1.2513E+002 0.37500 71982.23 0.00 1* X 11.02 /
  B2 24 57 35 35 OPEN 1* 5.9853E+001 0.37500 34417.29 0.00 1* X 11.00 /
  B2 24 57 34 34 OPEN 1* 1.3662E+002 0.37500 78563.48 0.00 1* X 11.01 /
  B2 25 57 34 34 OPEN 1* 1.1725E+002 0.37500 67417.19 0.00 1* X 11.00 /
  B2 25 57 35 35 OPEN 1* 8.6091E+001 0.37500 49503.42 0.00 1* X 11.00 /
  B2 26 57 34 34 OPEN 1* 5.4074E-001 0.37500 312.33 0.00 1* Z 11.21 /
  B2 26 57 35 35 OPEN 1* 1.6308E+001 0.37500 9418.86 0.00 1* Z 11.20 /
  B2 26 58 35 35 OPEN 1* 1.1529E+001 0.37500 6656.06 0.00 1* Z 11.18 /
  B2 26 58 36 36 OPEN 1* 2.7274E+001 0.37500 15752.48 0.00 1* Z 11.20 /
  B4 26 46 2 2 OPEN 1* 8.1320E-001 0.70833 627.97 1.00 1* Z 30.90 /
  B4 26 46 3 3 OPEN 1* 6.1465E+000 0.70833 4746.99 1.00 1* Z 30.92 /
  B4 26 46 4 4 OPEN 1* 6.0046E+000 0.70833 4637.94 1.00 1* Z 30.94 /
  B4 26 46 5 5 OPEN 1* 7.0695E+000 0.70833 5460.76 1.00 1* Z 30.95 /
  B4 26 46 6 6 OPEN 1* 6.3288E+000 0.70833 4888.22 1.00 1* Z 30.94 /
  B4 26 46 7 7 OPEN 1* 5.2126E+000 0.70833 4026.56 1.00 1* Z 30.96 /
  B4 26 46 8 8 OPEN 1* 6.1763E+000 0.70833 4771.57 1.00 1* Z 30.98 /
  B4 26 46 9 9 OPEN 1* 5.5420E+000 0.70833 4282.06 1.00 1* Z 31.00 /
  B4 26 46 10 10 OPEN 1* 6.3446E+000 0.70833 4902.78 1.00 1* Z 31.02 /
  B4 26 46 11 11 OPEN 1* 5.8687E+000 0.70833 4535.57 1.00 1* Z 31.04 /
  B4 26 46 12 12 OPEN 1* 4.5375E+000 0.70833 3507.19 1.00 1* Z 31.06 /
  B4 26 46 13 13 OPEN 1* 2.8749E+000 0.70833 2222.35 1.00 1* Z 31.08 /
  B1 27 68 35 35 OPEN 1* 9.1962E+000 0.70833 6486.78 1.00 1* Z 19.25 /
  B1 27 68 36 36 OPEN 1* 9.8039E+000 0.70833 6917.44 1.00 1* Z 19.28 /
  B1 27 68 37 37 OPEN 1* 8.8807E+000 0.70833 6266.10 1.00 1* Z 19.28 /
  B1 27 68 38 38 OPEN 1* 9.3556E+000 0.70833 6601.00 1.00 1* Z 19.27 /
  B1 27 68 39 39 OPEN 1* 2.0711E+001 0.70833 14613.08 1.00 1* Z 19.27 /
  B1 27 68 40 40 OPEN 1* 1.7716E+001 0.70833 12499.18 1.00 1* Z 19.27 /
  /

WRFTPLT                                -- Generated : Petrel
  B2 REPT REPT NO /
  B4 REPT REPT NO /
  B1 REPT REPT NO /
  /

COMPLUMP                               -- Generated : Petrel
--'B1:I60 perforation': 1
--
  B1 27 68 35 35 1 /
  B1 27 68 36 36 1 /
  B1 27 68 37 37 1 /
  B1 27 68 38 38 1 /
  B1 27 68 39 39 1 /
  B1 27 68 40 40 1 /
  /

GRUPTREE                               -- Generated : Petrel
  BANANG FIELD /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2145.80 0.00 0.00 1* 1* 850.0000 0.0000 /
  B2 OPEN ORAT 1207.00 0.00 1323.30 1* 1* 1000.0000 2091.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 3094.0000 /
  /

DATES                                  -- Generated : Petrel
  16 JUL 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 1877.60 0.00 0.00 1* 1* 900.0000 0.0000 /
  B2 OPEN ORAT 2414.00 0.00 2646.60 1* 1* 920.0000 2079.0000 /
  B4 OPEN ORAT 296.00 0.00 0.00 1* 1* 0.0000 3094.0000 /
  /

DATES                                  -- Generated : Petrel
  17 JUL 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3218.70 0.00 0.00 1* 1* 599.0000 0.0000 /
  B2 OPEN ORAT 3218.70 0.00 3528.80 1* 1* 894.0000 2059.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 3094.0000 /
  /

DATES                                  -- Generated : Petrel
  18 JUL 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3218.70 0.00 0.00 1* 1* 734.0000 0.0000 /
  B2 OPEN ORAT 3218.70 0.00 2264.90 1* 1* 891.0000 2052.0000 /
  /

DATES                                  -- Generated : Petrel
  19 JUL 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 0.0000 /
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 2089.0000 /
  /

DATES                                  -- Generated : Petrel
  20 JUL 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 2090.0000 /
  /

DATES                                  -- Generated : Petrel
  21 JUL 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 2087.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 3594.0000 /
  /

DATES                                  -- Generated : Petrel
  22 JUL 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3218.70 0.00 0.00 1* 1* 890.0000 0.0000 /
  B2 OPEN ORAT 3140.20 0.00 2264.90 1* 1* 950.0000 2073.0000 /
  B4 OPEN ORAT 1799.90 0.00 4044.40 1* 1* 1200.0000 3526.0000 /
  /

DATES                                  -- Generated : Petrel
  23 JUL 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2615.20 0.00 0.00 1* 1* 890.0000 0.0000 /
  B2 OPEN ORAT 2191.60 0.00 1580.70 1* 1* 950.0000 2073.0000 /
  B4 OPEN ORAT 1799.90 0.00 4044.40 1* 1* 1800.0000 2331.0000 /
  /

DATES                                  -- Generated : Petrel
  24 JUL 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 603.50 0.00 0.00 1* 1* 890.0000 0.0000 /
  B2 OPEN ORAT 1400.10 0.00 2224.40 1* 1* 850.0000 2073.0000 /
  B4 OPEN ORAT 70.80 0.00 11294.10 1* 1* 1800.0000 2296.0000 /
  /

DATES                                  -- Generated : Petrel
  25 JUL 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2914.90 0.00 0.00 1* 1* 850.0000 0.0000 /
  B2 OPEN ORAT 6596.10 0.00 3332.30 1* 1* 1000.0000 2073.0000 /
  B4 OPEN ORAT 70.80 0.00 11294.10 1* 1* 1800.0000 2266.0000 /
  /

DATES                                  -- Generated : Petrel
  26 JUL 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2935.50 0.00 0.00 1* 1* 850.0000 0.0000 /
  B2 OPEN ORAT 3298.10 0.00 1666.20 1* 1* 1000.0000 2073.0000 /
  B4 OPEN ORAT 36.90 0.00 5882.30 1* 1* 1800.0000 3990.0000 /
  /

DATES                                  -- Generated : Petrel
  27 JUL 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2935.50 0.00 0.00 1* 1* 850.0000 0.0000 /
  B2 OPEN ORAT 6882.90 0.00 3477.20 1* 1* 1000.0000 2073.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 4013.0000 /
  /

DATES                                  -- Generated : Petrel
  28 JUL 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2935.50 0.00 0.00 1* 1* 900.0000 0.0000 /
  B2 OPEN ORAT 6882.90 0.00 3477.20 1* 1* 1000.0000 2073.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 4019.0000 /
  /

DATES                                  -- Generated : Petrel
  29 JUL 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7124.90 0.00 0.00 1* 1* 850.0000 0.0000 /
  B2 OPEN ORAT 2719.20 0.00 3667.30 1* 1* 1000.0000 2073.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 4022.0000 /
  /

DATES                                  -- Generated : Petrel
  30 JUL 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7124.90 0.00 0.00 1* 1* 850.0000 0.0000 /
  B2 OPEN ORAT 2425.60 0.00 2861.40 1* 1* 1000.0000 2073.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 4024.0000 /
  /

DATES                                  -- Generated : Petrel
  31 JUL 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7124.90 0.00 0.00 1* 1* 850.0000 0.0000 /
  B2 OPEN ORAT 2456.50 0.00 3486.30 1* 1* 1000.0000 2073.0000 /
  B4 OPEN ORAT 196.70 0.00 4011.80 1* 1* 2000.0000 2624.0000 /
  /

DATES                                  -- Generated : Petrel
  1 AUG 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7938.30 0.00 0.00 1* 1* 850.0000 0.0000 /
  B2 OPEN ORAT 2737.00 0.00 4509.20 1* 1* 1000.0000 2073.0000 /
  B4 OPEN ORAT 809.00 0.00 19158.70 1* 1* 2000.0000 2624.0000 /
  /

DATES                                  -- Generated : Petrel
  2 AUG 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4134.50 0.00 0.00 1* 1* 850.0000 0.0000 /
  B2 OPEN ORAT 2737.00 0.00 4509.20 1* 1* 1000.0000 2073.0000 /
  B4 OPEN ORAT 641.20 0.00 8762.00 1* 1* 2500.0000 2995.0000 /
  /

DATES                                  -- Generated : Petrel
  3 AUG 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 241.70 0.00 0.00 1* 1* 900.0000 0.0000 /
  B2 OPEN ORAT 2737.00 0.00 4509.20 1* 1* 1000.0000 2073.0000 /
  B4 OPEN ORAT 374.00 0.00 5111.20 1* 1* 2500.0000 2995.0000 /
  /

DATES                                  -- Generated : Petrel
  4 AUG 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 8537.90 0.00 0.00 1* 1* 900.0000 0.0000 /
  B2 OPEN ORAT 2848.80 0.00 3725.80 1* 1* 1000.0000 2073.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 3998.0000 /
  /

DATES                                  -- Generated : Petrel
  5 AUG 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4754.60 0.00 0.00 1* 1* 900.0000 0.0000 /
  B2 OPEN ORAT 195.20 0.00 1124.70 1* 1* 1000.0000 2067.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 4003.0000 /
  /

DATES                                  -- Generated : Petrel
  6 AUG 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4765.00 0.00 0.00 1* 1* 900.0000 0.0000 /
  B2 OPEN ORAT 3314.90 0.00 1765.50 1* 1* 1000.0000 2067.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 4006.0000 /
  /

DATES                                  -- Generated : Petrel
  7 AUG 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4705.80 0.00 0.00 1* 1* 900.0000 0.0000 /
  B2 OPEN ORAT 3513.60 0.00 1935.50 1* 1* 1000.0000 2064.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 4009.0000 /
  /

DATES                                  -- Generated : Petrel
  8 AUG 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4789.40 0.00 0.00 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 3592.60 0.00 1870.10 1* 1* 1000.0000 2064.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 4010.0000 /
  /

DATES                                  -- Generated : Petrel
  9 AUG 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4789.40 0.00 0.00 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4887.00 0.00 2066.30 1* 1* 1000.0000 2060.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 4012.0000 /
  /

DATES                                  -- Generated : Petrel
  10 AUG 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4726.70 0.00 0.00 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4925.40 0.00 1974.70 1* 1* 1000.0000 2060.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 4013.0000 /
  /

DATES                                  -- Generated : Petrel
  11 AUG 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4684.80 0.00 0.00 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4845.20 0.00 2000.90 1* 1* 1000.0000 2059.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 4015.0000 /
  /

DATES                                  -- Generated : Petrel
  12 AUG 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4684.80 0.00 0.00 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 5096.20 0.00 2157.80 1* 1* 1000.0000 2056.0000 /
  /

DATES                                  -- Generated : Petrel
  13 AUG 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4503.60 0.00 0.00 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 5029.90 0.00 2144.70 1* 1* 950.0000 2055.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 4017.0000 /
  /

DATES                                  -- Generated : Petrel
  14 AUG 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4705.80 0.00 0.00 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4956.70 0.00 2105.50 1* 1* 950.0000 2053.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 4018.0000 /
  /

DATES                                  -- Generated : Petrel
  15 AUG 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4946.30 0.00 0.00 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4670.90 0.00 1948.60 1* 1* 950.0000 2055.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 4019.0000 /
  /

DATES                                  -- Generated : Petrel
  16 AUG 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4848.70 0.00 0.00 1* 1* 1000.0000 0.0000 /
  B2 OPEN ORAT 4660.40 0.00 1909.30 1* 1* 950.0000 2054.0000 /
  /

DATES                                  -- Generated : Petrel
  17 AUG 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4718.80 0.00 0.00 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 3849.60 0.00 1826.80 1* 1* 950.0000 2054.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 4021.0000 /
  /

DATES                                  -- Generated : Petrel
  18 AUG 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4995.10 0.00 0.00 1* 1* 1000.0000 0.0000 /
  B2 OPEN ORAT 5455.20 0.00 2275.50 1* 1* 950.0000 2054.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 4022.0000 /
  /

DATES                                  -- Generated : Petrel
  19 AUG 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4995.10 0.00 0.00 1* 1* 1000.0000 0.0000 /
  B2 OPEN ORAT 5455.20 0.00 2275.50 1* 1* 950.0000 2044.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 4023.0000 /
  /

DATES                                  -- Generated : Petrel
  20 AUG 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6211.20 0.00 0.00 1* 1* 1000.0000 0.0000 /
  B2 OPEN ORAT 5133.90 0.00 2903.20 1* 1* 950.0000 2043.0000 /
  /

DATES                                  -- Generated : Petrel
  21 AUG 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6211.20 0.00 0.00 1* 1* 1000.0000 0.0000 /
  B2 OPEN ORAT 5042.10 0.00 2967.30 1* 1* 950.0000 2041.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 4024.0000 /
  /

DATES                                  -- Generated : Petrel
  22 AUG 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6211.20 0.00 0.00 1* 1* 1000.0000 0.0000 /
  B2 OPEN ORAT 4654.60 0.00 3374.00 1* 1* 910.0000 2034.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 111.0000 /
  /

DATES                                  -- Generated : Petrel
  23 AUG 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6211.20 0.00 0.00 1* 1* 1000.0000 0.0000 /
  B2 OPEN ORAT 4654.60 0.00 3374.00 1* 1* 950.0000 2033.0000 /
  B4 OPEN ORAT 18.80 0.00 295.60 1* 1* 600.0000 1889.0000 /
  /

DATES                                  -- Generated : Petrel
  24 AUG 2014 /
  /

COMPDAT                                -- Generated : Petrel
  B1 28 59 9 9 OPEN 1* 4.1303E+000 0.70833 3097.77 1.00 1* Z 26.40 /
  B1 28 59 10 10 OPEN 1* 8.5357E+000 0.70833 6401.64 1.00 1* Z 26.40 /
  B1 28 59 11 11 OPEN 1* 9.8690E+000 0.70833 7401.81 1.00 1* Z 26.40 /
  B1 28 59 12 12 OPEN 1* 9.3671E+000 0.70833 7025.54 1.00 1* Z 26.41 /
  B1 28 59 13 13 OPEN 1* 4.6991E+000 0.70833 3524.51 1.00 1* Z 26.41 /
  B1 28 59 14 14 OPEN 1* 4.6205E+000 0.70833 3465.67 1.00 1* Z 26.41 /
  B1 28 59 15 15 OPEN 1* 5.9127E+000 0.70833 4435.03 1.00 1* Z 26.42 /
  B1 28 59 16 16 OPEN 1* 4.3030E+000 0.70833 3227.70 1.00 1* Z 26.42 /
  B1 28 59 17 17 OPEN 1* 3.8776E+000 0.70833 2908.71 1.00 1* Z 26.43 /
  B1 28 59 18 18 OPEN 1* 1.5957E+000 0.70833 1197.04 1.00 1* Z 26.43 /
  /

COMPLUMP                               -- Generated : Petrel
--'B1:H30 perforation': 2
--
  B1 28 59 9 9 2 /
  B1 28 59 10 10 2 /
  B1 28 59 11 11 2 /
  B1 28 59 12 12 2 /
  B1 28 59 13 13 2 /
  B1 28 59 14 14 2 /
  B1 28 59 15 15 2 /
  B1 28 59 16 16 2 /
  B1 28 59 17 17 2 /
  B1 28 59 18 18 2 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3752.60 0.00 0.00 1* 1* 900.0000 0.0000 /
  B2 OPEN ORAT 4654.60 0.00 3374.00 1* 1* 950.0000 2035.0000 /
  B4 OPEN ORAT 8494.90 0.00 2453.40 1* 1* 650.0000 1810.0000 /
  /

DATES                                  -- Generated : Petrel
  25 AUG 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6647.60 0.00 3168.10 1* 1* 900.0000 0.0000 /
  B2 OPEN ORAT 4606.10 0.00 3338.90 1* 1* 950.0000 2035.0000 /
  B4 OPEN ORAT 8406.40 0.00 2427.80 1* 1* 650.0000 1810.0000 /
  /

DATES                                  -- Generated : Petrel
  26 AUG 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6647.60 0.00 3168.10 1* 1* 900.0000 0.0000 /
  B2 OPEN ORAT 4606.10 0.00 3338.90 1* 1* 950.0000 2029.0000 /
  B4 OPEN ORAT 8406.40 0.00 2427.80 1* 1* 600.0000 1789.0000 /
  /

DATES                                  -- Generated : Petrel
  27 AUG 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 0.0000 /
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 2038.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1789.0000 /
  /

DATES                                  -- Generated : Petrel
  28 AUG 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 2029.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1788.0000 /
  /

DATES                                  -- Generated : Petrel
  29 AUG 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1998.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1790.0000 /
  /

DATES                                  -- Generated : Petrel
  30 AUG 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1979.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1789.0000 /
  /

DATES                                  -- Generated : Petrel
  31 AUG 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1980.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1788.0000 /
  /

DATES                                  -- Generated : Petrel
  1 SEP 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1978.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1787.0000 /
  /

DATES                                  -- Generated : Petrel
  2 SEP 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 2000.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1786.0000 /
  /

DATES                                  -- Generated : Petrel
  3 SEP 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1997.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1785.0000 /
  /

DATES                                  -- Generated : Petrel
  4 SEP 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 2029.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1828.0000 /
  /

DATES                                  -- Generated : Petrel
  5 SEP 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 2027.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1829.0000 /
  /

DATES                                  -- Generated : Petrel
  6 SEP 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 2025.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1809.0000 /
  /

DATES                                  -- Generated : Petrel
  7 SEP 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 2023.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1786.0000 /
  /

DATES                                  -- Generated : Petrel
  8 SEP 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 2022.0000 /
  /

DATES                                  -- Generated : Petrel
  9 SEP 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5778.00 0.00 6053.30 1* 1* 1000.0000 0.0000 /
  B2 OPEN ORAT 5456.70 0.00 5959.40 1* 1* 850.0000 2020.0000 /
  B4 OPEN ORAT 7306.70 0.00 4638.90 1* 1* 550.0000 1758.0000 /
  /

DATES                                  -- Generated : Petrel
  10 SEP 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5778.00 0.00 6053.30 1* 1* 970.0000 0.0000 /
  B2 OPEN ORAT 5456.70 0.00 5959.40 1* 1* 890.0000 2019.0000 /
  B4 OPEN ORAT 7306.70 0.00 4638.90 1* 1* 550.0000 1765.0000 /
  /

DATES                                  -- Generated : Petrel
  11 SEP 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5778.00 0.00 6053.30 1* 1* 1000.0000 0.0000 /
  B2 OPEN ORAT 5456.70 0.00 5959.40 1* 1* 890.0000 2018.0000 /
  B4 OPEN ORAT 7306.70 0.00 4638.90 1* 1* 600.0000 1768.0000 /
  /

DATES                                  -- Generated : Petrel
  12 SEP 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5778.00 0.00 6053.30 1* 1* 1000.0000 0.0000 /
  B2 OPEN ORAT 5456.70 0.00 5959.40 1* 1* 890.0000 2006.0000 /
  B4 OPEN ORAT 7306.70 0.00 4638.90 1* 1* 700.0000 1786.0000 /
  /

DATES                                  -- Generated : Petrel
  13 SEP 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5778.00 0.00 6053.30 1* 1* 1000.0000 0.0000 /
  B2 OPEN ORAT 5456.70 0.00 5959.40 1* 1* 900.0000 2005.0000 /
  B4 OPEN ORAT 7306.70 0.00 4638.90 1* 1* 650.0000 1813.0000 /
  /

DATES                                  -- Generated : Petrel
  14 SEP 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 0.0000 /
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 0.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 0.0000 /
  /

DATES                                  -- Generated : Petrel
  15 SEP 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5778.00 0.00 6053.30 1* 1* 1000.0000 0.0000 /
  B2 OPEN ORAT 5456.70 0.00 5959.40 1* 1* 900.0000 2003.0000 /
  B4 OPEN ORAT 7306.70 0.00 4638.90 1* 1* 650.0000 1817.0000 /
  /

DATES                                  -- Generated : Petrel
  16 SEP 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5778.00 0.00 6053.30 1* 1* 1000.0000 0.0000 /
  B2 OPEN ORAT 5456.70 0.00 5959.40 1* 1* 900.0000 2002.0000 /
  B4 OPEN ORAT 7306.70 0.00 4638.90 1* 1* 650.0000 1817.0000 /
  /

DATES                                  -- Generated : Petrel
  17 SEP 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5778.00 0.00 6053.30 1* 1* 1000.0000 0.0000 /
  B2 OPEN ORAT 5456.70 0.00 5959.40 1* 1* 900.0000 2002.0000 /
  B4 OPEN ORAT 7306.70 0.00 4638.90 1* 1* 650.0000 1817.0000 /
  /

DATES                                  -- Generated : Petrel
  18 SEP 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5778.00 0.00 6053.30 1* 1* 1000.0000 0.0000 /
  B2 OPEN ORAT 5723.70 0.00 4028.10 1* 1* 900.0000 1987.0000 /
  B4 OPEN ORAT 7306.70 0.00 4638.90 1* 1* 650.0000 1814.0000 /
  /

DATES                                  -- Generated : Petrel
  19 SEP 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4173.50 0.00 11646.70 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 5723.70 0.00 4028.10 1* 1* 850.0000 1986.0000 /
  B4 OPEN ORAT 7306.70 0.00 4638.90 1* 1* 650.0000 1814.0000 /
  /

DATES                                  -- Generated : Petrel
  20 SEP 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4173.50 0.00 11646.70 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 5723.70 0.00 4028.10 1* 1* 850.0000 1973.0000 /
  B4 OPEN ORAT 5846.50 0.00 5489.50 1* 1* 650.0000 1814.0000 /
  /

DATES                                  -- Generated : Petrel
  21 SEP 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5877.90 0.00 4883.70 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 7154.90 0.00 5687.40 1* 1* 850.0000 1960.0000 /
  B4 OPEN ORAT 5846.50 0.00 5489.50 1* 1* 650.0000 1814.0000 /
  /

DATES                                  -- Generated : Petrel
  22 SEP 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5877.90 0.00 4883.70 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 7154.90 0.00 5687.40 1* 1* 750.0000 1947.0000 /
  B4 OPEN ORAT 5846.50 0.00 5489.50 1* 1* 650.0000 1813.0000 /
  /

DATES                                  -- Generated : Petrel
  23 SEP 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5877.90 0.00 4883.70 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 6612.00 0.00 5984.10 1* 1* 750.0000 1948.0000 /
  B4 OPEN ORAT 5846.50 0.00 5489.50 1* 1* 650.0000 1813.0000 /
  /

DATES                                  -- Generated : Petrel
  24 SEP 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5877.90 0.00 4883.70 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 6612.00 0.00 5984.10 1* 1* 750.0000 1947.0000 /
  B4 OPEN ORAT 5846.50 0.00 5489.50 1* 1* 650.0000 1813.0000 /
  /

DATES                                  -- Generated : Petrel
  25 SEP 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5877.90 0.00 4883.70 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 6296.20 0.00 6033.60 1* 1* 750.0000 1946.0000 /
  B4 OPEN ORAT 5846.50 0.00 5489.50 1* 1* 650.0000 1812.0000 /
  /

DATES                                  -- Generated : Petrel
  26 SEP 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4689.20 0.00 10855.50 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 6296.20 0.00 6033.60 1* 1* 900.0000 1995.0000 /
  B4 OPEN ORAT 5846.50 0.00 5489.50 1* 1* 650.0000 1812.0000 /
  /

DATES                                  -- Generated : Petrel
  27 SEP 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4689.20 0.00 10855.50 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 6296.20 0.00 6033.60 1* 1* 730.0000 1995.0000 /
  B4 OPEN ORAT 6338.20 0.00 5934.60 1* 1* 650.0000 1811.0000 /
  /

DATES                                  -- Generated : Petrel
  28 SEP 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4689.20 0.00 10855.50 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 4338.40 0.00 2967.30 1* 1* 840.0000 1981.0000 /
  B4 OPEN ORAT 6338.20 0.00 5934.60 1* 1* 650.0000 1811.0000 /
  /

DATES                                  -- Generated : Petrel
  29 SEP 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4689.20 0.00 10855.50 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 6179.30 0.00 5242.30 1* 1* 790.0000 1951.0000 /
  B4 OPEN ORAT 6338.20 0.00 5934.60 1* 1* 650.0000 1811.0000 /
  /

DATES                                  -- Generated : Petrel
  30 SEP 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4689.20 0.00 10855.50 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 6179.30 0.00 5242.30 1* 1* 800.0000 1950.0000 /
  B4 OPEN ORAT 6338.20 0.00 5934.60 1* 1* 650.0000 1811.0000 /
  /

DATES                                  -- Generated : Petrel
  1 OCT 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3407.20 0.00 6012.40 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 4490.00 0.00 2903.50 1* 1* 800.0000 1949.0000 /
  B4 OPEN ORAT 4605.40 0.00 3287.00 1* 1* 650.0000 1811.0000 /
  /

DATES                                  -- Generated : Petrel
  2 OCT 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3211.20 0.00 5861.70 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 4490.00 0.00 2903.50 1* 1* 800.0000 1948.0000 /
  B4 OPEN ORAT 4605.40 0.00 3287.00 1* 1* 650.0000 1811.0000 /
  /

DATES                                  -- Generated : Petrel
  3 OCT 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3211.20 0.00 5861.70 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 4490.00 0.00 2903.50 1* 1* 800.0000 1947.0000 /
  B4 OPEN ORAT 4605.40 0.00 3287.00 1* 1* 650.0000 1810.0000 /
  /

DATES                                  -- Generated : Petrel
  4 OCT 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3211.20 0.00 5861.70 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 4490.00 0.00 2903.50 1* 1* 800.0000 1946.0000 /
  B4 OPEN ORAT 4605.40 0.00 3287.00 1* 1* 650.0000 1810.0000 /
  /

DATES                                  -- Generated : Petrel
  5 OCT 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3211.20 0.00 5861.70 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 4490.00 0.00 2903.50 1* 1* 800.0000 1944.0000 /
  B4 OPEN ORAT 4605.40 0.00 3287.00 1* 1* 650.0000 1810.0000 /
  /

DATES                                  -- Generated : Petrel
  6 OCT 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3211.20 0.00 5861.70 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 4235.10 0.00 2874.70 1* 1* 800.0000 1943.0000 /
  B4 OPEN ORAT 4605.40 0.00 3287.00 1* 1* 650.0000 1810.0000 /
  /

DATES                                  -- Generated : Petrel
  7 OCT 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3211.20 0.00 5861.70 1* 1* 1050.0000 0.0000 /
  B2 OPEN ORAT 4235.10 0.00 2874.70 1* 1* 800.0000 1943.0000 /
  B4 OPEN ORAT 4605.40 0.00 3287.00 1* 1* 650.0000 1810.0000 /
  /

DATES                                  -- Generated : Petrel
  8 OCT 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2689.40 0.00 4909.20 1* 1* 1000.0000 0.0000 /
  B2 OPEN ORAT 3546.90 0.00 2407.60 1* 1* 850.0000 1967.0000 /
  B4 OPEN ORAT 3857.10 0.00 2752.80 1* 1* 600.0000 1804.0000 /
  /

DATES                                  -- Generated : Petrel
  9 OCT 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4235.20 0.00 9073.40 1* 1* 1000.0000 0.0000 /
  B2 OPEN ORAT 4235.10 0.00 2874.70 1* 1* 850.0000 1931.0000 /
  B4 OPEN ORAT 4605.40 0.00 3287.00 1* 1* 600.0000 1808.0000 /
  /

DATES                                  -- Generated : Petrel
  10 OCT 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4235.20 0.00 9073.40 1* 1* 1000.0000 0.0000 /
  B2 OPEN ORAT 4235.10 0.00 2874.70 1* 1* 750.0000 1930.0000 /
  B4 OPEN ORAT 4605.40 0.00 3287.00 1* 1* 650.0000 1807.0000 /
  /

DATES                                  -- Generated : Petrel
  11 OCT 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4235.20 0.00 9073.40 1* 1* 1000.0000 0.0000 /
  B2 OPEN ORAT 5236.60 0.00 3028.10 1* 1* 750.0000 1929.0000 /
  B4 OPEN ORAT 4605.40 0.00 3287.00 1* 1* 650.0000 1807.0000 /
  /

DATES                                  -- Generated : Petrel
  12 OCT 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4235.20 0.00 9073.40 1* 1* 1000.0000 0.0000 /
  B2 OPEN ORAT 5236.60 0.00 3028.10 1* 1* 750.0000 1928.0000 /
  B4 OPEN ORAT 4605.40 0.00 3287.00 1* 1* 650.0000 1807.0000 /
  /

DATES                                  -- Generated : Petrel
  13 OCT 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4235.20 0.00 9073.40 1* 1* 1000.0000 0.0000 /
  B2 OPEN ORAT 5236.60 0.00 3028.10 1* 1* 750.0000 1927.0000 /
  B4 OPEN ORAT 4605.40 0.00 3287.00 1* 1* 650.0000 1807.0000 /
  /

DATES                                  -- Generated : Petrel
  14 OCT 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4235.20 0.00 9073.40 1* 1* 1000.0000 0.0000 /
  B2 OPEN ORAT 5236.60 0.00 3028.10 1* 1* 750.0000 1925.0000 /
  B4 OPEN ORAT 5809.50 0.00 3177.40 1* 1* 650.0000 1807.0000 /
  /

DATES                                  -- Generated : Petrel
  15 OCT 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3646.90 0.00 6272.60 1* 1* 1000.0000 0.0000 /
  B2 OPEN ORAT 5236.60 0.00 3028.10 1* 1* 750.0000 1925.0000 /
  B4 OPEN ORAT 5809.50 0.00 3177.40 1* 1* 650.0000 1807.0000 /
  /

DATES                                  -- Generated : Petrel
  16 OCT 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3646.90 0.00 6272.60 1* 1* 1000.0000 0.0000 /
  B2 OPEN ORAT 4712.20 0.00 3191.10 1* 1* 750.0000 1923.0000 /
  B4 OPEN ORAT 5809.50 0.00 3177.40 1* 1* 650.0000 1807.0000 /
  /

DATES                                  -- Generated : Petrel
  17 OCT 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3646.90 0.00 6272.60 1* 1* 1000.0000 0.0000 /
  B2 OPEN ORAT 4712.20 0.00 3191.10 1* 1* 750.0000 1921.0000 /
  B4 OPEN ORAT 4418.10 174.50 3793.70 1* 1* 650.0000 1806.0000 /
  /

DATES                                  -- Generated : Petrel
  18 OCT 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3583.70 0.00 6313.70 1* 1* 1000.0000 0.0000 /
  B2 OPEN ORAT 4712.20 0.00 3191.10 1* 1* 750.0000 1920.0000 /
  B4 OPEN ORAT 4418.10 174.50 3793.70 1* 1* 650.0000 1806.0000 /
  /

DATES                                  -- Generated : Petrel
  19 OCT 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3583.70 0.00 6313.70 1* 1* 1000.0000 0.0000 /
  B2 OPEN ORAT 4712.20 0.00 3191.10 1* 1* 750.0000 1918.0000 /
  B4 OPEN ORAT 4418.10 174.50 3793.70 1* 1* 650.0000 1834.0000 /
  /

DATES                                  -- Generated : Petrel
  20 OCT 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3583.70 0.00 6313.70 1* 1* 980.0000 0.0000 /
  B2 OPEN ORAT 4856.00 0.00 3287.00 1* 1* 750.0000 1910.0000 /
  B4 OPEN ORAT 4418.10 174.50 3793.70 1* 1* 650.0000 1818.0000 /
  /

DATES                                  -- Generated : Petrel
  21 OCT 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3509.00 0.00 6182.20 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4754.80 0.00 3218.50 1* 1* 750.0000 1918.0000 /
  B4 OPEN ORAT 5006.50 197.80 3119.20 1* 1* 650.0000 1818.0000 /
  /

DATES                                  -- Generated : Petrel
  22 OCT 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3457.30 0.00 6683.50 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4856.00 0.00 3287.00 1* 1* 750.0000 1917.0000 /
  B4 OPEN ORAT 5113.00 202.00 3185.60 1* 1* 650.0000 1818.0000 /
  /

DATES                                  -- Generated : Petrel
  23 OCT 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3457.30 0.00 6683.50 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4673.00 0.00 3560.90 1* 1* 730.0000 1898.0000 /
  B4 OPEN ORAT 5113.00 202.00 3185.60 1* 1* 650.0000 1818.0000 /
  /

DATES                                  -- Generated : Petrel
  24 OCT 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3457.30 0.00 6683.50 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4673.00 0.00 3560.90 1* 1* 700.0000 1895.0000 /
  B4 OPEN ORAT 4853.80 287.60 2930.90 1* 1* 650.0000 1818.0000 /
  /

DATES                                  -- Generated : Petrel
  25 OCT 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3457.30 0.00 6683.50 1* 1* 1000.0000 0.0000 /
  B2 OPEN ORAT 4798.60 0.00 4410.00 1* 1* 650.0000 1876.0000 /
  B4 OPEN ORAT 4853.80 287.60 2930.90 1* 1* 650.0000 1818.0000 /
  /

DATES                                  -- Generated : Petrel
  26 OCT 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3402.90 0.00 6286.30 1* 1* 1000.0000 0.0000 /
  B2 OPEN ORAT 4798.60 0.00 4410.00 1* 1* 650.0000 1876.0000 /
  B4 OPEN ORAT 4853.80 287.60 2930.90 1* 1* 650.0000 1818.0000 /
  /

DATES                                  -- Generated : Petrel
  27 OCT 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3402.90 0.00 6286.30 1* 1* 1000.0000 0.0000 /
  B2 OPEN ORAT 4798.60 0.00 4410.00 1* 1* 650.0000 1874.0000 /
  B4 OPEN ORAT 4853.80 287.60 2930.90 1* 1* 650.0000 1818.0000 /
  /

DATES                                  -- Generated : Petrel
  28 OCT 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3402.90 0.00 6286.30 1* 1* 1000.0000 0.0000 /
  B2 OPEN ORAT 4798.60 0.00 4410.00 1* 1* 650.0000 1873.0000 /
  B4 OPEN ORAT 4853.80 287.60 2930.90 1* 1* 650.0000 1818.0000 /
  /

DATES                                  -- Generated : Petrel
  29 OCT 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3402.90 0.00 6286.30 1* 1* 1000.0000 0.0000 /
  B2 OPEN ORAT 4845.10 0.00 4368.90 1* 1* 660.0000 1872.0000 /
  B4 OPEN ORAT 4853.80 287.60 2930.90 1* 1* 650.0000 1818.0000 /
  /

DATES                                  -- Generated : Petrel
  30 OCT 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3402.90 0.00 6286.30 1* 1* 1000.0000 0.0000 /
  B2 OPEN ORAT 4845.10 0.00 4368.90 1* 1* 660.0000 1872.0000 /
  B4 OPEN ORAT 4853.80 287.60 2930.90 1* 1* 650.0000 1818.0000 /
  /

DATES                                  -- Generated : Petrel
  31 OCT 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3549.60 0.00 5998.70 1* 1* 1000.0000 0.0000 /
  B2 OPEN ORAT 4845.10 0.00 4368.90 1* 1* 660.0000 1871.0000 /
  B4 OPEN ORAT 4853.80 287.60 2930.90 1* 1* 650.0000 1811.0000 /
  /

DATES                                  -- Generated : Petrel
  1 NOV 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3906.80 0.00 5792.30 1* 1* 1000.0000 0.0000 /
  B2 OPEN ORAT 5114.50 0.00 4192.20 1* 1* 660.0000 1874.0000 /
  B4 OPEN ORAT 5342.30 134.00 2830.00 1* 1* 660.0000 1818.0000 /
  /

DATES                                  -- Generated : Petrel
  2 NOV 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3906.80 0.00 5792.30 1* 1* 1000.0000 0.0000 /
  B2 OPEN ORAT 5114.50 0.00 4192.20 1* 1* 680.0000 1870.0000 /
  B4 OPEN ORAT 5342.30 134.00 2830.00 1* 1* 660.0000 1817.0000 /
  /

DATES                                  -- Generated : Petrel
  3 NOV 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3906.80 0.00 5792.30 1* 1* 1000.0000 0.0000 /
  B2 OPEN ORAT 5136.10 0.00 4231.80 1* 1* 720.0000 1882.0000 /
  B4 OPEN ORAT 5342.30 134.00 2830.00 1* 1* 660.0000 1817.0000 /
  /

DATES                                  -- Generated : Petrel
  4 NOV 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3906.80 0.00 5792.30 1* 1* 1000.0000 0.0000 /
  B2 OPEN ORAT 5136.10 0.00 4231.80 1* 1* 750.0000 1896.0000 /
  B4 OPEN ORAT 5342.30 134.00 2830.00 1* 1* 660.0000 1817.0000 /
  /

DATES                                  -- Generated : Petrel
  5 NOV 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3906.80 0.00 5792.30 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4654.10 0.00 3033.70 1* 1* 750.0000 1897.0000 /
  B4 OPEN ORAT 5342.30 134.00 2830.00 1* 1* 660.0000 1814.0000 /
  /

DATES                                  -- Generated : Petrel
  6 NOV 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3906.80 0.00 5792.30 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4865.90 0.00 2983.40 1* 1* 750.0000 1897.0000 /
  B4 OPEN ORAT 5342.30 134.00 2830.00 1* 1* 660.0000 1813.0000 /
  /

DATES                                  -- Generated : Petrel
  7 NOV 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4160.20 0.00 5558.20 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4865.90 0.00 2983.40 1* 1* 750.0000 1896.0000 /
  B4 OPEN ORAT 5342.30 134.00 2830.00 1* 1* 660.0000 1813.0000 /
  /

DATES                                  -- Generated : Petrel
  8 NOV 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4160.20 0.00 5558.20 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4865.90 0.00 2983.40 1* 1* 750.0000 1895.0000 /
  B4 OPEN ORAT 5431.00 90.80 2912.00 1* 1* 660.0000 1812.0000 /
  /

DATES                                  -- Generated : Petrel
  9 NOV 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4160.20 0.00 5558.20 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4865.90 0.00 2983.40 1* 1* 750.0000 1895.0000 /
  B4 OPEN ORAT 5431.00 90.80 2912.00 1* 1* 660.0000 1812.0000 /
  /

DATES                                  -- Generated : Petrel
  10 NOV 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4160.20 0.00 5558.20 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4927.50 0.00 3411.90 1* 1* 750.0000 1893.0000 /
  B4 OPEN ORAT 5431.00 90.80 2912.00 1* 1* 660.0000 1812.0000 /
  /

DATES                                  -- Generated : Petrel
  11 NOV 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4160.20 0.00 5558.20 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4927.50 0.00 3411.90 1* 1* 750.0000 1891.0000 /
  B4 OPEN ORAT 5028.20 84.10 3121.00 1* 1* 660.0000 1811.0000 /
  /

DATES                                  -- Generated : Petrel
  12 NOV 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3925.20 0.00 6179.80 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4927.50 0.00 3411.90 1* 1* 750.0000 1890.0000 /
  B4 OPEN ORAT 5028.20 84.10 3121.00 1* 1* 660.0000 1811.0000 /
  /

DATES                                  -- Generated : Petrel
  13 NOV 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3925.20 0.00 6179.80 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4714.10 0.00 3179.20 1* 1* 750.0000 1889.0000 /
  B4 OPEN ORAT 5028.20 84.10 3121.00 1* 1* 660.0000 1811.0000 /
  /

DATES                                  -- Generated : Petrel
  14 NOV 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3925.20 0.00 6179.80 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4714.10 0.00 3179.20 1* 1* 750.0000 1889.0000 /
  B4 OPEN ORAT 5379.10 179.90 3167.30 1* 1* 660.0000 1811.0000 /
  /

DATES                                  -- Generated : Petrel
  15 NOV 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3949.20 0.00 5726.20 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4714.10 0.00 3179.20 1* 1* 750.0000 1887.0000 /
  B4 OPEN ORAT 5379.10 179.90 3167.30 1* 1* 660.0000 1810.0000 /
  /

DATES                                  -- Generated : Petrel
  16 NOV 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3949.20 0.00 5726.20 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4714.10 0.00 3179.20 1* 1* 750.0000 1894.0000 /
  B4 OPEN ORAT 5379.10 179.90 3167.30 1* 1* 660.0000 1804.0000 /
  /

DATES                                  -- Generated : Petrel
  17 NOV 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3949.20 0.00 5726.20 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4488.70 0.00 2913.30 1* 1* 760.0000 1894.0000 /
  B4 OPEN ORAT 5379.10 179.90 3167.30 1* 1* 650.0000 1806.0000 /
  /

DATES                                  -- Generated : Petrel
  18 NOV 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3949.20 0.00 5726.20 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4488.70 0.00 2913.30 1* 1* 760.0000 1894.0000 /
  B4 OPEN ORAT 5191.20 347.20 3739.90 1* 1* 650.0000 1805.0000 /
  /

DATES                                  -- Generated : Petrel
  19 NOV 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3949.20 0.00 5726.20 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4488.70 0.00 2913.30 1* 1* 750.0000 1893.0000 /
  B4 OPEN ORAT 5191.20 347.20 3739.90 1* 1* 650.0000 1806.0000 /
  /

DATES                                  -- Generated : Petrel
  20 NOV 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3949.20 0.00 5726.20 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4488.70 0.00 2913.30 1* 1* 760.0000 1892.0000 /
  B4 OPEN ORAT 5191.20 347.20 3739.90 1* 1* 650.0000 1806.0000 /
  /

DATES                                  -- Generated : Petrel
  21 NOV 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4160.20 0.00 5699.70 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4488.70 0.00 2913.30 1* 1* 760.0000 1892.0000 /
  B4 OPEN ORAT 5191.20 347.20 3739.90 1* 1* 650.0000 1806.0000 /
  /

DATES                                  -- Generated : Petrel
  22 NOV 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4160.20 0.00 5699.70 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4049.90 0.00 3507.10 1* 1* 760.0000 1890.0000 /
  B4 OPEN ORAT 5191.20 347.20 3739.90 1* 1* 650.0000 1805.0000 /
  /

DATES                                  -- Generated : Petrel
  23 NOV 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4160.20 0.00 5699.70 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4049.90 0.00 3507.10 1* 1* 760.0000 1890.0000 /
  B4 OPEN ORAT 5191.20 347.20 3739.90 1* 1* 650.0000 1805.0000 /
  /

DATES                                  -- Generated : Petrel
  24 NOV 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4160.20 0.00 5699.70 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4049.90 0.00 3507.10 1* 1* 760.0000 1890.0000 /
  B4 OPEN ORAT 5848.20 312.90 3466.10 1* 1* 650.0000 1805.0000 /
  /

DATES                                  -- Generated : Petrel
  25 NOV 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4004.30 0.00 5117.90 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4049.90 0.00 3507.10 1* 1* 760.0000 1888.0000 /
  B4 OPEN ORAT 5848.20 312.90 3466.10 1* 1* 650.0000 1804.0000 /
  /

DATES                                  -- Generated : Petrel
  26 NOV 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4004.30 0.00 5117.90 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4524.70 0.00 2916.00 1* 1* 760.0000 1887.0000 /
  B4 OPEN ORAT 5848.20 312.90 3466.10 1* 1* 650.0000 1804.0000 /
  /

DATES                                  -- Generated : Petrel
  27 NOV 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4004.30 0.00 5117.90 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4615.80 0.00 3127.60 1* 1* 750.0000 1882.0000 /
  B4 OPEN ORAT 5848.20 312.90 3466.10 1* 1* 650.0000 1804.0000 /
  /

DATES                                  -- Generated : Petrel
  28 NOV 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4040.30 0.00 5117.90 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4615.80 0.00 3127.60 1* 1* 750.0000 1882.0000 /
  B4 OPEN ORAT 5848.20 312.90 3466.10 1* 1* 650.0000 1804.0000 /
  /

DATES                                  -- Generated : Petrel
  29 NOV 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4040.30 0.00 5117.90 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4615.80 0.00 3127.60 1* 1* 750.0000 1882.0000 /
  B4 OPEN ORAT 5344.70 357.40 3694.90 1* 1* 650.0000 1804.0000 /
  /

DATES                                  -- Generated : Petrel
  30 NOV 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3897.20 0.00 4936.60 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4452.30 0.00 3016.80 1* 1* 750.0000 1882.0000 /
  B4 OPEN ORAT 5155.40 344.80 3564.10 1* 1* 500.0000 1804.0000 /
  /

DATES                                  -- Generated : Petrel
  1 DEC 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3757.00 0.00 5142.90 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4441.50 0.00 3172.10 1* 1* 750.0000 1876.0000 /
  B4 OPEN ORAT 4970.00 234.70 3713.00 1* 1* 650.0000 1810.0000 /
  /

DATES                                  -- Generated : Petrel
  2 DEC 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3757.00 0.00 5142.90 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4441.50 0.00 3172.10 1* 1* 750.0000 1876.0000 /
  B4 OPEN ORAT 4970.00 234.70 3713.00 1* 1* 600.0000 1798.0000 /
  /

DATES                                  -- Generated : Petrel
  3 DEC 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3757.00 0.00 5142.90 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4441.50 0.00 3172.10 1* 1* 750.0000 1876.0000 /
  B4 OPEN ORAT 5315.60 251.00 4106.30 1* 1* 600.0000 1798.0000 /
  /

DATES                                  -- Generated : Petrel
  4 DEC 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3757.00 0.00 5142.90 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4441.50 0.00 3172.10 1* 1* 750.0000 1875.0000 /
  B4 OPEN ORAT 5315.60 251.00 4106.30 1* 1* 600.0000 1798.0000 /
  /

DATES                                  -- Generated : Petrel
  5 DEC 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3817.20 0.00 4797.40 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4441.50 0.00 3172.10 1* 1* 750.0000 1874.0000 /
  B4 OPEN ORAT 5315.60 251.00 4106.30 1* 1* 600.0000 1798.0000 /
  /

DATES                                  -- Generated : Petrel
  6 DEC 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3817.20 0.00 4797.40 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4446.00 0.00 3149.50 1* 1* 750.0000 1873.0000 /
  B4 OPEN ORAT 5315.60 251.00 4106.30 1* 1* 600.0000 1798.0000 /
  /

DATES                                  -- Generated : Petrel
  7 DEC 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3817.20 0.00 4797.40 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4446.00 0.00 3149.50 1* 1* 750.0000 1873.0000 /
  B4 OPEN ORAT 5315.60 251.00 4106.30 1* 1* 600.0000 1804.0000 /
  /

DATES                                  -- Generated : Petrel
  8 DEC 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3817.20 0.00 4797.40 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4446.00 0.00 3149.50 1* 1* 750.0000 1872.0000 /
  B4 OPEN ORAT 5233.10 247.20 3734.20 1* 1* 600.0000 1804.0000 /
  /

DATES                                  -- Generated : Petrel
  9 DEC 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3794.90 0.00 4903.70 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4446.00 0.00 3149.50 1* 1* 750.0000 1872.0000 /
  B4 OPEN ORAT 5233.10 247.20 3734.20 1* 1* 600.0000 1804.0000 /
  /

DATES                                  -- Generated : Petrel
  10 DEC 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3794.90 0.00 4903.70 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4522.60 0.00 3162.80 1* 1* 750.0000 1872.0000 /
  B4 OPEN ORAT 5233.10 247.20 3734.20 1* 1* 600.0000 1804.0000 /
  /

DATES                                  -- Generated : Petrel
  11 DEC 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3794.90 0.00 4903.70 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4522.60 0.00 3162.80 1* 1* 750.0000 1870.0000 /
  B4 OPEN ORAT 5262.10 186.40 3734.20 1* 1* 600.0000 1803.0000 /
  /

DATES                                  -- Generated : Petrel
  12 DEC 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3841.80 0.00 4785.40 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4522.60 0.00 3162.80 1* 1* 750.0000 1870.0000 /
  B4 OPEN ORAT 5262.10 186.40 3734.20 1* 1* 600.0000 1803.0000 /
  /

DATES                                  -- Generated : Petrel
  13 DEC 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 960.40 0.00 1196.40 1* 1* 0.0000 0.0000 /
  B2 OPEN ORAT 1130.60 0.00 790.70 1* 1* 0.0000 1908.0000 /
  B4 OPEN ORAT 1315.50 46.60 933.60 1* 1* 0.0000 1875.0000 /
  /

DATES                                  -- Generated : Petrel
  14 DEC 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 0.0000 /
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1895.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1805.0000 /
  /

DATES                                  -- Generated : Petrel
  15 DEC 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3841.80 0.00 4785.40 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 2920.80 0.00 2042.60 1* 1* 0.0000 1909.0000 /
  B4 OPEN ORAT 5262.10 186.40 3734.20 1* 1* 600.0000 1805.0000 /
  /

DATES                                  -- Generated : Petrel
  16 DEC 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3841.80 0.00 4785.40 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 2732.40 0.00 1910.90 1* 1* 750.0000 1912.0000 /
  B4 OPEN ORAT 5262.10 186.40 3734.20 1* 1* 600.0000 1805.0000 /
  /

DATES                                  -- Generated : Petrel
  17 DEC 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3737.00 0.00 4757.50 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4522.60 0.00 3162.80 1* 1* 750.0000 1891.0000 /
  B4 OPEN ORAT 5681.30 134.20 4013.30 1* 1* 600.0000 1803.0000 /
  /

DATES                                  -- Generated : Petrel
  18 DEC 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3737.00 0.00 4757.50 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4031.30 0.00 2830.60 1* 1* 750.0000 1886.0000 /
  B4 OPEN ORAT 5681.30 134.20 4013.30 1* 1* 600.0000 1814.0000 /
  /

DATES                                  -- Generated : Petrel
  19 DEC 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3737.00 0.00 4757.50 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4031.30 0.00 2830.60 1* 1* 750.0000 1886.0000 /
  B4 OPEN ORAT 5681.30 134.20 4013.30 1* 1* 600.0000 1814.0000 /
  /

DATES                                  -- Generated : Petrel
  20 DEC 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3737.00 0.00 4757.50 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4031.30 0.00 2830.60 1* 1* 750.0000 1886.0000 /
  B4 OPEN ORAT 5694.60 26.90 3853.80 1* 1* 600.0000 1814.0000 /
  /

DATES                                  -- Generated : Petrel
  21 DEC 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3737.00 0.00 4757.50 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4031.30 0.00 2830.60 1* 1* 750.0000 1886.0000 /
  B4 OPEN ORAT 5694.60 26.90 3853.80 1* 1* 600.0000 1814.0000 /
  /

DATES                                  -- Generated : Petrel
  22 DEC 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3732.50 0.00 4943.50 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4031.30 0.00 2830.60 1* 1* 750.0000 1886.0000 /
  B4 OPEN ORAT 5694.60 26.90 3853.80 1* 1* 600.0000 1814.0000 /
  /

DATES                                  -- Generated : Petrel
  23 DEC 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2799.40 0.00 3707.70 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 3001.70 0.00 2122.90 1* 1* 750.0000 1886.0000 /
  B4 OPEN ORAT 4271.00 20.20 2890.40 1* 1* 600.0000 1814.0000 /
  /

DATES                                  -- Generated : Petrel
  24 DEC 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 0.0000 /
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1908.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1871.0000 /
  /

DATES                                  -- Generated : Petrel
  25 DEC 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1910.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1874.0000 /
  /

DATES                                  -- Generated : Petrel
  26 DEC 2014 /
  /

DATES                                  -- Generated : Petrel
  27 DEC 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1911.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1876.0000 /
  /

DATES                                  -- Generated : Petrel
  28 DEC 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1912.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1877.0000 /
  /

DATES                                  -- Generated : Petrel
  29 DEC 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1878.0000 /
  /

DATES                                  -- Generated : Petrel
  30 DEC 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1913.0000 /
  /

DATES                                  -- Generated : Petrel
  31 DEC 2014 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 933.10 0.00 1235.90 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 1000.60 0.00 707.60 1* 1* 750.0000 1867.0000 /
  B4 OPEN ORAT 1423.70 6.70 963.50 1* 1* 600.0000 1797.0000 /
  /

DATES                                  -- Generated : Petrel
  1 JAN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3986.60 0.00 5100.00 1* 1* 910.0000 0.0000 /
  B2 OPEN ORAT 4274.80 0.00 2920.20 1* 1* 720.0000 1880.0000 /
  B4 OPEN ORAT 6082.40 26.50 3975.80 1* 1* 550.0000 1816.0000 /
  /

DATES                                  -- Generated : Petrel
  2 JAN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3986.60 0.00 5100.00 1* 1* 850.0000 0.0000 /
  B2 OPEN ORAT 4274.80 0.00 2920.20 1* 1* 700.0000 1861.0000 /
  B4 OPEN ORAT 6082.40 26.50 3975.80 1* 1* 550.0000 1796.0000 /
  /

DATES                                  -- Generated : Petrel
  3 JAN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3986.60 0.00 5100.00 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4274.80 0.00 2920.20 1* 1* 750.0000 1873.0000 /
  B4 OPEN ORAT 5208.30 113.40 4054.00 1* 1* 650.0000 1820.0000 /
  /

DATES                                  -- Generated : Petrel
  4 JAN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3198.40 0.00 4661.30 1* 1* 1050.0000 0.0000 /
  B2 OPEN ORAT 4274.80 0.00 2920.20 1* 1* 850.0000 1874.0000 /
  B4 OPEN ORAT 5441.70 88.90 3091.60 1* 1* 700.0000 1835.0000 /
  /

DATES                                  -- Generated : Petrel
  5 JAN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3198.40 0.00 4661.30 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 4653.50 0.00 3092.90 1* 1* 750.0000 1871.0000 /
  B4 OPEN ORAT 5441.70 88.90 3091.60 1* 1* 600.0000 1812.0000 /
  /

DATES                                  -- Generated : Petrel
  6 JAN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3198.40 0.00 4661.30 1* 1* 1000.0000 0.0000 /
  B2 OPEN ORAT 4653.50 0.00 3092.90 1* 1* 750.0000 1871.0000 /
  B4 OPEN ORAT 5868.00 95.80 3216.30 1* 1* 600.0000 1812.0000 /
  /

DATES                                  -- Generated : Petrel
  7 JAN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3291.20 0.00 4524.20 1* 1* 1050.0000 0.0000 /
  B2 OPEN ORAT 4653.50 0.00 3092.90 1* 1* 750.0000 1873.0000 /
  B4 OPEN ORAT 5868.00 95.80 3216.30 1* 1* 600.0000 1818.0000 /
  /

DATES                                  -- Generated : Petrel
  8 JAN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3291.20 0.00 4524.20 1* 1* 1080.0000 0.0000 /
  B2 OPEN ORAT 4634.40 0.00 3235.50 1* 1* 750.0000 1873.0000 /
  B4 OPEN ORAT 5868.00 95.80 3216.30 1* 1* 600.0000 1818.0000 /
  /

DATES                                  -- Generated : Petrel
  9 JAN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3291.20 0.00 4524.20 1* 1* 1080.0000 0.0000 /
  B2 OPEN ORAT 4634.40 0.00 3235.50 1* 1* 750.0000 1874.0000 /
  B4 OPEN ORAT 5275.00 172.30 2998.30 1* 1* 600.0000 1818.0000 /
  /

DATES                                  -- Generated : Petrel
  10 JAN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3022.10 0.00 4442.00 1* 1* 1070.0000 0.0000 /
  B2 OPEN ORAT 4634.40 0.00 3235.50 1* 1* 750.0000 1870.0000 /
  B4 OPEN ORAT 5275.00 172.30 2998.30 1* 1* 600.0000 1819.0000 /
  /

DATES                                  -- Generated : Petrel
  11 JAN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3022.10 0.00 4442.00 1* 1* 1070.0000 0.0000 /
  B2 OPEN ORAT 4634.40 0.00 3235.50 1* 1* 750.0000 1871.0000 /
  B4 OPEN ORAT 5275.00 172.30 2998.30 1* 1* 600.0000 1820.0000 /
  /

DATES                                  -- Generated : Petrel
  12 JAN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3022.10 0.00 4442.00 1* 1* 1070.0000 0.0000 /
  B2 OPEN ORAT 4724.90 0.00 3454.90 1* 1* 750.0000 1871.0000 /
  B4 OPEN ORAT 5275.00 172.30 2998.30 1* 1* 600.0000 1819.0000 /
  /

DATES                                  -- Generated : Petrel
  13 JAN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3022.10 0.00 4442.00 1* 1* 1110.0000 0.0000 /
  B2 OPEN ORAT 4724.90 0.00 3454.90 1* 1* 750.0000 1871.0000 /
  B4 OPEN ORAT 4757.70 215.80 2787.20 1* 1* 620.0000 1821.0000 /
  /

DATES                                  -- Generated : Petrel
  14 JAN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2736.30 0.00 4236.30 1* 1* 1000.0000 0.0000 /
  B2 OPEN ORAT 4724.90 0.00 3454.90 1* 1* 620.0000 1871.0000 /
  B4 OPEN ORAT 4757.70 215.80 2787.20 1* 1* 650.0000 1821.0000 /
  /

DATES                                  -- Generated : Petrel
  15 JAN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2736.30 0.00 4236.30 1* 1* 1000.0000 0.0000 /
  B2 OPEN ORAT 4979.70 0.00 4601.00 1* 1* 700.0000 1842.0000 /
  B4 OPEN ORAT 4757.70 215.80 2787.20 1* 1* 650.0000 1817.0000 /
  /

DATES                                  -- Generated : Petrel
  16 JAN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2736.30 0.00 4236.30 1* 1* 1000.0000 0.0000 /
  B2 OPEN ORAT 4979.70 0.00 4601.00 1* 1* 700.0000 1842.0000 /
  B4 OPEN ORAT 4931.40 223.70 2865.40 1* 1* 650.0000 1818.0000 /
  /

DATES                                  -- Generated : Petrel
  17 JAN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2736.30 0.00 4236.30 1* 1* 1000.0000 0.0000 /
  B2 OPEN ORAT 4979.70 0.00 4601.00 1* 1* 700.0000 1842.0000 /
  B4 OPEN ORAT 4931.40 223.70 2865.40 1* 1* 650.0000 1817.0000 /
  /

DATES                                  -- Generated : Petrel
  18 JAN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2736.30 0.00 4236.30 1* 1* 1050.0000 0.0000 /
  B2 OPEN ORAT 4979.70 0.00 4601.00 1* 1* 700.0000 1842.0000 /
  B4 OPEN ORAT 4931.40 223.70 2865.40 1* 1* 640.0000 1817.0000 /
  /

DATES                                  -- Generated : Petrel
  19 JAN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3022.10 0.00 5388.00 1* 1* 1050.0000 0.0000 /
  B2 OPEN ORAT 4979.70 0.00 4601.00 1* 1* 700.0000 1842.0000 /
  B4 OPEN ORAT 4931.40 223.70 2865.40 1* 1* 640.0000 1816.0000 /
  /

DATES                                  -- Generated : Petrel
  20 JAN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3022.10 0.00 5388.00 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 4734.40 0.00 4729.90 1* 1* 700.0000 1842.0000 /
  B4 OPEN ORAT 4931.40 223.70 2865.40 1* 1* 600.0000 1816.0000 /
  /

DATES                                  -- Generated : Petrel
  21 JAN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3022.10 0.00 5388.00 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 4734.40 0.00 4729.90 1* 1* 750.0000 1842.0000 /
  B4 OPEN ORAT 5304.40 434.60 3701.60 1* 1* 600.0000 1802.0000 /
  /

DATES                                  -- Generated : Petrel
  22 JAN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3022.10 0.00 5388.00 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 4734.40 0.00 4729.90 1* 1* 650.0000 1825.0000 /
  B4 OPEN ORAT 5304.40 434.60 3701.60 1* 1* 600.0000 1801.0000 /
  /

DATES                                  -- Generated : Petrel
  23 JAN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3022.10 0.00 5388.00 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 4734.40 0.00 4729.90 1* 1* 650.0000 1836.0000 /
  B4 OPEN ORAT 5304.40 434.60 3701.60 1* 1* 600.0000 1801.0000 /
  /

DATES                                  -- Generated : Petrel
  24 JAN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3022.10 0.00 5388.00 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 4734.40 0.00 4729.90 1* 1* 640.0000 1813.0000 /
  B4 OPEN ORAT 5304.40 434.60 3701.60 1* 1* 600.0000 1800.0000 /
  /

DATES                                  -- Generated : Petrel
  25 JAN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3022.10 0.00 5388.00 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 5163.10 0.00 5004.10 1* 1* 640.0000 1813.0000 /
  B4 OPEN ORAT 5304.40 434.60 3701.60 1* 1* 600.0000 1800.0000 /
  /

DATES                                  -- Generated : Petrel
  26 JAN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 0.0000 /
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 0.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 0.0000 /
  /

DATES                                  -- Generated : Petrel
  27 JAN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3022.10 0.00 5388.00 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 5163.10 0.00 5004.10 1* 1* 650.0000 1827.0000 /
  B4 OPEN ORAT 5611.30 678.70 3441.20 1* 1* 600.0000 1804.0000 /
  /

DATES                                  -- Generated : Petrel
  28 JAN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3022.10 0.00 5388.00 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 5163.10 0.00 5004.10 1* 1* 700.0000 1827.0000 /
  B4 OPEN ORAT 5611.30 678.70 3441.20 1* 1* 600.0000 1803.0000 /
  /

DATES                                  -- Generated : Petrel
  29 JAN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3022.10 0.00 5388.00 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 5163.10 0.00 5004.10 1* 1* 700.0000 1827.0000 /
  B4 OPEN ORAT 5611.30 678.70 3441.20 1* 1* 600.0000 1804.0000 /
  /

DATES                                  -- Generated : Petrel
  30 JAN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3022.10 0.00 5388.00 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 5163.10 0.00 5004.10 1* 1* 700.0000 1827.0000 /
  B4 OPEN ORAT 5611.30 678.70 3441.20 1* 1* 600.0000 1803.0000 /
  /

DATES                                  -- Generated : Petrel
  31 JAN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3022.10 0.00 5388.00 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 5163.10 0.00 5004.10 1* 1* 650.0000 1812.0000 /
  B4 OPEN ORAT 5611.30 678.70 3441.20 1* 1* 600.0000 1803.0000 /
  /

DATES                                  -- Generated : Petrel
  1 FEB 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2982.20 0.00 5715.30 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 5095.00 0.00 5308.10 1* 1* 650.0000 1812.0000 /
  B4 OPEN ORAT 5537.30 2096.40 3650.20 1* 1* 600.0000 1803.0000 /
  /

DATES                                  -- Generated : Petrel
  2 FEB 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2982.20 0.00 5715.30 1* 1* 1150.0000 0.0000 /
  B2 OPEN ORAT 5095.00 0.00 5308.10 1* 1* 650.0000 1812.0000 /
  B4 OPEN ORAT 5537.30 2096.40 3650.20 1* 1* 600.0000 1802.0000 /
  /

DATES                                  -- Generated : Petrel
  3 FEB 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2982.20 0.00 5715.30 1* 1* 1150.0000 0.0000 /
  B2 OPEN ORAT 5095.00 0.00 5308.10 1* 1* 650.0000 1812.0000 /
  B4 OPEN ORAT 5597.60 1658.50 3664.80 1* 1* 600.0000 1802.0000 /
  /

DATES                                  -- Generated : Petrel
  4 FEB 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2982.20 0.00 5715.30 1* 1* 1170.0000 0.0000 /
  B2 OPEN ORAT 5095.00 0.00 5308.10 1* 1* 650.0000 1807.0000 /
  B4 OPEN ORAT 5597.60 1658.50 3664.80 1* 1* 600.0000 1802.0000 /
  /

DATES                                  -- Generated : Petrel
  5 FEB 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2982.20 0.00 5715.30 1* 1* 1150.0000 0.0000 /
  B2 OPEN ORAT 5095.00 0.00 5308.10 1* 1* 650.0000 1807.0000 /
  B4 OPEN ORAT 5597.60 1658.50 3664.80 1* 1* 600.0000 1801.0000 /
  /

DATES                                  -- Generated : Petrel
  6 FEB 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2712.00 0.00 5322.60 1* 1* 1150.0000 0.0000 /
  B2 OPEN ORAT 5095.00 0.00 5308.10 1* 1* 600.0000 1802.0000 /
  B4 OPEN ORAT 5597.60 1658.50 3664.80 1* 1* 560.0000 1801.0000 /
  /

DATES                                  -- Generated : Petrel
  7 FEB 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2712.00 0.00 5322.60 1* 1* 1130.0000 0.0000 /
  B2 OPEN ORAT 5095.00 0.00 5308.10 1* 1* 600.0000 1802.0000 /
  B4 OPEN ORAT 5821.20 1961.70 3810.20 1* 1* 560.0000 1801.0000 /
  /

DATES                                  -- Generated : Petrel
  8 FEB 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2712.00 0.00 5322.60 1* 1* 1150.0000 0.0000 /
  B2 OPEN ORAT 5095.00 0.00 5308.10 1* 1* 550.0000 1779.0000 /
  B4 OPEN ORAT 5821.20 1961.70 3810.20 1* 1* 560.0000 1800.0000 /
  /

DATES                                  -- Generated : Petrel
  9 FEB 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2610.90 0.00 5540.80 1* 1* 1150.0000 0.0000 /
  B2 OPEN ORAT 5095.00 0.00 5308.10 1* 1* 550.0000 1779.0000 /
  B4 OPEN ORAT 5821.20 1961.70 3810.20 1* 1* 560.0000 1799.0000 /
  /

DATES                                  -- Generated : Petrel
  10 FEB 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2610.90 0.00 5540.80 1* 1* 1150.0000 0.0000 /
  B2 OPEN ORAT 5095.00 0.00 5308.10 1* 1* 550.0000 1791.0000 /
  B4 OPEN ORAT 5965.20 1767.40 3749.10 1* 1* 560.0000 1799.0000 /
  /

DATES                                  -- Generated : Petrel
  11 FEB 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2610.90 0.00 5540.80 1* 1* 1150.0000 0.0000 /
  B2 OPEN ORAT 5095.00 0.00 5308.10 1* 1* 550.0000 1786.0000 /
  B4 OPEN ORAT 5965.20 1767.40 3749.10 1* 1* 560.0000 1796.0000 /
  /

DATES                                  -- Generated : Petrel
  12 FEB 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2876.50 0.00 5788.00 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 5095.00 0.00 5308.10 1* 1* 550.0000 1786.0000 /
  B4 OPEN ORAT 5965.20 1767.40 3749.10 1* 1* 560.0000 1798.0000 /
  /

DATES                                  -- Generated : Petrel
  13 FEB 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2798.90 0.00 5613.50 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 5095.00 0.00 5308.10 1* 1* 550.0000 1794.0000 /
  B4 OPEN ORAT 5965.20 1767.40 3749.10 1* 1* 560.0000 1798.0000 /
  /

DATES                                  -- Generated : Petrel
  14 FEB 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2798.90 0.00 5613.50 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 5095.00 0.00 5308.10 1* 1* 570.0000 1788.0000 /
  B4 OPEN ORAT 5999.40 1538.60 3722.90 1* 1* 560.0000 1798.0000 /
  /

DATES                                  -- Generated : Petrel
  15 FEB 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2798.90 0.00 5613.50 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 5095.00 0.00 5308.10 1* 1* 570.0000 1788.0000 /
  B4 OPEN ORAT 5999.40 1538.60 3722.90 1* 1* 560.0000 1797.0000 /
  /

DATES                                  -- Generated : Petrel
  16 FEB 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2749.60 0.00 6049.70 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 5095.00 0.00 5308.10 1* 1* 570.0000 1787.0000 /
  B4 OPEN ORAT 5999.40 1538.60 3722.90 1* 1* 560.0000 1797.0000 /
  /

DATES                                  -- Generated : Petrel
  17 FEB 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2749.60 0.00 6049.70 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 5095.00 0.00 5308.10 1* 1* 570.0000 1794.0000 /
  B4 OPEN ORAT 5951.60 2005.60 3736.00 1* 1* 560.0000 1798.0000 /
  /

DATES                                  -- Generated : Petrel
  18 FEB 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2770.70 0.00 6064.30 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 5095.00 0.00 5308.10 1* 1* 610.0000 1793.0000 /
  B4 OPEN ORAT 5951.60 2005.60 3736.00 1* 1* 560.0000 1792.0000 /
  /

DATES                                  -- Generated : Petrel
  19 FEB 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2770.70 0.00 6064.30 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 5095.00 0.00 5308.10 1* 1* 600.0000 1793.0000 /
  B4 OPEN ORAT 6278.70 891.40 3692.40 1* 1* 560.0000 1792.0000 /
  /

DATES                                  -- Generated : Petrel
  20 FEB 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2660.30 0.00 6078.80 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 5095.00 0.00 5308.10 1* 1* 610.0000 1793.0000 /
  B4 OPEN ORAT 6278.70 891.40 3692.40 1* 1* 560.0000 1792.0000 /
  /

DATES                                  -- Generated : Petrel
  21 FEB 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2660.30 0.00 6078.80 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 5095.00 0.00 5308.10 1* 1* 610.0000 1793.0000 /
  B4 OPEN ORAT 6226.80 884.00 3712.70 1* 1* 560.0000 1792.0000 /
  /

DATES                                  -- Generated : Petrel
  22 FEB 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2660.30 0.00 6078.80 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 5095.00 0.00 5308.10 1* 1* 560.0000 1780.0000 /
  B4 OPEN ORAT 6226.80 884.00 3712.70 1* 1* 550.0000 1791.0000 /
  /

DATES                                  -- Generated : Petrel
  23 FEB 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2657.90 0.00 6022.10 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 5095.00 0.00 5308.10 1* 1* 550.0000 1779.0000 /
  B4 OPEN ORAT 6226.80 884.00 3712.70 1* 1* 560.0000 1791.0000 /
  /

DATES                                  -- Generated : Petrel
  24 FEB 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2657.90 0.00 6022.10 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 5095.00 0.00 5308.10 1* 1* 550.0000 1779.0000 /
  B4 OPEN ORAT 6226.80 884.00 3689.50 1* 1* 560.0000 1792.0000 /
  /

DATES                                  -- Generated : Petrel
  25 FEB 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2657.90 0.00 6022.10 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 5095.00 0.00 5308.10 1* 1* 550.0000 1778.0000 /
  B4 OPEN ORAT 6226.80 884.00 3689.50 1* 1* 560.0000 1791.0000 /
  /

DATES                                  -- Generated : Petrel
  26 FEB 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2657.90 0.00 6022.10 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 5095.00 0.00 5308.10 1* 1* 550.0000 1778.0000 /
  B4 OPEN ORAT 6226.80 884.00 3689.50 1* 1* 560.0000 1791.0000 /
  /

DATES                                  -- Generated : Petrel
  27 FEB 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2657.90 0.00 6022.10 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 5095.00 0.00 5308.10 1* 1* 550.0000 1778.0000 /
  B4 OPEN ORAT 5915.80 2239.70 3759.30 1* 1* 560.0000 1792.0000 /
  /

DATES                                  -- Generated : Petrel
  28 FEB 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2660.30 0.00 6123.90 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 5095.00 0.00 5308.10 1* 1* 550.0000 1777.0000 /
  B4 OPEN ORAT 5915.80 2239.70 3759.30 1* 1* 560.0000 1791.0000 /
  /

DATES                                  -- Generated : Petrel
  1 MAR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2904.10 0.00 5106.00 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 5561.90 0.00 4425.80 1* 1* 550.0000 1777.0000 /
  B4 OPEN ORAT 6458.00 526.40 3134.40 1* 1* 560.0000 1791.0000 /
  /

DATES                                  -- Generated : Petrel
  2 MAR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2904.10 0.00 5106.00 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 5561.90 0.00 4425.80 1* 1* 550.0000 1776.0000 /
  B4 OPEN ORAT 6473.70 469.70 3159.90 1* 1* 560.0000 1791.0000 /
  /

DATES                                  -- Generated : Petrel
  3 MAR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2904.10 0.00 5106.00 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 5377.20 0.00 6523.50 1* 1* 550.0000 1776.0000 /
  B4 OPEN ORAT 6473.70 469.70 3159.90 1* 1* 560.0000 1791.0000 /
  /

DATES                                  -- Generated : Petrel
  4 MAR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2904.10 0.00 5226.00 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 5377.20 0.00 6523.50 1* 1* 550.0000 1775.0000 /
  B4 OPEN ORAT 6473.70 469.70 3159.90 1* 1* 560.0000 1797.0000 /
  /

DATES                                  -- Generated : Petrel
  5 MAR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2904.10 0.00 5226.00 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 5377.20 0.00 6523.50 1* 1* 550.0000 1775.0000 /
  B4 OPEN ORAT 6473.70 469.70 3159.90 1* 1* 560.0000 1796.0000 /
  /

DATES                                  -- Generated : Petrel
  6 MAR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2904.10 0.00 5226.00 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 5377.20 0.00 6523.50 1* 1* 550.0000 1775.0000 /
  B4 OPEN ORAT 6052.90 548.80 3032.60 1* 1* 560.0000 1796.0000 /
  /

DATES                                  -- Generated : Petrel
  7 MAR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2899.00 0.00 5189.70 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 5377.20 0.00 6523.50 1* 1* 550.0000 1774.0000 /
  B4 OPEN ORAT 6052.90 548.80 3032.60 1* 1* 560.0000 1795.0000 /
  /

DATES                                  -- Generated : Petrel
  8 MAR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2899.00 0.00 5189.70 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 5377.20 0.00 6523.50 1* 1* 550.0000 1774.0000 /
  B4 OPEN ORAT 6052.90 548.80 3032.60 1* 1* 560.0000 1795.0000 /
  /

DATES                                  -- Generated : Petrel
  9 MAR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2899.00 0.00 5189.70 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 5377.20 0.00 6523.50 1* 1* 550.0000 1773.0000 /
  B4 OPEN ORAT 6196.60 679.20 3077.40 1* 1* 560.0000 1795.0000 /
  /

DATES                                  -- Generated : Petrel
  10 MAR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2947.70 0.00 5166.60 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 5377.20 0.00 6523.50 1* 1* 550.0000 1769.0000 /
  B4 OPEN ORAT 6196.60 679.20 3077.40 1* 1* 550.0000 1796.0000 /
  /

DATES                                  -- Generated : Petrel
  11 MAR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2947.70 0.00 5166.60 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 4022.60 0.00 6741.70 1* 1* 550.0000 1769.0000 /
  B4 OPEN ORAT 6196.60 679.20 3077.40 1* 1* 550.0000 1791.0000 /
  /

DATES                                  -- Generated : Petrel
  12 MAR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2947.70 0.00 5166.60 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 4022.60 0.00 6741.70 1* 1* 550.0000 1769.0000 /
  B4 OPEN ORAT 6196.60 679.20 3077.40 1* 1* 550.0000 1790.0000 /
  /

DATES                                  -- Generated : Petrel
  13 MAR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2947.70 0.00 5166.60 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 4022.60 0.00 6741.70 1* 1* 550.0000 1768.0000 /
  B4 OPEN ORAT 6145.20 614.70 3144.10 1* 1* 560.0000 1789.0000 /
  /

DATES                                  -- Generated : Petrel
  14 MAR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 0.0000 /
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 0.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 0.0000 /
  /

DATES                                  -- Generated : Petrel
  15 MAR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2875.90 0.00 5175.10 1* 1* 1120.0000 0.0000 /
  B2 OPEN ORAT 4022.60 0.00 6741.70 1* 1* 550.0000 1767.0000 /
  B4 OPEN ORAT 6145.20 614.70 3144.10 1* 1* 540.0000 1789.0000 /
  /

DATES                                  -- Generated : Petrel
  16 MAR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2875.90 0.00 5175.10 1* 1* 1120.0000 0.0000 /
  B2 OPEN ORAT 5130.90 0.00 6725.90 1* 1* 550.0000 1767.0000 /
  B4 OPEN ORAT 6145.20 614.70 3144.10 1* 1* 540.0000 1789.0000 /
  /

DATES                                  -- Generated : Petrel
  17 MAR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2875.90 0.00 5175.10 1* 1* 1120.0000 0.0000 /
  B2 OPEN ORAT 5130.90 0.00 6725.90 1* 1* 550.0000 1766.0000 /
  B4 OPEN ORAT 5958.50 832.50 3004.70 1* 1* 540.0000 1789.0000 /
  /

DATES                                  -- Generated : Petrel
  18 MAR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2909.20 0.00 5161.80 1* 1* 1120.0000 0.0000 /
  B2 OPEN ORAT 5130.90 0.00 6725.90 1* 1* 550.0000 1766.0000 /
  B4 OPEN ORAT 5958.50 832.50 3004.70 1* 1* 540.0000 1789.0000 /
  /

DATES                                  -- Generated : Petrel
  19 MAR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2909.20 0.00 5161.80 1* 1* 1120.0000 0.0000 /
  B2 OPEN ORAT 5130.90 0.00 6725.90 1* 1* 550.0000 1765.0000 /
  B4 OPEN ORAT 5958.50 832.50 3004.70 1* 1* 540.0000 1793.0000 /
  /

DATES                                  -- Generated : Petrel
  20 MAR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2909.20 0.00 5161.80 1* 1* 1120.0000 0.0000 /
  B2 OPEN ORAT 5104.40 0.00 6790.20 1* 1* 550.0000 1765.0000 /
  B4 OPEN ORAT 5958.50 832.50 3004.70 1* 1* 540.0000 1793.0000 /
  /

DATES                                  -- Generated : Petrel
  21 MAR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2909.20 0.00 5161.80 1* 1* 1120.0000 0.0000 /
  B2 OPEN ORAT 5104.40 0.00 6790.20 1* 1* 550.0000 1764.0000 /
  B4 OPEN ORAT 5971.50 834.30 2980.40 1* 1* 540.0000 1794.0000 /
  /

DATES                                  -- Generated : Petrel
  22 MAR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2909.20 0.00 5161.80 1* 1* 1120.0000 0.0000 /
  B2 OPEN ORAT 5104.40 0.00 6790.20 1* 1* 550.0000 1764.0000 /
  B4 OPEN ORAT 5971.50 834.30 2980.40 1* 1* 540.0000 1794.0000 /
  /

DATES                                  -- Generated : Petrel
  23 MAR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2952.80 0.00 4971.40 1* 1* 1120.0000 0.0000 /
  B2 OPEN ORAT 5104.40 0.00 6790.20 1* 1* 550.0000 1763.0000 /
  B4 OPEN ORAT 5971.50 834.30 2980.40 1* 1* 540.0000 1794.0000 /
  /

DATES                                  -- Generated : Petrel
  24 MAR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2952.80 0.00 4971.40 1* 1* 1120.0000 0.0000 /
  B2 OPEN ORAT 5007.80 0.00 6989.10 1* 1* 550.0000 1763.0000 /
  B4 OPEN ORAT 5971.50 834.30 2980.40 1* 1* 540.0000 1794.0000 /
  /

DATES                                  -- Generated : Petrel
  25 MAR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2952.80 0.00 4971.40 1* 1* 1120.0000 0.0000 /
  B2 OPEN ORAT 5007.80 0.00 6989.10 1* 1* 550.0000 1762.0000 /
  B4 OPEN ORAT 5715.80 1048.20 2776.70 1* 1* 540.0000 1794.0000 /
  /

DATES                                  -- Generated : Petrel
  26 MAR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2952.80 0.00 4971.40 1* 1* 1120.0000 0.0000 /
  B2 OPEN ORAT 5007.80 0.00 6989.10 1* 1* 550.0000 1762.0000 /
  B4 OPEN ORAT 5715.80 1048.20 2776.70 1* 1* 540.0000 1793.0000 /
  /

DATES                                  -- Generated : Petrel
  27 MAR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2947.70 0.00 4962.90 1* 1* 1120.0000 0.0000 /
  B2 OPEN ORAT 5007.80 0.00 6989.10 1* 1* 550.0000 1761.0000 /
  B4 OPEN ORAT 5715.80 1048.20 2776.70 1* 1* 540.0000 1793.0000 /
  /

DATES                                  -- Generated : Petrel
  28 MAR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2947.70 0.00 4962.90 1* 1* 1120.0000 0.0000 /
  B2 OPEN ORAT 5017.40 0.00 6263.50 1* 1* 550.0000 1760.0000 /
  B4 OPEN ORAT 5656.30 1037.30 2747.80 1* 1* 540.0000 1793.0000 /
  /

DATES                                  -- Generated : Petrel
  29 MAR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2947.70 0.00 4962.90 1* 1* 1120.0000 0.0000 /
  B2 OPEN ORAT 5070.20 0.00 6329.40 1* 1* 550.0000 1761.0000 /
  B4 OPEN ORAT 5715.80 1048.20 2776.70 1* 1* 540.0000 1793.0000 /
  /

DATES                                  -- Generated : Petrel
  30 MAR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2906.70 0.00 4777.40 1* 1* 1120.0000 0.0000 /
  B2 OPEN ORAT 5070.20 0.00 6329.40 1* 1* 550.0000 1761.0000 /
  B4 OPEN ORAT 5715.80 1048.20 2776.70 1* 1* 540.0000 1794.0000 /
  /

DATES                                  -- Generated : Petrel
  31 MAR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2906.70 0.00 4777.40 1* 1* 1120.0000 0.0000 /
  B2 OPEN ORAT 5070.20 0.00 6329.40 1* 1* 550.0000 1760.0000 /
  B4 OPEN ORAT 5985.50 899.30 2756.10 1* 1* 540.0000 1794.0000 /
  /

DATES                                  -- Generated : Petrel
  1 APR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2761.10 0.00 5465.10 1* 1* 1120.0000 0.0000 /
  B2 OPEN ORAT 5185.90 0.00 7004.80 1* 1* 550.0000 1760.0000 /
  B4 OPEN ORAT 5685.70 1190.80 3152.80 1* 1* 540.0000 1794.0000 /
  /

DATES                                  -- Generated : Petrel
  2 APR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2761.10 0.00 5465.10 1* 1* 1120.0000 0.0000 /
  B2 OPEN ORAT 5185.90 0.00 7004.80 1* 1* 550.0000 1759.0000 /
  B4 OPEN ORAT 5685.70 1190.80 3152.80 1* 1* 540.0000 1794.0000 /
  /

DATES                                  -- Generated : Petrel
  3 APR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2790.30 0.00 5441.50 1* 1* 1120.0000 0.0000 /
  B2 OPEN ORAT 5185.90 0.00 7004.80 1* 1* 550.0000 1759.0000 /
  B4 OPEN ORAT 5685.70 1190.80 3152.80 1* 1* 540.0000 1794.0000 /
  /

DATES                                  -- Generated : Petrel
  4 APR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2790.30 0.00 5441.50 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 5185.90 0.00 7004.80 1* 1* 550.0000 1756.0000 /
  B4 OPEN ORAT 5793.10 1128.30 3152.80 1* 1* 540.0000 1793.0000 /
  /

DATES                                  -- Generated : Petrel
  5 APR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2790.30 0.00 5441.50 1* 1* 220.0000 0.0000 /
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 0.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 0.0000 /
  /

DATES                                  -- Generated : Petrel
  6 APR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2790.30 0.00 5441.50 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 5185.90 0.00 7004.80 1* 1* 550.0000 1755.0000 /
  B4 OPEN ORAT 5793.10 1128.30 3152.80 1* 1* 540.0000 1794.0000 /
  /

DATES                                  -- Generated : Petrel
  7 APR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2914.60 0.00 6857.80 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 5185.90 0.00 7004.80 1* 1* 550.0000 1755.0000 /
  B4 OPEN ORAT 5793.10 1128.30 3152.80 1* 1* 540.0000 1795.0000 /
  /

DATES                                  -- Generated : Petrel
  8 APR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2914.60 0.00 6857.80 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 5185.90 0.00 7004.80 1* 1* 550.0000 1755.0000 /
  B4 OPEN ORAT 5877.10 1144.60 3136.20 1* 1* 540.0000 1796.0000 /
  /

DATES                                  -- Generated : Petrel
  9 APR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2914.60 0.00 6857.80 1* 1* 1150.0000 0.0000 /
  B2 OPEN ORAT 5068.90 0.00 7755.20 1* 1* 450.0000 1737.0000 /
  B4 OPEN ORAT 5877.10 1144.60 3136.20 1* 1* 520.0000 1795.0000 /
  /

DATES                                  -- Generated : Petrel
  10 APR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2785.40 0.00 5725.90 1* 1* 1150.0000 0.0000 /
  B2 OPEN ORAT 5068.90 0.00 7755.20 1* 1* 450.0000 1736.0000 /
  B4 OPEN ORAT 5877.10 1144.60 3136.20 1* 1* 350.0000 1760.0000 /
  /

DATES                                  -- Generated : Petrel
  11 APR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2785.40 0.00 5725.90 1* 1* 1150.0000 0.0000 /
  B2 OPEN ORAT 5068.90 0.00 7755.20 1* 1* 450.0000 1736.0000 /
  B4 OPEN ORAT 7080.50 2286.30 4301.40 1* 1* 350.0000 1761.0000 /
  /

DATES                                  -- Generated : Petrel
  12 APR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2785.40 0.00 5725.90 1* 1* 1150.0000 0.0000 /
  B2 OPEN ORAT 5068.90 0.00 7755.20 1* 1* 450.0000 1736.0000 /
  B4 OPEN ORAT 7080.50 2286.30 4301.40 1* 1* 350.0000 1761.0000 /
  /

DATES                                  -- Generated : Petrel
  13 APR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2785.40 0.00 5725.90 1* 1* 1150.0000 0.0000 /
  B2 OPEN ORAT 5049.40 0.00 7842.60 1* 1* 450.0000 1735.0000 /
  B4 OPEN ORAT 7080.50 2286.30 4301.40 1* 1* 350.0000 1761.0000 /
  /

DATES                                  -- Generated : Petrel
  14 APR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2763.50 0.00 5598.30 1* 1* 1150.0000 0.0000 /
  B2 OPEN ORAT 5049.40 0.00 7842.60 1* 1* 450.0000 1735.0000 /
  B4 OPEN ORAT 7080.50 2286.30 4301.40 1* 1* 350.0000 1761.0000 /
  /

DATES                                  -- Generated : Petrel
  15 APR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2763.50 0.00 5598.30 1* 1* 1150.0000 0.0000 /
  B2 OPEN ORAT 5049.40 0.00 7842.60 1* 1* 450.0000 1734.0000 /
  B4 OPEN ORAT 7108.30 2295.30 4143.20 1* 1* 350.0000 1756.0000 /
  /

DATES                                  -- Generated : Petrel
  16 APR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2763.50 0.00 5598.30 1* 1* 1150.0000 0.0000 /
  B2 OPEN ORAT 5049.40 0.00 7842.60 1* 1* 450.0000 1734.0000 /
  B4 OPEN ORAT 7108.30 2295.30 4143.20 1* 1* 350.0000 1756.0000 /
  /

DATES                                  -- Generated : Petrel
  17 APR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2763.50 0.00 5598.30 1* 1* 1150.0000 0.0000 /
  B2 OPEN ORAT 5049.40 0.00 7842.60 1* 1* 450.0000 1732.0000 /
  B4 OPEN ORAT 7108.30 2295.30 4143.20 1* 1* 350.0000 1755.0000 /
  /

DATES                                  -- Generated : Petrel
  18 APR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2763.50 0.00 5598.30 1* 1* 1150.0000 0.0000 /
  B2 OPEN ORAT 5439.30 0.00 7612.30 1* 1* 450.0000 1731.0000 /
  B4 OPEN ORAT 6867.20 2467.10 4143.20 1* 1* 350.0000 1756.0000 /
  /

DATES                                  -- Generated : Petrel
  19 APR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2763.50 0.00 5598.30 1* 1* 1150.0000 0.0000 /
  B2 OPEN ORAT 5439.30 0.00 7612.30 1* 1* 450.0000 1730.0000 /
  B4 OPEN ORAT 6867.20 2467.10 4143.20 1* 1* 350.0000 1755.0000 /
  /

DATES                                  -- Generated : Petrel
  20 APR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2763.50 0.00 5598.30 1* 1* 1150.0000 0.0000 /
  B2 OPEN ORAT 5439.30 0.00 7612.30 1* 1* 450.0000 1730.0000 /
  B4 OPEN ORAT 6867.20 2467.10 4143.20 1* 1* 350.0000 1750.0000 /
  /

DATES                                  -- Generated : Petrel
  21 APR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2763.50 0.00 5598.30 1* 1* 1150.0000 0.0000 /
  B2 OPEN ORAT 5439.30 0.00 7612.30 1* 1* 420.0000 1725.0000 /
  B4 OPEN ORAT 6867.20 2467.10 4143.20 1* 1* 340.0000 1750.0000 /
  /

DATES                                  -- Generated : Petrel
  22 APR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2763.50 0.00 5598.30 1* 1* 1150.0000 0.0000 /
  B2 OPEN ORAT 5439.30 0.00 7612.30 1* 1* 420.0000 1725.0000 /
  B4 OPEN ORAT 6867.20 2467.10 4143.20 1* 1* 340.0000 1749.0000 /
  /

DATES                                  -- Generated : Petrel
  23 APR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2763.50 0.00 5598.30 1* 1* 1150.0000 0.0000 /
  B2 OPEN ORAT 5439.30 0.00 7612.30 1* 1* 420.0000 1724.0000 /
  B4 OPEN ORAT 6867.20 2467.10 4143.20 1* 1* 340.0000 1755.0000 /
  /

DATES                                  -- Generated : Petrel
  24 APR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2763.50 0.00 5598.30 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 5439.30 0.00 7612.30 1* 1* 420.0000 1724.0000 /
  B4 OPEN ORAT 6867.20 2467.10 4143.20 1* 1* 340.0000 1755.0000 /
  /

DATES                                  -- Generated : Petrel
  25 APR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2763.50 0.00 5598.30 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 5439.30 0.00 7612.30 1* 1* 420.0000 1724.0000 /
  B4 OPEN ORAT 6867.20 2467.10 4143.20 1* 1* 340.0000 1756.0000 /
  /

DATES                                  -- Generated : Petrel
  26 APR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2763.50 0.00 5598.30 1* 1* 920.0000 0.0000 /
  B2 OPEN ORAT 5439.30 0.00 7612.30 1* 1* 420.0000 1723.0000 /
  B4 OPEN ORAT 6867.20 2467.10 4143.20 1* 1* 340.0000 1757.0000 /
  /

DATES                                  -- Generated : Petrel
  27 APR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2763.50 0.00 5598.30 1* 1* 920.0000 0.0000 /
  B2 OPEN ORAT 5439.30 0.00 7612.30 1* 1* 420.0000 1723.0000 /
  B4 OPEN ORAT 6867.20 2467.10 4143.20 1* 1* 340.0000 1761.0000 /
  /

DATES                                  -- Generated : Petrel
  28 APR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2763.50 0.00 5598.30 1* 1* 920.0000 0.0000 /
  B2 OPEN ORAT 5439.30 0.00 7612.30 1* 1* 420.0000 1722.0000 /
  B4 OPEN ORAT 6867.20 2467.10 4143.20 1* 1* 340.0000 1763.0000 /
  /

DATES                                  -- Generated : Petrel
  29 APR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2763.50 0.00 5598.30 1* 1* 920.0000 0.0000 /
  B2 OPEN ORAT 5439.30 0.00 7612.30 1* 1* 420.0000 1722.0000 /
  B4 OPEN ORAT 6867.20 2467.10 4143.20 1* 1* 340.0000 1762.0000 /
  /

DATES                                  -- Generated : Petrel
  30 APR 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3187.50 0.00 5598.30 1* 1* 920.0000 0.0000 /
  B2 OPEN ORAT 5439.30 0.00 7612.30 1* 1* 420.0000 1721.0000 /
  B4 OPEN ORAT 6867.20 2467.10 4143.20 1* 1* 340.0000 1766.0000 /
  /

DATES                                  -- Generated : Petrel
  1 MAY 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3126.40 0.00 5444.50 1* 1* 920.0000 0.0000 /
  B2 OPEN ORAT 5315.80 0.00 8081.70 1* 1* 420.0000 1721.0000 /
  B4 OPEN ORAT 6735.40 2819.70 4029.40 1* 1* 340.0000 1765.0000 /
  /

DATES                                  -- Generated : Petrel
  2 MAY 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3126.40 0.00 5444.50 1* 1* 920.0000 0.0000 /
  B2 OPEN ORAT 5315.80 0.00 8081.70 1* 1* 420.0000 1720.0000 /
  B4 OPEN ORAT 7686.90 2289.70 3952.50 1* 1* 340.0000 1765.0000 /
  /

DATES                                  -- Generated : Petrel
  3 MAY 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3126.40 0.00 5444.50 1* 1* 920.0000 0.0000 /
  B2 OPEN ORAT 5315.80 0.00 8081.70 1* 1* 420.0000 1720.0000 /
  B4 OPEN ORAT 7686.90 2289.70 3952.50 1* 1* 340.0000 1759.0000 /
  /

DATES                                  -- Generated : Petrel
  4 MAY 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3365.40 0.00 5444.50 1* 1* 940.0000 0.0000 /
  B2 OPEN ORAT 5315.80 0.00 8081.70 1* 1* 420.0000 1719.0000 /
  B4 OPEN ORAT 7686.90 2289.70 3952.50 1* 1* 360.0000 1760.0000 /
  /

DATES                                  -- Generated : Petrel
  5 MAY 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3365.40 0.00 5444.50 1* 1* 940.0000 0.0000 /
  B2 OPEN ORAT 5315.80 0.00 8081.70 1* 1* 440.0000 1720.0000 /
  B4 OPEN ORAT 7686.90 2289.70 3952.50 1* 1* 360.0000 1763.0000 /
  /

DATES                                  -- Generated : Petrel
  6 MAY 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3365.40 0.00 5444.50 1* 1* 940.0000 0.0000 /
  B2 OPEN ORAT 5315.80 0.00 8081.70 1* 1* 440.0000 1718.0000 /
  B4 OPEN ORAT 7686.90 2289.70 3952.50 1* 1* 360.0000 1761.0000 /
  /

DATES                                  -- Generated : Petrel
  7 MAY 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3365.40 0.00 5444.50 1* 1* 940.0000 0.0000 /
  B2 OPEN ORAT 5315.80 0.00 8081.70 1* 1* 440.0000 1718.0000 /
  B4 OPEN ORAT 7686.90 2289.70 3952.50 1* 1* 360.0000 1760.0000 /
  /

DATES                                  -- Generated : Petrel
  8 MAY 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3365.40 0.00 5444.50 1* 1* 940.0000 0.0000 /
  B2 OPEN ORAT 5315.80 0.00 8081.70 1* 1* 440.0000 1718.0000 /
  B4 OPEN ORAT 7686.90 2289.70 3952.50 1* 1* 360.0000 1757.0000 /
  /

DATES                                  -- Generated : Petrel
  9 MAY 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3365.40 0.00 5444.50 1* 1* 1250.0000 0.0000 /
  B2 OPEN ORAT 4627.40 0.00 8076.30 1* 1* 440.0000 1717.0000 /
  B4 OPEN ORAT 7686.90 2289.70 3952.50 1* 1* 360.0000 1756.0000 /
  /

DATES                                  -- Generated : Petrel
  10 MAY 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3365.40 0.00 5444.50 1* 1* 1250.0000 0.0000 /
  B2 OPEN ORAT 4627.40 0.00 8076.30 1* 1* 440.0000 1717.0000 /
  B4 OPEN ORAT 7686.90 2289.70 3952.50 1* 1* 360.0000 1756.0000 /
  /

DATES                                  -- Generated : Petrel
  11 MAY 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3365.40 0.00 5444.50 1* 1* 1250.0000 0.0000 /
  B2 OPEN ORAT 4627.40 0.00 8076.30 1* 1* 440.0000 1718.0000 /
  B4 OPEN ORAT 7604.80 2706.50 4030.70 1* 1* 360.0000 1759.0000 /
  /

DATES                                  -- Generated : Petrel
  12 MAY 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2261.10 0.00 3539.70 1* 1* 1250.0000 0.0000 /
  B2 OPEN ORAT 4627.40 0.00 8076.30 1* 1* 440.0000 1718.0000 /
  B4 OPEN ORAT 7604.80 2706.50 4030.70 1* 1* 360.0000 1759.0000 /
  /

DATES                                  -- Generated : Petrel
  13 MAY 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2261.10 0.00 3539.70 1* 1* 1200.0000 0.0000 /
  B2 OPEN ORAT 4627.40 0.00 8076.30 1* 1* 420.0000 1722.0000 /
  B4 OPEN ORAT 7604.80 2706.50 4030.70 1* 1* 360.0000 1766.0000 /
  /

DATES                                  -- Generated : Petrel
  14 MAY 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2261.10 0.00 3539.70 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 4627.40 0.00 8076.30 1* 1* 420.0000 1723.0000 /
  B4 OPEN ORAT 7604.80 2706.50 4030.70 1* 1* 360.0000 1767.0000 /
  /

DATES                                  -- Generated : Petrel
  15 MAY 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2720.80 0.00 4908.00 1* 1* 1030.0000 0.0000 /
  B2 OPEN ORAT 4627.40 0.00 8076.30 1* 1* 420.0000 1723.0000 /
  B4 OPEN ORAT 7604.80 2706.50 4030.70 1* 1* 360.0000 1768.0000 /
  /

DATES                                  -- Generated : Petrel
  16 MAY 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3265.00 0.00 5889.60 1* 1* 1030.0000 0.0000 /
  B2 OPEN ORAT 4627.40 0.00 8076.30 1* 1* 420.0000 1718.0000 /
  B4 OPEN ORAT 7604.80 2706.50 4030.70 1* 1* 360.0000 1765.0000 /
  /

DATES                                  -- Generated : Petrel
  17 MAY 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3265.00 0.00 5889.60 1* 1* 1030.0000 0.0000 /
  B2 OPEN ORAT 4627.40 0.00 8076.30 1* 1* 420.0000 1718.0000 /
  B4 OPEN ORAT 7604.80 2706.50 4030.70 1* 1* 360.0000 1765.0000 /
  /

DATES                                  -- Generated : Petrel
  18 MAY 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3265.00 0.00 5889.60 1* 1* 1050.0000 0.0000 /
  B2 OPEN ORAT 4627.40 0.00 8076.30 1* 1* 420.0000 1717.0000 /
  B4 OPEN ORAT 7604.80 2706.50 4030.70 1* 1* 360.0000 1770.0000 /
  /

DATES                                  -- Generated : Petrel
  19 MAY 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3265.00 0.00 5889.60 1* 1* 1050.0000 0.0000 /
  B2 OPEN ORAT 6023.30 0.00 7105.10 1* 1* 420.0000 1717.0000 /
  B4 OPEN ORAT 7604.80 2706.50 4030.70 1* 1* 360.0000 1768.0000 /
  /

DATES                                  -- Generated : Petrel
  20 MAY 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3265.00 0.00 5889.60 1* 1* 1050.0000 0.0000 /
  B2 OPEN ORAT 6023.30 0.00 7105.10 1* 1* 420.0000 1717.0000 /
  B4 OPEN ORAT 6962.00 3726.80 3800.10 1* 1* 360.0000 1768.0000 /
  /

DATES                                  -- Generated : Petrel
  21 MAY 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3265.00 0.00 5889.60 1* 1* 1050.0000 0.0000 /
  B2 OPEN ORAT 6023.30 0.00 7105.10 1* 1* 420.0000 1715.0000 /
  B4 OPEN ORAT 6962.00 3726.80 3800.10 1* 1* 360.0000 1772.0000 /
  /

DATES                                  -- Generated : Petrel
  22 MAY 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3265.00 0.00 5889.60 1* 1* 1050.0000 0.0000 /
  B2 OPEN ORAT 6023.30 0.00 7105.10 1* 1* 420.0000 1715.0000 /
  B4 OPEN ORAT 6962.00 3726.80 3800.10 1* 1* 360.0000 1766.0000 /
  /

DATES                                  -- Generated : Petrel
  23 MAY 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3265.00 0.00 5889.60 1* 1* 1050.0000 0.0000 /
  B2 OPEN ORAT 6023.30 0.00 7105.10 1* 1* 420.0000 1714.0000 /
  B4 OPEN ORAT 6962.00 3726.80 3800.10 1* 1* 360.0000 1770.0000 /
  /

DATES                                  -- Generated : Petrel
  24 MAY 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3265.00 0.00 5889.60 1* 1* 1050.0000 0.0000 /
  B2 OPEN ORAT 6023.30 0.00 7105.10 1* 1* 420.0000 1714.0000 /
  B4 OPEN ORAT 6962.00 3726.80 3800.10 1* 1* 360.0000 1769.0000 /
  /

DATES                                  -- Generated : Petrel
  25 MAY 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3265.00 0.00 5889.60 1* 1* 1050.0000 0.0000 /
  B2 OPEN ORAT 6023.30 0.00 7105.10 1* 1* 420.0000 1746.0000 /
  B4 OPEN ORAT 6962.00 3726.80 3800.10 1* 1* 360.0000 1766.0000 /
  /

DATES                                  -- Generated : Petrel
  26 MAY 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3265.00 0.00 5889.60 1* 1* 1050.0000 0.0000 /
  B2 OPEN ORAT 6023.30 0.00 7105.10 1* 1* 490.0000 1718.0000 /
  B4 OPEN ORAT 6962.00 3726.80 3800.10 1* 1* 360.0000 1767.0000 /
  /

DATES                                  -- Generated : Petrel
  27 MAY 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3265.00 0.00 5889.60 1* 1* 1050.0000 0.0000 /
  B2 OPEN ORAT 6023.30 0.00 7105.10 1* 1* 490.0000 1718.0000 /
  B4 OPEN ORAT 6962.00 3726.80 3800.10 1* 1* 360.0000 1767.0000 /
  /

DATES                                  -- Generated : Petrel
  28 MAY 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3265.00 0.00 5889.60 1* 1* 1050.0000 0.0000 /
  B2 OPEN ORAT 5631.60 207.50 6189.10 1* 1* 490.0000 1740.0000 /
  B4 OPEN ORAT 6962.00 3726.80 3800.10 1* 1* 360.0000 1784.0000 /
  /

DATES                                  -- Generated : Petrel
  29 MAY 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3159.80 0.00 6198.50 1* 1* 1050.0000 0.0000 /
  B2 OPEN ORAT 5514.30 203.20 6060.20 1* 1* 450.0000 1708.0000 /
  B4 OPEN ORAT 6962.00 3726.80 3800.10 1* 1* 390.0000 1785.0000 /
  /

DATES                                  -- Generated : Petrel
  30 MAY 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 0.0000 /
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 0.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 0.0000 /
  /

DATES                                  -- Generated : Petrel
  31 MAY 2015 /
  /

DATES                                  -- Generated : Petrel
  1 JUN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2652.40 0.00 4793.70 1* 1* 1050.0000 0.0000 /
  B2 OPEN ORAT 4712.90 234.10 5050.20 1* 1* 440.0000 1702.0000 /
  B4 OPEN ORAT 5826.30 4204.80 3100.80 1* 1* 450.0000 1792.0000 /
  /

DATES                                  -- Generated : Petrel
  2 JUN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2652.40 0.00 4793.70 1* 1* 1050.0000 0.0000 /
  B2 OPEN ORAT 5050.60 250.90 5574.10 1* 1* 450.0000 1702.0000 /
  B4 OPEN ORAT 5826.30 4204.80 3100.80 1* 1* 420.0000 1795.0000 /
  /

DATES                                  -- Generated : Petrel
  3 JUN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2652.40 0.00 4793.70 1* 1* 1050.0000 0.0000 /
  B2 OPEN ORAT 5050.60 250.90 5574.10 1* 1* 450.0000 1700.0000 /
  B4 OPEN ORAT 5826.30 4204.80 3100.80 1* 1* 400.0000 1794.0000 /
  /

DATES                                  -- Generated : Petrel
  4 JUN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2652.40 0.00 4793.70 1* 1* 1050.0000 0.0000 /
  B2 OPEN ORAT 5050.60 250.90 5574.10 1* 1* 450.0000 1699.0000 /
  B4 OPEN ORAT 5826.30 4204.80 3100.80 1* 1* 400.0000 1794.0000 /
  /

DATES                                  -- Generated : Petrel
  5 JUN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2652.40 0.00 4793.70 1* 1* 1050.0000 0.0000 /
  B2 OPEN ORAT 5050.60 250.90 5574.10 1* 1* 450.0000 1697.0000 /
  B4 OPEN ORAT 6235.10 4292.40 3613.70 1* 1* 400.0000 1797.0000 /
  /

DATES                                  -- Generated : Petrel
  6 JUN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2652.40 0.00 4793.70 1* 1* 1050.0000 0.0000 /
  B2 OPEN ORAT 5050.60 250.90 5574.10 1* 1* 440.0000 1689.0000 /
  B4 OPEN ORAT 6235.10 4292.40 3613.70 1* 1* 410.0000 1797.0000 /
  /

DATES                                  -- Generated : Petrel
  7 JUN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2652.40 0.00 4793.70 1* 1* 1050.0000 0.0000 /
  B2 OPEN ORAT 5050.60 250.90 5574.10 1* 1* 440.0000 1687.0000 /
  B4 OPEN ORAT 6235.10 4292.40 3613.70 1* 1* 410.0000 1797.0000 /
  /

DATES                                  -- Generated : Petrel
  8 JUN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2644.40 0.00 4749.70 1* 1* 1040.0000 0.0000 /
  B2 OPEN ORAT 5050.60 250.90 5574.10 1* 1* 440.0000 1687.0000 /
  B4 OPEN ORAT 6235.10 4292.40 3613.70 1* 1* 600.0000 1799.0000 /
  /

DATES                                  -- Generated : Petrel
  9 JUN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2644.40 0.00 4749.70 1* 1* 1040.0000 0.0000 /
  B2 OPEN ORAT 4975.20 510.10 5630.20 1* 1* 450.0000 1687.0000 /
  B4 OPEN ORAT 6235.10 4292.40 3613.70 1* 1* 480.0000 1799.0000 /
  /

DATES                                  -- Generated : Petrel
  10 JUN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2644.40 0.00 4749.70 1* 1* 1040.0000 0.0000 /
  B2 OPEN ORAT 4975.20 510.10 5630.20 1* 1* 450.0000 1687.0000 /
  B4 OPEN ORAT 6002.80 3749.90 3991.20 1* 1* 440.0000 1799.0000 /
  /

DATES                                  -- Generated : Petrel
  11 JUN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2644.40 0.00 4749.70 1* 1* 1040.0000 0.0000 /
  B2 OPEN ORAT 4975.20 510.10 5630.20 1* 1* 450.0000 1683.0000 /
  B4 OPEN ORAT 6002.80 3749.90 3991.20 1* 1* 440.0000 1799.0000 /
  /

DATES                                  -- Generated : Petrel
  12 JUN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2644.40 0.00 4749.70 1* 1* 1040.0000 0.0000 /
  B2 OPEN ORAT 4975.20 510.10 5630.20 1* 1* 450.0000 1683.0000 /
  B4 OPEN ORAT 6002.80 3749.90 3991.20 1* 1* 440.0000 1799.0000 /
  /

DATES                                  -- Generated : Petrel
  13 JUN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2644.40 0.00 4749.70 1* 1* 1040.0000 0.0000 /
  B2 OPEN ORAT 4975.20 510.10 5630.20 1* 1* 450.0000 1681.0000 /
  B4 OPEN ORAT 6002.80 3749.90 3991.20 1* 1* 440.0000 1800.0000 /
  /

DATES                                  -- Generated : Petrel
  14 JUN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2368.90 0.00 4254.90 1* 1* 1000.0000 0.0000 /
  B2 OPEN ORAT 4975.20 510.10 5630.20 1* 1* 450.0000 1679.0000 /
  B4 OPEN ORAT 6002.80 3749.90 3991.20 1* 1* 440.0000 1800.0000 /
  /

DATES                                  -- Generated : Petrel
  15 JUN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2644.40 0.00 4749.70 1* 1* 1000.0000 0.0000 /
  B2 OPEN ORAT 4975.20 510.10 5630.20 1* 1* 450.0000 1677.0000 /
  B4 OPEN ORAT 6002.80 3749.90 3991.20 1* 1* 440.0000 1801.0000 /
  /

DATES                                  -- Generated : Petrel
  16 JUN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2884.40 0.00 5158.00 1* 1* 1020.0000 0.0000 /
  B2 OPEN ORAT 4975.20 510.10 5630.20 1* 1* 450.0000 1678.0000 /
  B4 OPEN ORAT 6002.80 3749.90 3991.20 1* 1* 440.0000 1798.0000 /
  /

DATES                                  -- Generated : Petrel
  17 JUN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2884.40 0.00 5158.00 1* 1* 1020.0000 0.0000 /
  B2 OPEN ORAT 4975.20 510.10 5630.20 1* 1* 440.0000 1682.0000 /
  B4 OPEN ORAT 6002.80 3749.90 3991.20 1* 1* 450.0000 1800.0000 /
  /

DATES                                  -- Generated : Petrel
  18 JUN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2884.40 0.00 5158.00 1* 1* 1020.0000 0.0000 /
  B2 OPEN ORAT 4975.20 510.10 5630.20 1* 1* 440.0000 1681.0000 /
  B4 OPEN ORAT 6282.00 3545.50 4953.30 1* 1* 450.0000 1797.0000 /
  /

DATES                                  -- Generated : Petrel
  19 JUN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2884.40 0.00 5158.00 1* 1* 1020.0000 0.0000 /
  B2 OPEN ORAT 4975.20 510.10 5630.20 1* 1* 440.0000 1680.0000 /
  B4 OPEN ORAT 6282.00 3545.50 4953.30 1* 1* 450.0000 1806.0000 /
  /

DATES                                  -- Generated : Petrel
  20 JUN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2884.40 0.00 5158.00 1* 1* 1020.0000 0.0000 /
  B2 OPEN ORAT 4975.20 510.10 5630.20 1* 1* 440.0000 1681.0000 /
  B4 OPEN ORAT 6282.00 3545.50 4953.30 1* 1* 450.0000 1808.0000 /
  /

DATES                                  -- Generated : Petrel
  21 JUN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2884.40 0.00 5158.00 1* 1* 1020.0000 0.0000 /
  B2 OPEN ORAT 4975.20 510.10 5630.20 1* 1* 440.0000 1685.0000 /
  B4 OPEN ORAT 6282.00 3545.50 4953.30 1* 1* 450.0000 1809.0000 /
  /

DATES                                  -- Generated : Petrel
  22 JUN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2884.40 0.00 5158.00 1* 1* 1020.0000 0.0000 /
  B2 OPEN ORAT 4975.20 510.10 5630.20 1* 1* 440.0000 1687.0000 /
  B4 OPEN ORAT 6282.00 3545.50 4953.30 1* 1* 450.0000 1810.0000 /
  /

DATES                                  -- Generated : Petrel
  23 JUN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2884.40 0.00 5158.00 1* 1* 1020.0000 0.0000 /
  B2 OPEN ORAT 4975.20 510.10 5630.20 1* 1* 440.0000 1693.0000 /
  B4 OPEN ORAT 4698.70 2515.90 7739.20 1* 1* 450.0000 1813.0000 /
  /

DATES                                  -- Generated : Petrel
  24 JUN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2884.40 0.00 5158.00 1* 1* 1020.0000 0.0000 /
  B2 OPEN ORAT 5047.90 901.00 5820.70 1* 1* 440.0000 1697.0000 /
  B4 OPEN ORAT 4854.50 2072.90 8133.30 1* 1* 450.0000 1813.0000 /
  /

DATES                                  -- Generated : Petrel
  25 JUN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3004.40 0.00 5908.70 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 5047.90 901.00 5820.70 1* 1* 440.0000 1702.0000 /
  B4 OPEN ORAT 4854.50 2072.90 8133.30 1* 1* 450.0000 1812.0000 /
  /

DATES                                  -- Generated : Petrel
  26 JUN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3004.40 0.00 5908.70 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 5047.90 901.00 5820.70 1* 1* 450.0000 1702.0000 /
  B4 OPEN ORAT 4854.50 2072.90 8133.30 1* 1* 450.0000 1813.0000 /
  /

DATES                                  -- Generated : Petrel
  27 JUN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3004.40 0.00 5908.70 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 5047.90 901.00 5820.70 1* 1* 470.0000 1702.0000 /
  B4 OPEN ORAT 4854.50 2072.90 8133.30 1* 1* 480.0000 1815.0000 /
  /

DATES                                  -- Generated : Petrel
  28 JUN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2837.40 0.00 5580.30 1* 1* 960.0000 0.0000 /
  B2 OPEN ORAT 4767.40 850.90 5497.10 1* 1* 450.0000 1708.0000 /
  B4 OPEN ORAT 4584.60 1957.60 7681.20 1* 1* 500.0000 1846.0000 /
  /

DATES                                  -- Generated : Petrel
  29 JUN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3004.40 0.00 5908.70 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 5047.90 901.00 5820.70 1* 1* 450.0000 1709.0000 /
  B4 OPEN ORAT 4854.50 2072.90 8133.30 1* 1* 530.0000 1820.0000 /
  /

DATES                                  -- Generated : Petrel
  30 JUN 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3004.40 0.00 5908.70 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 5047.90 901.00 5820.70 1* 1* 450.0000 1709.0000 /
  B4 OPEN ORAT 4854.50 2072.90 8133.30 1* 1* 530.0000 1818.0000 /
  /

DATES                                  -- Generated : Petrel
  1 JUL 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2888.90 0.00 3652.30 1* 1* 1100.0000 0.0000 /
  B2 OPEN ORAT 4790.10 966.20 4762.90 1* 1* 450.0000 1711.0000 /
  B4 OPEN ORAT 4462.60 2153.50 6447.30 1* 1* 530.0000 1820.0000 /
  /

DATES                                  -- Generated : Petrel
  2 JUL 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2888.90 0.00 3652.30 1* 1* 1050.0000 0.0000 /
  B2 OPEN ORAT 4790.10 966.20 4762.90 1* 1* 450.0000 1709.0000 /
  B4 OPEN ORAT 4606.50 2223.00 6655.30 1* 1* 540.0000 1820.0000 /
  /

DATES                                  -- Generated : Petrel
  3 JUL 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2888.90 0.00 3652.30 1* 1* 1050.0000 0.0000 /
  B2 OPEN ORAT 4790.10 966.20 4762.90 1* 1* 450.0000 1714.0000 /
  B4 OPEN ORAT 4606.50 2223.00 6655.30 1* 1* 540.0000 1819.0000 /
  /

DATES                                  -- Generated : Petrel
  4 JUL 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2888.90 0.00 3652.30 1* 1* 900.0000 0.0000 /
  B2 OPEN ORAT 4790.10 966.20 4762.90 1* 1* 450.0000 1712.0000 /
  B4 OPEN ORAT 3571.50 2778.80 6716.50 1* 1* 540.0000 1819.0000 /
  /

DATES                                  -- Generated : Petrel
  5 JUL 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2888.90 0.00 3652.30 1* 1* 900.0000 0.0000 /
  B2 OPEN ORAT 4790.10 966.20 4762.90 1* 1* 450.0000 1712.0000 /
  B4 OPEN ORAT 3571.50 2778.80 6716.50 1* 1* 540.0000 1819.0000 /
  /

DATES                                  -- Generated : Petrel
  6 JUL 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3120.50 0.00 4434.10 1* 1* 900.0000 0.0000 /
  B2 OPEN ORAT 4790.10 966.20 4762.90 1* 1* 450.0000 1706.0000 /
  B4 OPEN ORAT 3571.50 2778.80 6716.50 1* 1* 540.0000 1819.0000 /
  /

DATES                                  -- Generated : Petrel
  7 JUL 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3120.50 0.00 4434.10 1* 1* 920.0000 0.0000 /
  B2 OPEN ORAT 4790.10 966.20 4762.90 1* 1* 450.0000 1706.0000 /
  B4 OPEN ORAT 4670.30 4367.70 6977.70 1* 1* 550.0000 1819.0000 /
  /

DATES                                  -- Generated : Petrel
  8 JUL 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3120.50 0.00 4434.10 1* 1* 900.0000 0.0000 /
  B2 OPEN ORAT 4790.10 966.20 4762.90 1* 1* 400.0000 1705.0000 /
  B4 OPEN ORAT 4670.30 4367.70 6977.70 1* 1* 550.0000 1816.0000 /
  /

DATES                                  -- Generated : Petrel
  9 JUL 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3120.50 0.00 4434.10 1* 1* 900.0000 0.0000 /
  B2 OPEN ORAT 4790.10 966.20 4762.90 1* 1* 300.0000 1705.0000 /
  B4 OPEN ORAT 4670.30 4367.70 6977.70 1* 1* 550.0000 1816.0000 /
  /

DATES                                  -- Generated : Petrel
  10 JUL 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3120.50 0.00 4434.10 1* 1* 920.0000 0.0000 /
  B2 OPEN ORAT 4790.10 966.20 4762.90 1* 1* 400.0000 1685.0000 /
  B4 OPEN ORAT 4670.30 4367.70 6977.70 1* 1* 550.0000 1817.0000 /
  /

DATES                                  -- Generated : Petrel
  11 JUL 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3120.50 0.00 4434.10 1* 1* 920.0000 0.0000 /
  B2 OPEN ORAT 4790.10 966.20 4762.90 1* 1* 0.0000 1683.0000 /
  B4 OPEN ORAT 4670.30 4367.70 6977.70 1* 1* 550.0000 1816.0000 /
  /

DATES                                  -- Generated : Petrel
  12 JUL 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3120.50 0.00 4434.10 1* 1* 920.0000 0.0000 /
  B2 OPEN ORAT 4790.10 966.20 4762.90 1* 1* 0.0000 1679.0000 /
  B4 OPEN ORAT 4670.30 4367.70 6977.70 1* 1* 550.0000 1817.0000 /
  /

DATES                                  -- Generated : Petrel
  13 JUL 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3120.50 0.00 4434.10 1* 1* 920.0000 0.0000 /
  B2 OPEN ORAT 4790.10 966.20 4762.90 1* 1* 0.0000 1677.0000 /
  B4 OPEN ORAT 3730.20 4150.50 7353.30 1* 1* 550.0000 1817.0000 /
  /

DATES                                  -- Generated : Petrel
  14 JUL 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3120.50 0.00 4434.10 1* 1* 920.0000 0.0000 /
  B2 OPEN ORAT 4790.10 966.20 4762.90 1* 1* 350.0000 1671.0000 /
  B4 OPEN ORAT 3730.20 4150.50 7353.30 1* 1* 550.0000 1818.0000 /
  /

DATES                                  -- Generated : Petrel
  15 JUL 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3280.00 0.00 4201.80 1* 1* 920.0000 0.0000 /
  B2 OPEN ORAT 4790.10 966.20 4762.90 1* 1* 300.0000 1669.0000 /
  B4 OPEN ORAT 3730.20 4150.50 7353.30 1* 1* 550.0000 1817.0000 /
  /

DATES                                  -- Generated : Petrel
  16 JUL 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3280.00 0.00 4201.80 1* 1* 920.0000 0.0000 /
  B2 OPEN ORAT 4790.10 966.20 4762.90 1* 1* 300.0000 1662.0000 /
  B4 OPEN ORAT 3730.20 4150.50 7353.30 1* 1* 550.0000 1817.0000 /
  /

DATES                                  -- Generated : Petrel
  17 JUL 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3280.00 0.00 4201.80 1* 1* 920.0000 0.0000 /
  B2 OPEN ORAT 4790.10 966.20 4762.90 1* 1* 300.0000 1659.0000 /
  B4 OPEN ORAT 3730.20 4150.50 7353.30 1* 1* 550.0000 1818.0000 /
  /

DATES                                  -- Generated : Petrel
  18 JUL 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3280.00 0.00 4201.80 1* 1* 920.0000 0.0000 /
  B2 OPEN ORAT 4790.10 966.20 4762.90 1* 1* 300.0000 1656.0000 /
  B4 OPEN ORAT 3730.20 4150.50 7353.30 1* 1* 550.0000 1822.0000 /
  /

DATES                                  -- Generated : Petrel
  19 JUL 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3280.00 0.00 4201.80 1* 1* 950.0000 0.0000 /
  B2 OPEN ORAT 4790.10 966.20 4762.90 1* 1* 300.0000 1656.0000 /
  B4 OPEN ORAT 3730.20 4150.50 7353.30 1* 1* 590.0000 1821.0000 /
  /

DATES                                  -- Generated : Petrel
  20 JUL 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3280.00 0.00 4201.80 1* 1* 860.0000 0.0000 /
  B2 OPEN ORAT 4790.10 966.20 4762.90 1* 1* 300.0000 1655.0000 /
  B4 OPEN ORAT 3730.20 4150.50 7353.30 1* 1* 600.0000 1823.0000 /
  /

DATES                                  -- Generated : Petrel
  21 JUL 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3280.00 0.00 4201.80 1* 1* 860.0000 0.0000 /
  B2 OPEN ORAT 4790.10 966.20 4762.90 1* 1* 300.0000 1654.0000 /
  B4 OPEN ORAT 3730.20 4150.50 7353.30 1* 1* 600.0000 1823.0000 /
  /

DATES                                  -- Generated : Petrel
  22 JUL 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3280.00 0.00 4201.80 1* 1* 860.0000 0.0000 /
  B2 OPEN ORAT 4790.10 966.20 4762.90 1* 1* 300.0000 1652.0000 /
  B4 OPEN ORAT 3730.20 4150.50 7353.30 1* 1* 600.0000 1821.0000 /
  /

DATES                                  -- Generated : Petrel
  23 JUL 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3280.00 0.00 4201.80 1* 1* 860.0000 0.0000 /
  B2 OPEN ORAT 4790.10 966.20 4762.90 1* 1* 300.0000 1652.0000 /
  B4 OPEN ORAT 3730.20 4150.50 7353.30 1* 1* 600.0000 1821.0000 /
  /

DATES                                  -- Generated : Petrel
  24 JUL 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3280.00 0.00 4201.80 1* 1* 860.0000 0.0000 /
  B2 OPEN ORAT 4790.10 966.20 4762.90 1* 1* 300.0000 1682.0000 /
  B4 OPEN ORAT 3730.20 4150.50 7353.30 1* 1* 600.0000 1824.0000 /
  /

DATES                                  -- Generated : Petrel
  25 JUL 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3280.00 0.00 4201.80 1* 1* 750.0000 0.0000 /
  B2 OPEN ORAT 4790.10 966.20 4762.90 1* 1* 350.0000 1676.0000 /
  B4 OPEN ORAT 3730.20 4150.50 7353.30 1* 1* 640.0000 1824.0000 /
  /

DATES                                  -- Generated : Petrel
  26 JUL 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3256.70 0.00 4172.00 1* 1* 750.0000 0.0000 /
  B2 OPEN ORAT 4790.10 966.20 4762.90 1* 1* 350.0000 1675.0000 /
  B4 OPEN ORAT 3730.20 4150.50 7353.30 1* 1* 640.0000 1824.0000 /
  /

DATES                                  -- Generated : Petrel
  27 JUL 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3256.70 0.00 4172.00 1* 1* 750.0000 0.0000 /
  B2 OPEN ORAT 4790.10 966.20 4762.90 1* 1* 350.0000 1675.0000 /
  B4 OPEN ORAT 3730.20 4150.50 7353.30 1* 1* 640.0000 1824.0000 /
  /

DATES                                  -- Generated : Petrel
  28 JUL 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3256.70 0.00 4172.00 1* 1* 750.0000 0.0000 /
  B2 OPEN ORAT 4790.10 966.20 4762.90 1* 1* 350.0000 1675.0000 /
  B4 OPEN ORAT 3730.20 4150.50 7353.30 1* 1* 640.0000 1823.0000 /
  /

DATES                                  -- Generated : Petrel
  29 JUL 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3256.70 0.00 4172.00 1* 1* 750.0000 0.0000 /
  B2 OPEN ORAT 4790.10 966.20 4762.90 1* 1* 350.0000 1679.0000 /
  B4 OPEN ORAT 3730.20 4150.50 7353.30 1* 1* 640.0000 1820.0000 /
  /

DATES                                  -- Generated : Petrel
  30 JUL 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3256.70 0.00 4172.00 1* 1* 750.0000 0.0000 /
  B2 OPEN ORAT 4790.10 966.20 4762.90 1* 1* 350.0000 1678.0000 /
  B4 OPEN ORAT 3730.20 4150.50 7353.30 1* 1* 600.0000 1820.0000 /
  /

DATES                                  -- Generated : Petrel
  31 JUL 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3280.00 0.00 4201.80 1* 1* 750.0000 0.0000 /
  B2 OPEN ORAT 4790.10 966.20 4762.90 1* 1* 350.0000 1678.0000 /
  B4 OPEN ORAT 3730.20 4150.50 7353.30 1* 1* 600.0000 1820.0000 /
  /

DATES                                  -- Generated : Petrel
  1 AUG 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3697.60 0.00 4141.60 1* 1* 750.0000 0.0000 /
  B2 OPEN ORAT 5400.00 860.40 4694.70 1* 1* 350.0000 1688.0000 /
  B4 OPEN ORAT 4205.10 3695.80 7248.00 1* 1* 600.0000 1820.0000 /
  /

DATES                                  -- Generated : Petrel
  2 AUG 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3697.60 0.00 4141.60 1* 1* 750.0000 0.0000 /
  B2 OPEN ORAT 5400.00 860.40 4694.70 1* 1* 320.0000 1688.0000 /
  B4 OPEN ORAT 4046.80 3868.60 7215.10 1* 1* 600.0000 1820.0000 /
  /

DATES                                  -- Generated : Petrel
  3 AUG 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3817.40 0.00 5222.90 1* 1* 750.0000 0.0000 /
  B2 OPEN ORAT 5400.00 860.40 4694.70 1* 1* 330.0000 1681.0000 /
  B4 OPEN ORAT 4046.80 3868.60 7215.10 1* 1* 570.0000 1819.0000 /
  /

DATES                                  -- Generated : Petrel
  4 AUG 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3817.40 0.00 5222.90 1* 1* 750.0000 0.0000 /
  B2 OPEN ORAT 5400.00 860.40 4694.70 1* 1* 330.0000 1681.0000 /
  B4 OPEN ORAT 4046.80 3868.60 7215.10 1* 1* 580.0000 1819.0000 /
  /

DATES                                  -- Generated : Petrel
  5 AUG 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3817.40 0.00 5222.90 1* 1* 750.0000 0.0000 /
  B2 OPEN ORAT 5400.00 860.40 4694.70 1* 1* 350.0000 1679.0000 /
  B4 OPEN ORAT 4046.80 3868.60 7215.10 1* 1* 560.0000 1818.0000 /
  /

DATES                                  -- Generated : Petrel
  6 AUG 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3817.40 0.00 5222.90 1* 1* 750.0000 0.0000 /
  B2 OPEN ORAT 5400.00 860.40 4694.70 1* 1* 350.0000 1679.0000 /
  B4 OPEN ORAT 4046.80 3868.60 7215.10 1* 1* 580.0000 1818.0000 /
  /

DATES                                  -- Generated : Petrel
  7 AUG 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3817.40 0.00 5222.90 1* 1* 750.0000 0.0000 /
  B2 OPEN ORAT 5400.00 860.40 4694.70 1* 1* 350.0000 1678.0000 /
  B4 OPEN ORAT 4046.80 3868.60 7215.10 1* 1* 590.0000 1821.0000 /
  /

DATES                                  -- Generated : Petrel
  8 AUG 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3817.40 0.00 5222.90 1* 1* 750.0000 0.0000 /
  B2 OPEN ORAT 5400.00 860.40 4694.70 1* 1* 350.0000 1679.0000 /
  B4 OPEN ORAT 4046.80 3868.60 7215.10 1* 1* 590.0000 1821.0000 /
  /

DATES                                  -- Generated : Petrel
  9 AUG 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3817.40 0.00 5222.90 1* 1* 750.0000 0.0000 /
  B2 OPEN ORAT 5400.00 860.40 4694.70 1* 1* 350.0000 1678.0000 /
  B4 OPEN ORAT 4046.80 3868.60 7215.10 1* 1* 600.0000 1821.0000 /
  /

DATES                                  -- Generated : Petrel
  10 AUG 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3817.40 0.00 5222.90 1* 1* 750.0000 0.0000 /
  B2 OPEN ORAT 5400.00 860.40 4694.70 1* 1* 350.0000 1678.0000 /
  B4 OPEN ORAT 4046.80 3868.60 7215.10 1* 1* 600.0000 1821.0000 /
  /

DATES                                  -- Generated : Petrel
  11 AUG 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3817.40 0.00 5222.90 1* 1* 750.0000 0.0000 /
  B2 OPEN ORAT 5400.00 860.40 4694.70 1* 1* 350.0000 1678.0000 /
  B4 OPEN ORAT 4046.80 3868.60 7215.10 1* 1* 600.0000 1820.0000 /
  /

DATES                                  -- Generated : Petrel
  12 AUG 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3817.40 0.00 5222.90 1* 1* 750.0000 0.0000 /
  B2 OPEN ORAT 3031.70 2898.20 3870.80 1* 1* 350.0000 1679.0000 /
  B4 OPEN ORAT 4046.80 3868.60 7215.10 1* 1* 600.0000 1821.0000 /
  /

DATES                                  -- Generated : Petrel
  13 AUG 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3817.40 0.00 5222.90 1* 1* 750.0000 0.0000 /
  B2 OPEN ORAT 3031.70 2898.20 3870.80 1* 1* 350.0000 1679.0000 /
  B4 OPEN ORAT 4046.80 3868.60 7215.10 1* 1* 600.0000 1821.0000 /
  /

DATES                                  -- Generated : Petrel
  14 AUG 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3817.40 0.00 5222.90 1* 1* 750.0000 0.0000 /
  B2 OPEN ORAT 3031.70 2898.20 3870.80 1* 1* 350.0000 1679.0000 /
  B4 OPEN ORAT 4046.80 3868.60 7215.10 1* 1* 600.0000 1820.0000 /
  /

DATES                                  -- Generated : Petrel
  15 AUG 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3817.40 0.00 5222.90 1* 1* 750.0000 0.0000 /
  B2 OPEN ORAT 3031.70 2898.20 3870.80 1* 1* 350.0000 1678.0000 /
  B4 OPEN ORAT 3204.60 3063.50 7476.10 1* 1* 600.0000 1820.0000 /
  /

DATES                                  -- Generated : Petrel
  16 AUG 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4279.60 0.00 4972.50 1* 1* 750.0000 0.0000 /
  B2 OPEN ORAT 3031.70 2898.20 3870.80 1* 1* 350.0000 1678.0000 /
  B4 OPEN ORAT 3204.60 3063.50 7476.10 1* 1* 600.0000 1820.0000 /
  /

DATES                                  -- Generated : Petrel
  17 AUG 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4279.60 0.00 4972.50 1* 1* 750.0000 0.0000 /
  B2 OPEN ORAT 3031.70 2898.20 3870.80 1* 1* 350.0000 1677.0000 /
  B4 OPEN ORAT 3204.60 3063.50 7476.10 1* 1* 600.0000 1819.0000 /
  /

DATES                                  -- Generated : Petrel
  18 AUG 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4279.60 0.00 4972.50 1* 1* 750.0000 0.0000 /
  B2 OPEN ORAT 3031.70 2898.20 3870.80 1* 1* 350.0000 1676.0000 /
  B4 OPEN ORAT 3204.60 3063.50 7476.10 1* 1* 600.0000 1819.0000 /
  /

DATES                                  -- Generated : Petrel
  19 AUG 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4279.60 0.00 4972.50 1* 1* 750.0000 0.0000 /
  B2 OPEN ORAT 3031.70 2898.20 3870.80 1* 1* 350.0000 1675.0000 /
  B4 OPEN ORAT 3204.60 3063.50 7476.10 1* 1* 600.0000 1818.0000 /
  /

DATES                                  -- Generated : Petrel
  20 AUG 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4279.60 0.00 4972.50 1* 1* 750.0000 0.0000 /
  B2 OPEN ORAT 3031.70 2898.20 3870.80 1* 1* 350.0000 1675.0000 /
  B4 OPEN ORAT 3204.60 3063.50 7476.10 1* 1* 600.0000 1818.0000 /
  /

DATES                                  -- Generated : Petrel
  21 AUG 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4279.60 0.00 4972.50 1* 1* 750.0000 0.0000 /
  B2 OPEN ORAT 3031.70 2898.20 3870.80 1* 1* 350.0000 1675.0000 /
  B4 OPEN ORAT 3204.60 3063.50 7476.10 1* 1* 600.0000 1818.0000 /
  /

DATES                                  -- Generated : Petrel
  22 AUG 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4279.60 0.00 4972.50 1* 1* 740.0000 0.0000 /
  B2 OPEN ORAT 3031.70 2898.20 3870.80 1* 1* 360.0000 1682.0000 /
  B4 OPEN ORAT 3204.60 3063.50 7476.10 1* 1* 600.0000 1818.0000 /
  /

DATES                                  -- Generated : Petrel
  23 AUG 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3923.00 0.00 4558.20 1* 1* 730.0000 0.0000 /
  B2 OPEN ORAT 2047.80 2936.50 1640.60 1* 1* 350.0000 1678.0000 /
  B4 OPEN ORAT 2937.50 2808.20 6853.10 1* 1* 560.0000 1832.0000 /
  /

DATES                                  -- Generated : Petrel
  24 AUG 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4279.60 0.00 4972.50 1* 1* 740.0000 0.0000 /
  B2 OPEN ORAT 2234.00 3203.40 1789.80 1* 1* 350.0000 1678.0000 /
  B4 OPEN ORAT 3204.60 3063.50 7476.10 1* 1* 580.0000 1822.0000 /
  /

DATES                                  -- Generated : Petrel
  25 AUG 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4279.60 0.00 4972.50 1* 1* 740.0000 0.0000 /
  B2 OPEN ORAT 2234.00 3203.40 1789.80 1* 1* 350.0000 1678.0000 /
  B4 OPEN ORAT 3204.60 3063.50 7476.10 1* 1* 580.0000 1823.0000 /
  /

DATES                                  -- Generated : Petrel
  26 AUG 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4279.60 0.00 4972.50 1* 1* 610.0000 0.0000 /
  B2 OPEN ORAT 2234.00 3203.40 1789.80 1* 1* 350.0000 1677.0000 /
  B4 OPEN ORAT 3861.90 3691.90 7365.20 1* 1* 580.0000 1821.0000 /
  /

DATES                                  -- Generated : Petrel
  27 AUG 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 0.0000 /
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 0.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 0.0000 /
  /

DATES                                  -- Generated : Petrel
  28 AUG 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4279.60 0.00 4972.50 1* 1* 610.0000 0.0000 /
  B2 OPEN ORAT 2234.00 3203.40 1789.80 1* 1* 350.0000 1677.0000 /
  B4 OPEN ORAT 3861.90 3691.90 7365.20 1* 1* 580.0000 1819.0000 /
  /

DATES                                  -- Generated : Petrel
  29 AUG 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3594.90 0.00 5498.10 1* 1* 600.0000 0.0000 /
  B2 OPEN ORAT 2234.00 3203.40 1789.80 1* 1* 350.0000 1677.0000 /
  B4 OPEN ORAT 3861.90 3691.90 7365.20 1* 1* 580.0000 1818.0000 /
  /

DATES                                  -- Generated : Petrel
  30 AUG 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3594.90 0.00 5498.10 1* 1* 600.0000 0.0000 /
  B2 OPEN ORAT 2234.00 3203.40 1789.80 1* 1* 350.0000 1676.0000 /
  B4 OPEN ORAT 3861.90 3691.90 7365.20 1* 1* 580.0000 1817.0000 /
  /

DATES                                  -- Generated : Petrel
  31 AUG 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3594.90 0.00 5498.10 1* 1* 600.0000 0.0000 /
  B2 OPEN ORAT 2234.00 3203.40 1789.80 1* 1* 350.0000 1675.0000 /
  B4 OPEN ORAT 3620.60 3461.20 6904.80 1* 1* 580.0000 1817.0000 /
  /

DATES                                  -- Generated : Petrel
  1 SEP 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4301.60 0.00 5798.80 1* 1* 580.0000 0.0000 /
  B2 OPEN ORAT 2673.10 2394.60 1887.70 1* 1* 350.0000 1675.0000 /
  B4 OPEN ORAT 4621.20 2759.70 7767.90 1* 1* 580.0000 1817.0000 /
  /

DATES                                  -- Generated : Petrel
  2 SEP 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4301.60 0.00 5798.80 1* 1* 540.0000 0.0000 /
  B2 OPEN ORAT 2673.10 2394.60 1887.70 1* 1* 350.0000 1674.0000 /
  B4 OPEN ORAT 4621.20 2759.70 7767.90 1* 1* 580.0000 1816.0000 /
  /

DATES                                  -- Generated : Petrel
  3 SEP 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3932.90 0.00 5983.20 1* 1* 540.0000 0.0000 /
  B2 OPEN ORAT 2673.10 2394.60 1887.70 1* 1* 350.0000 1674.0000 /
  B4 OPEN ORAT 4621.20 2759.70 7767.90 1* 1* 560.0000 1816.0000 /
  /

DATES                                  -- Generated : Petrel
  4 SEP 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3932.90 0.00 5983.20 1* 1* 540.0000 0.0000 /
  B2 OPEN ORAT 2673.10 2394.60 1887.70 1* 1* 350.0000 1673.0000 /
  B4 OPEN ORAT 4621.20 2759.70 7767.90 1* 1* 560.0000 1816.0000 /
  /

DATES                                  -- Generated : Petrel
  5 SEP 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3932.90 0.00 5983.20 1* 1* 540.0000 0.0000 /
  B2 OPEN ORAT 2673.10 2394.60 1887.70 1* 1* 350.0000 1673.0000 /
  B4 OPEN ORAT 3676.80 3293.70 7799.70 1* 1* 550.0000 1816.0000 /
  /

DATES                                  -- Generated : Petrel
  6 SEP 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3932.90 0.00 5983.20 1* 1* 540.0000 0.0000 /
  B2 OPEN ORAT 2673.10 2394.60 1887.70 1* 1* 350.0000 1672.0000 /
  B4 OPEN ORAT 3676.80 3293.70 7799.70 1* 1* 560.0000 1814.0000 /
  /

DATES                                  -- Generated : Petrel
  7 SEP 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3932.90 0.00 5983.20 1* 1* 540.0000 0.0000 /
  B2 OPEN ORAT 4127.90 4706.20 1722.90 1* 1* 350.0000 1672.0000 /
  B4 OPEN ORAT 3676.80 3293.70 7799.70 1* 1* 560.0000 1814.0000 /
  /

DATES                                  -- Generated : Petrel
  8 SEP 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5047.20 0.00 5750.10 1* 1* 540.0000 0.0000 /
  B2 OPEN ORAT 4127.90 4706.20 1722.90 1* 1* 350.0000 1671.0000 /
  B4 OPEN ORAT 3676.80 3293.70 7799.70 1* 1* 560.0000 1812.0000 /
  /

DATES                                  -- Generated : Petrel
  9 SEP 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5047.20 0.00 5750.10 1* 1* 540.0000 0.0000 /
  B2 OPEN ORAT 4127.90 4706.20 1722.90 1* 1* 350.0000 1671.0000 /
  B4 OPEN ORAT 3676.80 3293.70 7799.70 1* 1* 560.0000 1812.0000 /
  /

DATES                                  -- Generated : Petrel
  10 SEP 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5047.20 0.00 5750.10 1* 1* 540.0000 0.0000 /
  B2 OPEN ORAT 4127.90 4706.20 1722.90 1* 1* 350.0000 1670.0000 /
  B4 OPEN ORAT 3676.80 3293.70 7799.70 1* 1* 560.0000 1813.0000 /
  /

DATES                                  -- Generated : Petrel
  11 SEP 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5047.20 0.00 5750.10 1* 1* 540.0000 0.0000 /
  B2 OPEN ORAT 4127.90 4706.20 1722.90 1* 1* 350.0000 1670.0000 /
  B4 OPEN ORAT 3676.80 3293.70 7799.70 1* 1* 560.0000 1813.0000 /
  /

DATES                                  -- Generated : Petrel
  12 SEP 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5047.20 0.00 5750.10 1* 1* 540.0000 0.0000 /
  B2 OPEN ORAT 4127.90 4706.20 1722.90 1* 1* 350.0000 1669.0000 /
  B4 OPEN ORAT 3676.80 3293.70 7799.70 1* 1* 560.0000 1813.0000 /
  /

DATES                                  -- Generated : Petrel
  13 SEP 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5047.20 0.00 5750.10 1* 1* 540.0000 0.0000 /
  B2 OPEN ORAT 4127.90 4706.20 1722.90 1* 1* 350.0000 1669.0000 /
  B4 OPEN ORAT 1876.70 1681.10 3981.10 1* 1* 1250.0000 1867.0000 /
  /

DATES                                  -- Generated : Petrel
  14 SEP 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5047.20 0.00 5750.10 1* 1* 540.0000 0.0000 /
  B2 OPEN ORAT 4127.90 4706.20 1722.90 1* 1* 350.0000 1669.0000 /
  B4 OPEN ORAT 3676.80 3293.70 7799.70 1* 1* 680.0000 1827.0000 /
  /

DATES                                  -- Generated : Petrel
  15 SEP 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5047.20 0.00 5750.10 1* 1* 540.0000 0.0000 /
  B2 OPEN ORAT 4127.90 4706.20 1722.90 1* 1* 350.0000 1668.0000 /
  B4 OPEN ORAT 3676.80 3293.70 7799.70 1* 1* 580.0000 1818.0000 /
  /

DATES                                  -- Generated : Petrel
  16 SEP 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5047.20 0.00 5750.10 1* 1* 540.0000 0.0000 /
  B2 OPEN ORAT 4127.90 4706.20 1722.90 1* 1* 350.0000 1668.0000 /
  B4 OPEN ORAT 3277.40 2935.90 8076.90 1* 1* 590.0000 1816.0000 /
  /

DATES                                  -- Generated : Petrel
  17 SEP 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5047.20 0.00 5750.10 1* 1* 540.0000 0.0000 /
  B2 OPEN ORAT 2831.70 3804.90 5596.50 1* 1* 350.0000 1667.0000 /
  B4 OPEN ORAT 3277.40 2935.90 8076.90 1* 1* 600.0000 1817.0000 /
  /

DATES                                  -- Generated : Petrel
  18 SEP 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4842.40 0.00 5499.10 1* 1* 540.0000 0.0000 /
  B2 OPEN ORAT 2831.70 3804.90 5596.50 1* 1* 350.0000 1667.0000 /
  B4 OPEN ORAT 3277.40 2935.90 8076.90 1* 1* 600.0000 1816.0000 /
  /

DATES                                  -- Generated : Petrel
  19 SEP 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4842.40 0.00 5499.10 1* 1* 540.0000 0.0000 /
  B2 OPEN ORAT 2831.70 3804.90 5596.50 1* 1* 350.0000 1666.0000 /
  B4 OPEN ORAT 3277.40 2935.90 8076.90 1* 1* 600.0000 1815.0000 /
  /

DATES                                  -- Generated : Petrel
  20 SEP 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4842.40 0.00 5499.10 1* 1* 540.0000 0.0000 /
  B2 OPEN ORAT 2831.70 3804.90 5596.50 1* 1* 350.0000 1666.0000 /
  B4 OPEN ORAT 3277.40 2935.90 8076.90 1* 1* 600.0000 1815.0000 /
  /

DATES                                  -- Generated : Petrel
  21 SEP 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4842.40 0.00 5499.10 1* 1* 540.0000 0.0000 /
  B2 OPEN ORAT 2831.70 3804.90 5596.50 1* 1* 350.0000 1666.0000 /
  B4 OPEN ORAT 3103.30 2779.90 7920.50 1* 1* 600.0000 1815.0000 /
  /

DATES                                  -- Generated : Petrel
  22 SEP 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4842.40 0.00 5499.10 1* 1* 540.0000 0.0000 /
  B2 OPEN ORAT 2195.90 2950.50 2252.80 1* 1* 350.0000 1665.0000 /
  B4 OPEN ORAT 2812.40 2519.30 7178.00 1* 1* 700.0000 1838.0000 /
  /

DATES                                  -- Generated : Petrel
  23 SEP 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4388.40 0.00 4983.60 1* 1* 550.0000 0.0000 /
  B2 OPEN ORAT 2195.90 2950.50 2252.80 1* 1* 350.0000 1665.0000 /
  B4 OPEN ORAT 3103.30 2779.90 7920.50 1* 1* 600.0000 1821.0000 /
  /

DATES                                  -- Generated : Petrel
  24 SEP 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4842.40 0.00 5499.10 1* 1* 550.0000 0.0000 /
  B2 OPEN ORAT 2195.90 2950.50 2252.80 1* 1* 350.0000 1665.0000 /
  B4 OPEN ORAT 3103.30 2779.90 7920.50 1* 1* 600.0000 1821.0000 /
  /

DATES                                  -- Generated : Petrel
  25 SEP 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4842.40 0.00 5499.10 1* 1* 550.0000 0.0000 /
  B2 OPEN ORAT 2195.90 2950.50 2252.80 1* 1* 350.0000 1665.0000 /
  B4 OPEN ORAT 3103.30 2779.90 7920.50 1* 1* 600.0000 1821.0000 /
  /

DATES                                  -- Generated : Petrel
  26 SEP 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4842.40 0.00 5499.10 1* 1* 550.0000 0.0000 /
  B2 OPEN ORAT 2195.90 2950.50 2252.80 1* 1* 350.0000 1664.0000 /
  B4 OPEN ORAT 3103.30 2779.90 7920.50 1* 1* 600.0000 1821.0000 /
  /

DATES                                  -- Generated : Petrel
  27 SEP 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4842.40 0.00 5499.10 1* 1* 640.0000 0.0000 /
  B2 OPEN ORAT 2195.90 2950.50 2252.80 1* 1* 350.0000 1664.0000 /
  B4 OPEN ORAT 3103.30 2779.90 7920.50 1* 1* 600.0000 1821.0000 /
  /

DATES                                  -- Generated : Petrel
  28 SEP 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4842.40 0.00 5499.10 1* 1* 630.0000 0.0000 /
  B2 OPEN ORAT 2195.90 2950.50 2252.80 1* 1* 350.0000 1663.0000 /
  B4 OPEN ORAT 3103.30 2779.90 7920.50 1* 1* 600.0000 1821.0000 /
  /

DATES                                  -- Generated : Petrel
  29 SEP 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4842.40 0.00 5499.10 1* 1* 630.0000 0.0000 /
  B2 OPEN ORAT 2195.90 2950.50 2252.80 1* 1* 350.0000 1663.0000 /
  B4 OPEN ORAT 3103.30 2779.90 7920.50 1* 1* 600.0000 1821.0000 /
  /

DATES                                  -- Generated : Petrel
  30 SEP 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4842.40 0.00 5499.10 1* 1* 630.0000 0.0000 /
  B2 OPEN ORAT 2195.90 2950.50 2252.80 1* 1* 350.0000 1662.0000 /
  B4 OPEN ORAT 3103.30 2779.90 7920.50 1* 1* 600.0000 1823.0000 /
  /

DATES                                  -- Generated : Petrel
  1 OCT 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4590.40 0.00 5339.10 1* 1* 630.0000 0.0000 /
  B2 OPEN ORAT 2121.10 3214.50 2379.70 1* 1* 350.0000 1662.0000 /
  B4 OPEN ORAT 2997.60 3028.50 8366.70 1* 1* 600.0000 1823.0000 /
  /

DATES                                  -- Generated : Petrel
  2 OCT 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4590.40 0.00 5339.10 1* 1* 620.0000 0.0000 /
  B2 OPEN ORAT 2121.10 3214.50 2379.70 1* 1* 350.0000 1662.0000 /
  B4 OPEN ORAT 2997.60 3028.50 8366.70 1* 1* 600.0000 1822.0000 /
  /

DATES                                  -- Generated : Petrel
  3 OCT 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4305.50 0.00 5259.00 1* 1* 610.0000 0.0000 /
  B2 OPEN ORAT 2121.10 3214.50 2379.70 1* 1* 350.0000 1662.0000 /
  B4 OPEN ORAT 2776.00 3038.40 8278.60 1* 1* 600.0000 1822.0000 /
  /

DATES                                  -- Generated : Petrel
  4 OCT 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4305.50 0.00 5259.00 1* 1* 550.0000 0.0000 /
  B2 OPEN ORAT 2579.90 5059.80 2288.70 1* 1* 350.0000 1661.0000 /
  B4 OPEN ORAT 2776.00 700.00 8278.60 1* 1* 600.0000 1822.0000 /
  /

DATES                                  -- Generated : Petrel
  5 OCT 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4305.50 0.00 5259.00 1* 1* 550.0000 0.0000 /
  B2 OPEN ORAT 2579.90 5059.80 2288.70 1* 1* 350.0000 1661.0000 /
  B4 OPEN ORAT 2776.00 3038.40 8278.60 1* 1* 600.0000 1822.0000 /
  /

DATES                                  -- Generated : Petrel
  6 OCT 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4305.50 0.00 5259.00 1* 1* 550.0000 0.0000 /
  B2 OPEN ORAT 2579.90 5059.80 2288.70 1* 1* 350.0000 1661.0000 /
  B4 OPEN ORAT 2776.00 3038.40 8278.60 1* 1* 600.0000 1821.0000 /
  /

DATES                                  -- Generated : Petrel
  7 OCT 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4305.50 0.00 5259.00 1* 1* 550.0000 0.0000 /
  B2 OPEN ORAT 2579.90 5059.80 2288.70 1* 1* 350.0000 1660.0000 /
  B4 OPEN ORAT 2776.00 3038.40 8278.60 1* 1* 600.0000 1820.0000 /
  /

DATES                                  -- Generated : Petrel
  8 OCT 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4305.50 0.00 5259.00 1* 1* 550.0000 0.0000 /
  B2 OPEN ORAT 2579.90 5059.80 2288.70 1* 1* 350.0000 1660.0000 /
  B4 OPEN ORAT 2776.00 3038.40 8278.60 1* 1* 600.0000 1821.0000 /
  /

DATES                                  -- Generated : Petrel
  9 OCT 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4305.50 0.00 5259.00 1* 1* 540.0000 0.0000 /
  B2 OPEN ORAT 2579.90 5059.80 2288.70 1* 1* 350.0000 1660.0000 /
  B4 OPEN ORAT 2776.00 3038.40 8278.60 1* 1* 600.0000 1821.0000 /
  /

DATES                                  -- Generated : Petrel
  10 OCT 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4305.50 0.00 5259.00 1* 1* 540.0000 0.0000 /
  B2 OPEN ORAT 2579.90 5059.80 2288.70 1* 1* 350.0000 1660.0000 /
  B4 OPEN ORAT 2776.00 3038.40 8278.60 1* 1* 600.0000 1821.0000 /
  /

DATES                                  -- Generated : Petrel
  11 OCT 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4305.50 0.00 5259.00 1* 1* 540.0000 0.0000 /
  B2 OPEN ORAT 3469.80 4284.60 2126.50 1* 1* 350.0000 1659.0000 /
  B4 OPEN ORAT 2776.00 3038.40 8278.60 1* 1* 600.0000 1820.0000 /
  /

DATES                                  -- Generated : Petrel
  12 OCT 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4305.50 0.00 5259.00 1* 1* 540.0000 0.0000 /
  B2 OPEN ORAT 3469.80 4284.60 2126.50 1* 1* 350.0000 1659.0000 /
  B4 OPEN ORAT 3956.70 2665.10 8597.10 1* 1* 600.0000 1822.0000 /
  /

DATES                                  -- Generated : Petrel
  13 OCT 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4305.50 0.00 5259.00 1* 1* 525.0000 0.0000 /
  B2 OPEN ORAT 3469.80 4284.60 2126.50 1* 1* 350.0000 1659.0000 /
  B4 OPEN ORAT 3956.70 2665.10 8597.10 1* 1* 600.0000 1821.0000 /
  /

DATES                                  -- Generated : Petrel
  14 OCT 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4305.50 0.00 5259.00 1* 1* 515.0000 0.0000 /
  B2 OPEN ORAT 3469.80 4284.60 2126.50 1* 1* 350.0000 1658.0000 /
  B4 OPEN ORAT 3956.70 2665.10 8597.10 1* 1* 600.0000 1821.0000 /
  /

DATES                                  -- Generated : Petrel
  15 OCT 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4305.50 0.00 5259.00 1* 1* 525.0000 0.0000 /
  B2 OPEN ORAT 3469.80 4284.60 2126.50 1* 1* 340.0000 1658.0000 /
  B4 OPEN ORAT 3956.70 2665.10 8597.10 1* 1* 600.0000 1821.0000 /
  /

DATES                                  -- Generated : Petrel
  16 OCT 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4305.50 0.00 5259.00 1* 1* 530.0000 0.0000 /
  B2 OPEN ORAT 3469.80 4284.60 2126.50 1* 1* 340.0000 1658.0000 /
  B4 OPEN ORAT 3956.70 2665.10 8597.10 1* 1* 600.0000 1820.0000 /
  /

DATES                                  -- Generated : Petrel
  17 OCT 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4305.50 0.00 5259.00 1* 1* 525.0000 0.0000 /
  B2 OPEN ORAT 3469.80 4284.60 2126.50 1* 1* 340.0000 1657.0000 /
  B4 OPEN ORAT 3956.70 2665.10 8597.10 1* 1* 600.0000 1820.0000 /
  /

DATES                                  -- Generated : Petrel
  18 OCT 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4305.50 0.00 5259.00 1* 1* 520.0000 0.0000 /
  B2 OPEN ORAT 3469.80 4284.60 2126.50 1* 1* 340.0000 1657.0000 /
  B4 OPEN ORAT 3956.70 2665.10 8597.10 1* 1* 600.0000 1821.0000 /
  /

DATES                                  -- Generated : Petrel
  19 OCT 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4305.50 0.00 5259.00 1* 1* 570.0000 0.0000 /
  B2 OPEN ORAT 3469.80 4284.60 2126.50 1* 1* 330.0000 1657.0000 /
  B4 OPEN ORAT 3956.70 2665.10 8597.10 1* 1* 600.0000 1820.0000 /
  /

DATES                                  -- Generated : Petrel
  20 OCT 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4249.90 0.00 5293.60 1* 1* 580.0000 0.0000 /
  B2 OPEN ORAT 2226.70 4367.10 2320.40 1* 1* 340.0000 1657.0000 /
  B4 OPEN ORAT 3956.70 2665.10 8597.10 1* 1* 590.0000 1820.0000 /
  /

DATES                                  -- Generated : Petrel
  21 OCT 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4249.90 0.00 5293.60 1* 1* 570.0000 0.0000 /
  B2 OPEN ORAT 2226.70 4367.10 2320.40 1* 1* 330.0000 1657.0000 /
  B4 OPEN ORAT 3013.40 3298.20 8278.60 1* 1* 600.0000 1820.0000 /
  /

DATES                                  -- Generated : Petrel
  22 OCT 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4249.90 0.00 5293.60 1* 1* 570.0000 0.0000 /
  B2 OPEN ORAT 3380.10 3829.00 2204.70 1* 1* 340.0000 1656.0000 /
  B4 OPEN ORAT 3783.30 2658.00 8366.70 1* 1* 590.0000 1820.0000 /
  /

DATES                                  -- Generated : Petrel
  23 OCT 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4249.90 0.00 5293.60 1* 1* 570.0000 0.0000 /
  B2 OPEN ORAT 3380.10 3829.00 2204.70 1* 1* 330.0000 1656.0000 /
  B4 OPEN ORAT 3783.30 2658.00 8366.70 1* 1* 590.0000 1820.0000 /
  /

DATES                                  -- Generated : Petrel
  24 OCT 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4249.90 0.00 5293.60 1* 1* 560.0000 0.0000 /
  B2 OPEN ORAT 3098.40 3509.90 2020.90 1* 1* 340.0000 1662.0000 /
  B4 OPEN ORAT 3783.30 2658.00 8366.70 1* 1* 590.0000 1821.0000 /
  /

DATES                                  -- Generated : Petrel
  25 OCT 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4249.90 0.00 5293.60 1* 1* 570.0000 0.0000 /
  B2 OPEN ORAT 3098.40 3509.90 2020.90 1* 1* 350.0000 1663.0000 /
  B4 OPEN ORAT 3783.30 2658.00 8366.70 1* 1* 590.0000 1821.0000 /
  /

DATES                                  -- Generated : Petrel
  26 OCT 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4249.90 0.00 5293.60 1* 1* 570.0000 0.0000 /
  B2 OPEN ORAT 3380.10 3829.00 2204.70 1* 1* 340.0000 1658.0000 /
  B4 OPEN ORAT 3783.30 2658.00 8366.70 1* 1* 590.0000 1825.0000 /
  /

DATES                                  -- Generated : Petrel
  27 OCT 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4249.90 0.00 5293.60 1* 1* 570.0000 0.0000 /
  B2 OPEN ORAT 3380.10 3829.00 2204.70 1* 1* 340.0000 1658.0000 /
  B4 OPEN ORAT 3783.30 2658.00 8366.70 1* 1* 590.0000 1825.0000 /
  /

DATES                                  -- Generated : Petrel
  28 OCT 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4249.90 0.00 5293.60 1* 1* 560.0000 0.0000 /
  B2 OPEN ORAT 3380.10 3829.00 2204.70 1* 1* 340.0000 1658.0000 /
  B4 OPEN ORAT 3783.30 2658.00 8366.70 1* 1* 590.0000 1824.0000 /
  /

DATES                                  -- Generated : Petrel
  29 OCT 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4249.90 0.00 5293.60 1* 1* 560.0000 0.0000 /
  B2 OPEN ORAT 3380.10 3829.00 2204.70 1* 1* 340.0000 1658.0000 /
  B4 OPEN ORAT 3783.30 2658.00 8366.70 1* 1* 590.0000 1824.0000 /
  /

DATES                                  -- Generated : Petrel
  30 OCT 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4249.90 0.00 5293.60 1* 1* 560.0000 0.0000 /
  B2 OPEN ORAT 3380.10 3829.00 2204.70 1* 1* 340.0000 1657.0000 /
  B4 OPEN ORAT 3783.30 2658.00 8366.70 1* 1* 590.0000 1827.0000 /
  /

DATES                                  -- Generated : Petrel
  31 OCT 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4249.90 0.00 5293.60 1* 1* 560.0000 0.0000 /
  B2 OPEN ORAT 3380.10 3829.00 2204.70 1* 1* 340.0000 1657.0000 /
  B4 OPEN ORAT 2522.20 1772.00 5577.80 1* 1* 590.0000 1825.0000 /
  /

DATES                                  -- Generated : Petrel
  1 NOV 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4280.80 0.00 5423.70 1* 1* 560.0000 0.0000 /
  B2 OPEN ORAT 3404.70 4193.40 2258.90 1* 1* 340.0000 1657.0000 /
  B4 OPEN ORAT 3810.70 2911.00 8572.40 1* 1* 590.0000 1824.0000 /
  /

DATES                                  -- Generated : Petrel
  2 NOV 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4280.80 0.00 5423.70 1* 1* 560.0000 0.0000 /
  B2 OPEN ORAT 3404.70 4193.40 2258.90 1* 1* 340.0000 1657.0000 /
  B4 OPEN ORAT 3376.10 3034.30 8520.70 1* 1* 590.0000 1824.0000 /
  /

DATES                                  -- Generated : Petrel
  3 NOV 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4818.60 0.00 5388.30 1* 1* 560.0000 0.0000 /
  B2 OPEN ORAT 3404.70 4193.40 2258.90 1* 1* 340.0000 1657.0000 /
  B4 OPEN ORAT 1477.10 1327.50 3727.80 1* 1* 590.0000 1824.0000 /
  /

DATES                                  -- Generated : Petrel
  4 NOV 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4818.60 0.00 5388.30 1* 1* 560.0000 0.0000 /
  B2 OPEN ORAT 3392.10 4374.20 2377.40 1* 1* 340.0000 1657.0000 /
  B4 OPEN ORAT 3376.10 3034.30 8520.70 1* 1* 590.0000 1825.0000 /
  /

DATES                                  -- Generated : Petrel
  5 NOV 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4818.60 0.00 5388.30 1* 1* 560.0000 0.0000 /
  B2 OPEN ORAT 3392.10 4374.20 2377.40 1* 1* 340.0000 1657.0000 /
  B4 OPEN ORAT 1167.60 1049.40 2946.70 1* 1* 580.0000 1824.0000 /
  /

DATES                                  -- Generated : Petrel
  6 NOV 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4818.60 0.00 5388.30 1* 1* 560.0000 0.0000 /
  B2 OPEN ORAT 3392.10 4374.20 2377.40 1* 1* 340.0000 1656.0000 /
  B4 OPEN ORAT 3376.10 3034.30 8520.70 1* 1* 580.0000 1823.0000 /
  /

DATES                                  -- Generated : Petrel
  7 NOV 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4818.60 0.00 5388.30 1* 1* 560.0000 0.0000 /
  B2 OPEN ORAT 3392.10 4374.20 2377.40 1* 1* 340.0000 1656.0000 /
  B4 OPEN ORAT 3376.10 3034.30 8520.70 1* 1* 580.0000 1824.0000 /
  /

DATES                                  -- Generated : Petrel
  8 NOV 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4818.60 0.00 5388.30 1* 1* 560.0000 0.0000 /
  B2 OPEN ORAT 3392.10 4374.20 2377.40 1* 1* 340.0000 1656.0000 /
  B4 OPEN ORAT 3376.10 3034.30 8520.70 1* 1* 580.0000 1823.0000 /
  /

DATES                                  -- Generated : Petrel
  9 NOV 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4818.60 0.00 5388.30 1* 1* 560.0000 0.0000 /
  B2 OPEN ORAT 3392.10 4374.20 2377.40 1* 1* 340.0000 1656.0000 /
  B4 OPEN ORAT 3540.50 3182.10 8556.10 1* 1* 580.0000 1824.0000 /
  /

DATES                                  -- Generated : Petrel
  10 NOV 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4818.60 0.00 5388.30 1* 1* 560.0000 0.0000 /
  B2 OPEN ORAT 2914.70 3913.30 1852.50 1* 1* 340.0000 1655.0000 /
  B4 OPEN ORAT 3540.50 3182.10 8556.10 1* 1* 580.0000 1825.0000 /
  /

DATES                                  -- Generated : Petrel
  11 NOV 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4818.60 0.00 5388.30 1* 1* 560.0000 0.0000 /
  B2 OPEN ORAT 2914.70 3913.30 1852.50 1* 1* 340.0000 1655.0000 /
  B4 OPEN ORAT 3540.50 3182.10 8556.10 1* 1* 580.0000 1822.0000 /
  /

DATES                                  -- Generated : Petrel
  12 NOV 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4818.60 0.00 5388.30 1* 1* 560.0000 0.0000 /
  B2 OPEN ORAT 2914.70 3913.30 1852.50 1* 1* 340.0000 1655.0000 /
  B4 OPEN ORAT 3540.50 3182.10 8556.10 1* 1* 580.0000 1822.0000 /
  /

DATES                                  -- Generated : Petrel
  13 NOV 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4818.60 0.00 5388.30 1* 1* 560.0000 0.0000 /
  B2 OPEN ORAT 2914.70 3913.30 1852.50 1* 1* 340.0000 1655.0000 /
  B4 OPEN ORAT 3540.50 3182.10 8556.10 1* 1* 580.0000 1824.0000 /
  /

DATES                                  -- Generated : Petrel
  14 NOV 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4818.60 0.00 5388.30 1* 1* 550.0000 0.0000 /
  B2 OPEN ORAT 2914.70 3913.30 1852.50 1* 1* 340.0000 1654.0000 /
  B4 OPEN ORAT 3540.50 3182.10 8556.10 1* 1* 570.0000 1826.0000 /
  /

DATES                                  -- Generated : Petrel
  15 NOV 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4818.60 0.00 5388.30 1* 1* 550.0000 0.0000 /
  B2 OPEN ORAT 2914.70 3913.30 1852.50 1* 1* 340.0000 1654.0000 /
  B4 OPEN ORAT 3540.50 3182.10 8556.10 1* 1* 580.0000 1827.0000 /
  /

DATES                                  -- Generated : Petrel
  16 NOV 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4818.60 0.00 5388.30 1* 1* 560.0000 0.0000 /
  B2 OPEN ORAT 2914.70 3913.30 1852.50 1* 1* 340.0000 1654.0000 /
  B4 OPEN ORAT 3540.50 3182.10 8556.10 1* 1* 580.0000 1826.0000 /
  /

DATES                                  -- Generated : Petrel
  17 NOV 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4818.60 0.00 5388.30 1* 1* 550.0000 0.0000 /
  B2 OPEN ORAT 2914.70 3913.30 1852.50 1* 1* 330.0000 1654.0000 /
  B4 OPEN ORAT 3257.70 2927.90 7872.70 1* 1* 580.0000 1827.0000 /
  /

DATES                                  -- Generated : Petrel
  18 NOV 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4818.60 0.00 5388.30 1* 1* 550.0000 0.0000 /
  B2 OPEN ORAT 2914.70 3913.30 1852.50 1* 1* 330.0000 1654.0000 /
  B4 OPEN ORAT 3075.80 3716.70 8336.20 1* 1* 600.0000 1830.0000 /
  /

DATES                                  -- Generated : Petrel
  19 NOV 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4818.60 0.00 5388.30 1* 1* 520.0000 0.0000 /
  B2 OPEN ORAT 2393.20 4289.20 2112.90 1* 1* 340.0000 1652.0000 /
  B4 OPEN ORAT 2819.50 3406.90 7641.50 1* 1* 850.0000 1840.0000 /
  /

DATES                                  -- Generated : Petrel
  20 NOV 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4818.60 0.00 5388.30 1* 1* 520.0000 0.0000 /
  B2 OPEN ORAT 2393.20 4289.20 2112.90 1* 1* 330.0000 1652.0000 /
  B4 OPEN ORAT 3075.80 3716.70 8336.20 1* 1* 800.0000 1840.0000 /
  /

DATES                                  -- Generated : Petrel
  21 NOV 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4818.60 0.00 5388.30 1* 1* 510.0000 0.0000 /
  B2 OPEN ORAT 2393.20 4289.20 2112.90 1* 1* 330.0000 1652.0000 /
  B4 OPEN ORAT 3075.80 3716.70 8336.20 1* 1* 800.0000 1840.0000 /
  /

DATES                                  -- Generated : Petrel
  22 NOV 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4818.60 0.00 5388.30 1* 1* 520.0000 0.0000 /
  B2 OPEN ORAT 2393.20 4289.20 2112.90 1* 1* 330.0000 1652.0000 /
  B4 OPEN ORAT 3075.80 3716.70 8336.20 1* 1* 800.0000 1840.0000 /
  /

DATES                                  -- Generated : Petrel
  23 NOV 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4818.60 0.00 5388.30 1* 1* 520.0000 0.0000 /
  B2 OPEN ORAT 2393.20 4289.20 2112.90 1* 1* 300.0000 1649.0000 /
  B4 OPEN ORAT 3011.80 3639.20 8162.60 1* 1* 750.0000 1836.0000 /
  /

DATES                                  -- Generated : Petrel
  24 NOV 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4818.60 0.00 5388.30 1* 1* 510.0000 0.0000 /
  B2 OPEN ORAT 2393.20 4289.20 2112.90 1* 1* 290.0000 1649.0000 /
  B4 OPEN ORAT 3075.80 3716.70 8336.20 1* 1* 730.0000 1836.0000 /
  /

DATES                                  -- Generated : Petrel
  25 NOV 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4818.60 0.00 5388.30 1* 1* 510.0000 0.0000 /
  B2 OPEN ORAT 3143.90 3955.90 2128.10 1* 1* 290.0000 1648.0000 /
  B4 OPEN ORAT 3075.80 3716.70 8336.20 1* 1* 730.0000 1838.0000 /
  /

DATES                                  -- Generated : Petrel
  26 NOV 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4818.60 0.00 5388.30 1* 1* 510.0000 0.0000 /
  B2 OPEN ORAT 3143.90 3955.90 2128.10 1* 1* 290.0000 1648.0000 /
  B4 OPEN ORAT 3075.80 3716.70 8336.20 1* 1* 730.0000 1838.0000 /
  /

DATES                                  -- Generated : Petrel
  27 NOV 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4818.60 0.00 5388.30 1* 1* 510.0000 0.0000 /
  B2 OPEN ORAT 3143.90 3955.90 2128.10 1* 1* 290.0000 1647.0000 /
  B4 OPEN ORAT 3075.80 3716.70 8336.20 1* 1* 730.0000 1840.0000 /
  /

DATES                                  -- Generated : Petrel
  28 NOV 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4818.60 0.00 5388.30 1* 1* 510.0000 0.0000 /
  B2 OPEN ORAT 3143.90 3955.90 2128.10 1* 1* 290.0000 1647.0000 /
  B4 OPEN ORAT 3075.80 3716.70 8336.20 1* 1* 730.0000 1840.0000 /
  /

DATES                                  -- Generated : Petrel
  29 NOV 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4818.60 0.00 5388.30 1* 1* 510.0000 0.0000 /
  B2 OPEN ORAT 3143.90 3955.90 2128.10 1* 1* 290.0000 1647.0000 /
  B4 OPEN ORAT 3075.80 3716.70 8336.20 1* 1* 730.0000 1840.0000 /
  /

DATES                                  -- Generated : Petrel
  30 NOV 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4818.60 0.00 5388.30 1* 1* 510.0000 0.0000 /
  B2 OPEN ORAT 1310.00 1648.30 886.70 1* 1* 290.0000 1647.0000 /
  B4 OPEN ORAT 3075.80 3716.70 8336.20 1* 1* 720.0000 1840.0000 /
  /

DATES                                  -- Generated : Petrel
  1 DEC 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4656.60 0.00 5601.90 1* 1* 510.0000 0.0000 /
  B2 OPEN ORAT 3038.20 3610.50 2212.50 1* 1* 280.0000 1647.0000 /
  B4 OPEN ORAT 2582.40 3469.90 8273.80 1* 1* 720.0000 1840.0000 /
  /

DATES                                  -- Generated : Petrel
  2 DEC 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4656.60 0.00 5601.90 1* 1* 550.0000 0.0000 /
  B2 OPEN ORAT 2843.30 3982.30 2075.60 1* 1* 280.0000 1647.0000 /
  B4 OPEN ORAT 2582.40 3469.90 8273.80 1* 1* 720.0000 1840.0000 /
  /

DATES                                  -- Generated : Petrel
  3 DEC 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4656.60 0.00 5601.90 1* 1* 550.0000 0.0000 /
  B2 OPEN ORAT 2843.30 3982.30 2075.60 1* 1* 280.0000 1647.0000 /
  B4 OPEN ORAT 2582.40 3469.90 8273.80 1* 1* 720.0000 1840.0000 /
  /

DATES                                  -- Generated : Petrel
  4 DEC 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4656.60 0.00 5601.90 1* 1* 550.0000 0.0000 /
  B2 OPEN ORAT 2843.30 3982.30 2075.60 1* 1* 280.0000 1647.0000 /
  B4 OPEN ORAT 2582.40 3469.90 8273.80 1* 1* 720.0000 1840.0000 /
  /

DATES                                  -- Generated : Petrel
  5 DEC 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4656.60 0.00 5601.90 1* 1* 550.0000 0.0000 /
  B2 OPEN ORAT 2843.30 3982.30 2075.60 1* 1* 280.0000 1646.0000 /
  B4 OPEN ORAT 2582.40 3469.90 8273.80 1* 1* 720.0000 1840.0000 /
  /

DATES                                  -- Generated : Petrel
  6 DEC 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4656.60 0.00 5601.90 1* 1* 550.0000 0.0000 /
  B2 OPEN ORAT 2843.30 3982.30 2075.60 1* 1* 280.0000 1645.0000 /
  B4 OPEN ORAT 2582.40 3469.90 8273.80 1* 1* 720.0000 1840.0000 /
  /

DATES                                  -- Generated : Petrel
  7 DEC 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4656.60 0.00 5601.90 1* 1* 550.0000 0.0000 /
  B2 OPEN ORAT 2807.60 3932.40 2014.50 1* 1* 280.0000 1645.0000 /
  B4 OPEN ORAT 2582.40 3469.90 8273.80 1* 1* 720.0000 1839.0000 /
  /

DATES                                  -- Generated : Petrel
  8 DEC 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5563.90 0.00 5166.80 1* 1* 550.0000 0.0000 /
  B2 OPEN ORAT 2807.60 3932.40 2014.50 1* 1* 280.0000 1645.0000 /
  B4 OPEN ORAT 2582.40 3469.90 8273.80 1* 1* 720.0000 1840.0000 /
  /

DATES                                  -- Generated : Petrel
  9 DEC 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5563.90 0.00 5166.80 1* 1* 550.0000 0.0000 /
  B2 OPEN ORAT 2807.60 3932.40 2014.50 1* 1* 280.0000 1645.0000 /
  B4 OPEN ORAT 2619.30 2989.20 8466.60 1* 1* 720.0000 1840.0000 /
  /

DATES                                  -- Generated : Petrel
  10 DEC 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5563.90 0.00 5166.80 1* 1* 550.0000 0.0000 /
  B2 OPEN ORAT 2807.60 3932.40 2014.50 1* 1* 280.0000 1645.0000 /
  B4 OPEN ORAT 2619.30 2989.20 8466.60 1* 1* 720.0000 1840.0000 /
  /

DATES                                  -- Generated : Petrel
  11 DEC 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5563.90 0.00 5166.80 1* 1* 550.0000 0.0000 /
  B2 OPEN ORAT 2807.60 3932.40 2014.50 1* 1* 280.0000 1645.0000 /
  B4 OPEN ORAT 2619.30 2989.20 8466.60 1* 1* 720.0000 1840.0000 /
  /

DATES                                  -- Generated : Petrel
  12 DEC 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5563.90 0.00 5166.80 1* 1* 540.0000 0.0000 /
  B2 OPEN ORAT 2807.60 3932.40 2014.50 1* 1* 270.0000 1645.0000 /
  B4 OPEN ORAT 2619.30 2989.20 8466.60 1* 1* 700.0000 1840.0000 /
  /

DATES                                  -- Generated : Petrel
  13 DEC 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5563.90 0.00 5166.80 1* 1* 540.0000 0.0000 /
  B2 OPEN ORAT 2807.60 3932.40 2014.50 1* 1* 260.0000 1645.0000 /
  B4 OPEN ORAT 2619.30 2989.20 8466.60 1* 1* 650.0000 1838.0000 /
  /

DATES                                  -- Generated : Petrel
  14 DEC 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5563.90 0.00 5166.80 1* 1* 540.0000 0.0000 /
  B2 OPEN ORAT 2807.60 3932.40 2014.50 1* 1* 260.0000 1645.0000 /
  B4 OPEN ORAT 2619.30 2989.20 8466.60 1* 1* 650.0000 1837.0000 /
  /

DATES                                  -- Generated : Petrel
  15 DEC 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5563.90 0.00 5166.80 1* 1* 500.0000 0.0000 /
  B2 OPEN ORAT 2449.20 4247.10 2045.00 1* 1* 260.0000 1644.0000 /
  B4 OPEN ORAT 2619.30 2989.20 8466.60 1* 1* 640.0000 1837.0000 /
  /

DATES                                  -- Generated : Petrel
  16 DEC 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5563.90 0.00 5166.80 1* 1* 500.0000 0.0000 /
  B2 OPEN ORAT 2449.20 4247.10 2045.00 1* 1* 260.0000 1644.0000 /
  B4 OPEN ORAT 2702.40 3211.40 8955.50 1* 1* 650.0000 1836.0000 /
  /

DATES                                  -- Generated : Petrel
  17 DEC 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5601.40 0.00 5192.10 1* 1* 510.0000 0.0000 /
  B2 OPEN ORAT 2449.20 4247.10 2045.00 1* 1* 260.0000 1644.0000 /
  B4 OPEN ORAT 2702.40 3211.40 8955.50 1* 1* 640.0000 1837.0000 /
  /

DATES                                  -- Generated : Petrel
  18 DEC 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5601.40 0.00 5192.10 1* 1* 510.0000 0.0000 /
  B2 OPEN ORAT 2449.20 4247.10 2045.00 1* 1* 260.0000 1644.0000 /
  B4 OPEN ORAT 2702.40 3211.40 8955.50 1* 1* 640.0000 1836.0000 /
  /

DATES                                  -- Generated : Petrel
  19 DEC 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5601.40 0.00 5192.10 1* 1* 510.0000 0.0000 /
  B2 OPEN ORAT 2449.20 4247.10 2045.00 1* 1* 270.0000 1644.0000 /
  B4 OPEN ORAT 2702.40 3211.40 8955.50 1* 1* 640.0000 1836.0000 /
  /

DATES                                  -- Generated : Petrel
  20 DEC 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5601.40 0.00 5192.10 1* 1* 510.0000 0.0000 /
  B2 OPEN ORAT 2449.20 4247.10 2045.00 1* 1* 270.0000 1643.0000 /
  B4 OPEN ORAT 2702.40 3211.40 8955.50 1* 1* 640.0000 1836.0000 /
  /

DATES                                  -- Generated : Petrel
  21 DEC 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5601.40 0.00 5192.10 1* 1* 510.0000 0.0000 /
  B2 OPEN ORAT 2449.20 4247.10 2045.00 1* 1* 270.0000 1644.0000 /
  B4 OPEN ORAT 2533.50 3010.70 8395.70 1* 1* 580.0000 1828.0000 /
  /

DATES                                  -- Generated : Petrel
  22 DEC 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5601.40 0.00 5192.10 1* 1* 500.0000 0.0000 /
  B2 OPEN ORAT 2449.20 4247.10 2045.00 1* 1* 270.0000 1643.0000 /
  B4 OPEN ORAT 2702.40 3211.40 8955.50 1* 1* 580.0000 1832.0000 /
  /

DATES                                  -- Generated : Petrel
  23 DEC 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5251.30 0.00 4867.60 1* 1* 520.0000 0.0000 /
  B2 OPEN ORAT 2143.00 3716.20 1789.40 1* 1* 160.0000 1673.0000 /
  B4 OPEN ORAT 2533.50 3010.70 8395.70 1* 1* 590.0000 1829.0000 /
  /

DATES                                  -- Generated : Petrel
  24 DEC 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6007.40 0.00 3062.80 1* 1* 500.0000 0.0000 /
  B2 OPEN ORAT 1428.70 2477.50 1192.90 1* 1* 100.0000 1669.0000 /
  B4 OPEN ORAT 2702.40 3211.40 8955.50 1* 1* 530.0000 1829.0000 /
  /

DATES                                  -- Generated : Petrel
  25 DEC 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6007.40 0.00 3062.80 1* 1* 530.0000 0.0000 /
  B2 OPEN ORAT 2449.20 4247.10 2045.00 1* 1* 100.0000 1669.0000 /
  B4 OPEN ORAT 2702.40 3211.40 8955.50 1* 1* 530.0000 1832.0000 /
  /

DATES                                  -- Generated : Petrel
  26 DEC 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6007.40 0.00 3062.80 1* 1* 530.0000 0.0000 /
  B2 OPEN ORAT 2449.20 4247.10 2045.00 1* 1* 80.0000 1669.0000 /
  B4 OPEN ORAT 2702.40 3211.40 8955.50 1* 1* 530.0000 1832.0000 /
  /

DATES                                  -- Generated : Petrel
  27 DEC 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6007.40 0.00 3062.80 1* 1* 530.0000 0.0000 /
  B2 OPEN ORAT 2449.20 4247.10 2045.00 1* 1* 245.0000 1668.0000 /
  B4 OPEN ORAT 2702.40 3211.40 8955.50 1* 1* 520.0000 1829.0000 /
  /

DATES                                  -- Generated : Petrel
  28 DEC 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6007.40 0.00 3062.80 1* 1* 680.0000 0.0000 /
  B2 OPEN ORAT 2449.20 4247.10 2045.00 1* 1* 260.0000 1668.0000 /
  B4 OPEN ORAT 2702.40 3211.40 8955.50 1* 1* 520.0000 1829.0000 /
  /

DATES                                  -- Generated : Petrel
  29 DEC 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6007.80 0.00 5289.00 1* 1* 530.0000 0.0000 /
  B2 OPEN ORAT 2449.20 4247.10 2045.00 1* 1* 280.0000 1668.0000 /
  B4 OPEN ORAT 2702.40 3211.40 8955.50 1* 1* 520.0000 1829.0000 /
  /

DATES                                  -- Generated : Petrel
  30 DEC 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6007.80 0.00 5289.00 1* 1* 530.0000 0.0000 /
  B2 OPEN ORAT 2449.20 4247.10 2045.00 1* 1* 285.0000 1668.0000 /
  B4 OPEN ORAT 2702.40 3211.40 8955.50 1* 1* 520.0000 1829.0000 /
  /

DATES                                  -- Generated : Petrel
  31 DEC 2015 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6007.80 0.00 5289.00 1* 1* 530.0000 0.0000 /
  B2 OPEN ORAT 2449.20 4247.10 2045.00 1* 1* 285.0000 1668.0000 /
  B4 OPEN ORAT 2702.40 3211.40 8955.50 1* 1* 520.0000 1829.0000 /
  /

DATES                                  -- Generated : Petrel
  1 JAN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6978.60 0.00 5281.20 1* 1* 530.0000 0.0000 /
  B2 OPEN ORAT 2074.50 4448.50 2042.00 1* 1* 285.0000 1648.0000 /
  B4 OPEN ORAT 2289.00 3363.70 8942.30 1* 1* 520.0000 1820.0000 /
  /

DATES                                  -- Generated : Petrel
  2 JAN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6978.60 0.00 5281.20 1* 1* 530.0000 0.0000 /
  B2 OPEN ORAT 2074.50 4448.50 2042.00 1* 1* 290.0000 1648.0000 /
  B4 OPEN ORAT 2289.00 3363.70 8942.30 1* 1* 510.0000 1830.0000 /
  /

DATES                                  -- Generated : Petrel
  3 JAN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6978.60 0.00 5281.20 1* 1* 530.0000 0.0000 /
  B2 OPEN ORAT 2074.50 4448.50 2042.00 1* 1* 290.0000 1648.0000 /
  B4 OPEN ORAT 2289.00 3363.70 8942.30 1* 1* 510.0000 1830.0000 /
  /

DATES                                  -- Generated : Petrel
  4 JAN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6978.60 0.00 5281.20 1* 1* 530.0000 0.0000 /
  B2 OPEN ORAT 2074.50 4448.50 2042.00 1* 1* 290.0000 1648.0000 /
  B4 OPEN ORAT 2289.00 3363.70 8942.30 1* 1* 510.0000 1829.0000 /
  /

DATES                                  -- Generated : Petrel
  5 JAN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6978.60 0.00 5281.20 1* 1* 530.0000 0.0000 /
  B2 OPEN ORAT 2074.50 4448.50 2042.00 1* 1* 295.0000 1649.0000 /
  B4 OPEN ORAT 2289.00 3363.70 8942.30 1* 1* 510.0000 1830.0000 /
  /

DATES                                  -- Generated : Petrel
  6 JAN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6978.60 0.00 5281.20 1* 1* 530.0000 0.0000 /
  B2 OPEN ORAT 2074.50 4448.50 2042.00 1* 1* 295.0000 1650.0000 /
  B4 OPEN ORAT 2289.00 3363.70 8942.30 1* 1* 510.0000 1830.0000 /
  /

DATES                                  -- Generated : Petrel
  7 JAN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6769.20 0.00 5281.20 1* 1* 530.0000 0.0000 /
  B2 OPEN ORAT 2074.50 4448.50 2042.00 1* 1* 295.0000 1649.0000 /
  B4 OPEN ORAT 2289.00 3363.70 8942.30 1* 1* 510.0000 1830.0000 /
  /

DATES                                  -- Generated : Petrel
  8 JAN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6769.20 0.00 5281.20 1* 1* 530.0000 0.0000 /
  B2 OPEN ORAT 2074.50 4448.50 2042.00 1* 1* 295.0000 1649.0000 /
  B4 OPEN ORAT 2289.00 3363.70 8942.30 1* 1* 510.0000 1829.0000 /
  /

DATES                                  -- Generated : Petrel
  9 JAN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6769.20 0.00 5281.20 1* 1* 520.0000 0.0000 /
  B2 OPEN ORAT 2074.50 4448.50 2042.00 1* 1* 295.0000 1649.0000 /
  B4 OPEN ORAT 2289.00 3363.70 8942.30 1* 1* 510.0000 1830.0000 /
  /

DATES                                  -- Generated : Petrel
  10 JAN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6769.20 0.00 5281.20 1* 1* 520.0000 0.0000 /
  B2 OPEN ORAT 2074.50 4448.50 2042.00 1* 1* 295.0000 1649.0000 /
  B4 OPEN ORAT 2289.00 3363.70 8942.30 1* 1* 510.0000 1830.0000 /
  /

DATES                                  -- Generated : Petrel
  11 JAN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6769.20 0.00 5281.20 1* 1* 520.0000 0.0000 /
  B2 OPEN ORAT 2074.50 4448.50 2042.00 1* 1* 295.0000 1649.0000 /
  B4 OPEN ORAT 2289.00 3363.70 8942.30 1* 1* 510.0000 1830.0000 /
  /

DATES                                  -- Generated : Petrel
  12 JAN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6769.20 0.00 5281.20 1* 1* 510.0000 0.0000 /
  B2 OPEN ORAT 2074.50 4448.50 2042.00 1* 1* 310.0000 1649.0000 /
  B4 OPEN ORAT 2289.00 3363.70 8942.30 1* 1* 500.0000 1830.0000 /
  /

DATES                                  -- Generated : Petrel
  13 JAN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6769.20 0.00 5281.20 1* 1* 470.0000 0.0000 /
  B2 OPEN ORAT 2074.50 4448.50 2042.00 1* 1* 330.0000 1649.0000 /
  B4 OPEN ORAT 2289.00 3363.70 8942.30 1* 1* 510.0000 1830.0000 /
  /

DATES                                  -- Generated : Petrel
  14 JAN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6769.20 0.00 5281.20 1* 1* 470.0000 0.0000 /
  B2 OPEN ORAT 2074.50 4448.50 2042.00 1* 1* 340.0000 1650.0000 /
  B4 OPEN ORAT 2289.00 3363.70 8942.30 1* 1* 510.0000 1830.0000 /
  /

DATES                                  -- Generated : Petrel
  15 JAN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6487.20 0.00 5061.20 1* 1* 610.0000 0.0000 /
  B2 OPEN ORAT 1988.10 4263.20 1956.90 1* 1* 320.0000 1647.0000 /
  B4 OPEN ORAT 2193.60 3223.60 8569.70 1* 1* 990.0000 1877.0000 /
  /

DATES                                  -- Generated : Petrel
  16 JAN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6769.20 0.00 5281.20 1* 1* 470.0000 0.0000 /
  B2 OPEN ORAT 2074.50 4448.50 2042.00 1* 1* 330.0000 1651.0000 /
  B4 OPEN ORAT 2289.00 3363.70 8942.30 1* 1* 510.0000 1834.0000 /
  /

DATES                                  -- Generated : Petrel
  17 JAN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6769.20 0.00 5281.20 1* 1* 470.0000 0.0000 /
  B2 OPEN ORAT 2074.50 4448.50 2042.00 1* 1* 340.0000 1651.0000 /
  B4 OPEN ORAT 2289.00 3363.70 8942.30 1* 1* 500.0000 1834.0000 /
  /

DATES                                  -- Generated : Petrel
  18 JAN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6769.20 0.00 5281.20 1* 1* 450.0000 0.0000 /
  B2 OPEN ORAT 2074.50 4448.50 2042.00 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2289.00 3363.70 8942.30 1* 1* 500.0000 1833.0000 /
  /

DATES                                  -- Generated : Petrel
  19 JAN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6769.20 0.00 5281.20 1* 1* 460.0000 0.0000 /
  B2 OPEN ORAT 2074.50 4448.50 2042.00 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2289.00 3363.70 8942.30 1* 1* 510.0000 1833.0000 /
  /

DATES                                  -- Generated : Petrel
  20 JAN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6769.20 0.00 5281.20 1* 1* 470.0000 0.0000 /
  B2 OPEN ORAT 1812.10 5033.00 1670.60 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2289.00 3363.70 8942.30 1* 1* 510.0000 1832.0000 /
  /

DATES                                  -- Generated : Petrel
  21 JAN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6769.20 0.00 5281.20 1* 1* 470.0000 0.0000 /
  B2 OPEN ORAT 1812.10 5033.00 1670.60 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2358.50 4039.90 8101.70 1* 1* 500.0000 1832.0000 /
  /

DATES                                  -- Generated : Petrel
  22 JAN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6769.20 0.00 5281.20 1* 1* 470.0000 0.0000 /
  B2 OPEN ORAT 1812.10 5033.00 1670.60 1* 1* 340.0000 1647.0000 /
  B4 OPEN ORAT 2358.50 4039.90 8101.70 1* 1* 500.0000 1831.0000 /
  /

DATES                                  -- Generated : Petrel
  23 JAN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6769.20 0.00 5281.20 1* 1* 460.0000 0.0000 /
  B2 OPEN ORAT 1812.10 5033.00 1670.60 1* 1* 340.0000 1647.0000 /
  B4 OPEN ORAT 2358.50 4039.90 8101.70 1* 1* 510.0000 1831.0000 /
  /

DATES                                  -- Generated : Petrel
  24 JAN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6769.20 0.00 5281.20 1* 1* 460.0000 0.0000 /
  B2 OPEN ORAT 1812.10 5033.00 1670.60 1* 1* 340.0000 1647.0000 /
  B4 OPEN ORAT 2358.50 4039.90 8101.70 1* 1* 510.0000 1831.0000 /
  /

DATES                                  -- Generated : Petrel
  25 JAN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6769.20 0.00 5281.20 1* 1* 460.0000 0.0000 /
  B2 OPEN ORAT 1812.10 5033.00 1670.60 1* 1* 340.0000 1647.0000 /
  B4 OPEN ORAT 2358.50 4039.90 8101.70 1* 1* 510.0000 1831.0000 /
  /

DATES                                  -- Generated : Petrel
  26 JAN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6769.20 0.00 5281.20 1* 1* 460.0000 0.0000 /
  B2 OPEN ORAT 1812.10 5033.00 1670.60 1* 1* 340.0000 1647.0000 /
  B4 OPEN ORAT 2358.50 4039.90 8101.70 1* 1* 510.0000 1831.0000 /
  /

DATES                                  -- Generated : Petrel
  27 JAN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6769.20 0.00 5281.20 1* 1* 460.0000 0.0000 /
  B2 OPEN ORAT 1812.10 5033.00 1670.60 1* 1* 340.0000 1647.0000 /
  B4 OPEN ORAT 2358.50 4039.90 8101.70 1* 1* 510.0000 1831.0000 /
  /

DATES                                  -- Generated : Petrel
  28 JAN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6769.20 0.00 5281.20 1* 1* 460.0000 0.0000 /
  B2 OPEN ORAT 1812.10 5033.00 1670.60 1* 1* 340.0000 1647.0000 /
  B4 OPEN ORAT 2358.50 4039.90 8101.70 1* 1* 510.0000 1831.0000 /
  /

DATES                                  -- Generated : Petrel
  29 JAN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6769.20 0.00 5281.20 1* 1* 460.0000 0.0000 /
  B2 OPEN ORAT 1812.10 5033.00 1670.60 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2358.50 4039.90 8101.70 1* 1* 510.0000 1830.0000 /
  /

DATES                                  -- Generated : Petrel
  30 JAN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6769.20 0.00 5281.20 1* 1* 460.0000 0.0000 /
  B2 OPEN ORAT 1812.10 5033.00 1670.60 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2358.50 4039.90 8101.70 1* 1* 510.0000 1830.0000 /
  /

DATES                                  -- Generated : Petrel
  31 JAN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6769.20 0.00 5281.20 1* 1* 460.0000 0.0000 /
  B2 OPEN ORAT 1812.10 5033.00 1670.60 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2358.50 4039.90 8101.70 1* 1* 510.0000 1830.0000 /
  /

DATES                                  -- Generated : Petrel
  1 FEB 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6716.70 0.00 6196.80 1* 1* 460.0000 0.0000 /
  B2 OPEN ORAT 2159.40 4827.80 1960.30 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2810.50 3875.20 9506.30 1* 1* 510.0000 1830.0000 /
  /

DATES                                  -- Generated : Petrel
  2 FEB 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6679.10 0.00 6196.80 1* 1* 460.0000 0.0000 /
  B2 OPEN ORAT 2159.40 4827.80 1960.30 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2810.50 3875.20 9506.30 1* 1* 510.0000 1831.0000 /
  /

DATES                                  -- Generated : Petrel
  3 FEB 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6571.40 0.00 6196.80 1* 1* 460.0000 0.0000 /
  B2 OPEN ORAT 2159.40 4827.80 1960.30 1* 1* 340.0000 1648.0000 /
  B4 OPEN ORAT 2810.50 3875.20 9506.30 1* 1* 510.0000 1831.0000 /
  /

DATES                                  -- Generated : Petrel
  4 FEB 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6328.10 0.00 6196.80 1* 1* 460.0000 0.0000 /
  B2 OPEN ORAT 2159.40 4827.80 1960.30 1* 1* 340.0000 1648.0000 /
  B4 OPEN ORAT 2810.50 3875.20 9506.30 1* 1* 510.0000 1830.0000 /
  /

DATES                                  -- Generated : Petrel
  5 FEB 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6360.10 0.00 6196.80 1* 1* 460.0000 0.0000 /
  B2 OPEN ORAT 2159.40 4827.80 1960.30 1* 1* 340.0000 1648.0000 /
  B4 OPEN ORAT 2810.50 3875.20 9506.30 1* 1* 510.0000 1830.0000 /
  /

DATES                                  -- Generated : Petrel
  6 FEB 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6299.00 0.00 5173.50 1* 1* 460.0000 0.0000 /
  B2 OPEN ORAT 2159.40 4827.80 1960.30 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2810.50 3875.20 9506.30 1* 1* 510.0000 1831.0000 /
  /

DATES                                  -- Generated : Petrel
  7 FEB 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6510.40 0.00 5173.50 1* 1* 470.0000 0.0000 /
  B2 OPEN ORAT 2159.40 4827.80 1960.30 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2810.50 3875.20 9506.30 1* 1* 500.0000 1831.0000 /
  /

DATES                                  -- Generated : Petrel
  8 FEB 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6577.60 0.00 5173.50 1* 1* 470.0000 0.0000 /
  B2 OPEN ORAT 2159.40 4827.80 1960.30 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2810.50 3875.20 9506.30 1* 1* 500.0000 1831.0000 /
  /

DATES                                  -- Generated : Petrel
  9 FEB 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6878.80 0.00 5173.50 1* 1* 470.0000 0.0000 /
  B2 OPEN ORAT 1826.00 4082.40 2041.70 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2810.50 3875.20 9506.30 1* 1* 510.0000 1831.0000 /
  /

DATES                                  -- Generated : Petrel
  10 FEB 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6936.20 0.00 5173.50 1* 1* 470.0000 0.0000 /
  B2 OPEN ORAT 1826.00 4082.40 2041.70 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2810.50 3875.20 9506.30 1* 1* 500.0000 1830.0000 /
  /

DATES                                  -- Generated : Petrel
  11 FEB 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6793.50 0.00 5173.50 1* 1* 470.0000 0.0000 /
  B2 OPEN ORAT 1908.70 4267.40 1340.60 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2545.10 3978.90 9387.80 1* 1* 500.0000 1829.0000 /
  /

DATES                                  -- Generated : Petrel
  12 FEB 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6917.70 0.00 4489.60 1* 1* 470.0000 0.0000 /
  B2 OPEN ORAT 1908.70 4267.40 1340.60 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2545.10 3978.90 9387.80 1* 1* 500.0000 1829.0000 /
  /

DATES                                  -- Generated : Petrel
  13 FEB 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6901.90 0.00 4647.60 1* 1* 470.0000 0.0000 /
  B2 OPEN ORAT 1908.70 4267.40 1340.60 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2545.10 3978.90 9387.80 1* 1* 510.0000 1829.0000 /
  /

DATES                                  -- Generated : Petrel
  14 FEB 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7318.90 0.00 5161.10 1* 1* 470.0000 0.0000 /
  B2 OPEN ORAT 1908.70 4267.40 1340.60 1* 1* 340.0000 1648.0000 /
  B4 OPEN ORAT 2545.10 3978.90 9387.80 1* 1* 510.0000 1829.0000 /
  /

DATES                                  -- Generated : Petrel
  15 FEB 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6064.80 0.00 5161.10 1* 1* 860.0000 0.0000 /
  B2 OPEN ORAT 1908.70 4267.40 1340.60 1* 1* 340.0000 1648.0000 /
  B4 OPEN ORAT 2545.10 3978.90 9387.80 1* 1* 510.0000 1829.0000 /
  /

DATES                                  -- Generated : Petrel
  16 FEB 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3866.20 0.00 2360.20 1* 1* 550.0000 0.0000 /
  B2 OPEN ORAT 1908.70 4267.40 1340.60 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2545.10 3978.90 9387.80 1* 1* 510.0000 1830.0000 /
  /

DATES                                  -- Generated : Petrel
  17 FEB 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5460.10 0.00 3165.10 1* 1* 460.0000 0.0000 /
  B2 OPEN ORAT 1908.70 4267.40 1340.60 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2545.10 3978.90 9387.80 1* 1* 510.0000 1830.0000 /
  /

DATES                                  -- Generated : Petrel
  18 FEB 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6969.60 0.00 3165.10 1* 1* 470.0000 0.0000 /
  B2 OPEN ORAT 1908.70 4267.40 1340.60 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2545.10 3978.90 9387.80 1* 1* 510.0000 1830.0000 /
  /

DATES                                  -- Generated : Petrel
  19 FEB 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7097.00 0.00 3165.10 1* 1* 470.0000 0.0000 /
  B2 OPEN ORAT 1908.70 4267.40 1340.60 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2545.10 3978.90 9387.80 1* 1* 510.0000 1829.0000 /
  /

DATES                                  -- Generated : Petrel
  20 FEB 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6717.30 0.00 3165.10 1* 1* 470.0000 0.0000 /
  B2 OPEN ORAT 1908.70 4267.40 1340.60 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2545.10 3978.90 9387.80 1* 1* 510.0000 1829.0000 /
  /

DATES                                  -- Generated : Petrel
  21 FEB 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6887.80 0.00 3165.10 1* 1* 470.0000 0.0000 /
  B2 OPEN ORAT 1908.70 4267.40 1340.60 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2545.10 3978.90 9387.80 1* 1* 510.0000 1829.0000 /
  /

DATES                                  -- Generated : Petrel
  22 FEB 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6855.60 0.00 3165.10 1* 1* 470.0000 0.0000 /
  B2 OPEN ORAT 1908.70 4267.40 1340.60 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2545.10 3978.90 9387.80 1* 1* 510.0000 1829.0000 /
  /

DATES                                  -- Generated : Petrel
  23 FEB 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5675.10 0.00 3165.10 1* 1* 470.0000 0.0000 /
  B2 OPEN ORAT 1908.70 4267.40 1340.60 1* 1* 340.0000 1646.0000 /
  B4 OPEN ORAT 2545.10 3978.90 9387.80 1* 1* 1550.0000 1900.0000 /
  /

DATES                                  -- Generated : Petrel
  24 FEB 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4251.40 0.00 3165.10 1* 1* 750.0000 0.0000 /
  B2 OPEN ORAT 1908.70 4267.40 1340.60 1* 1* 340.0000 1646.0000 /
  B4 OPEN ORAT 2545.10 3978.90 9387.80 1* 1* 510.0000 1833.0000 /
  /

DATES                                  -- Generated : Petrel
  25 FEB 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3613.50 0.00 1516.60 1* 1* 470.0000 0.0000 /
  B2 OPEN ORAT 1908.70 4267.40 1340.60 1* 1* 340.0000 1646.0000 /
  B4 OPEN ORAT 2545.10 3978.90 9387.80 1* 1* 510.0000 1833.0000 /
  /

DATES                                  -- Generated : Petrel
  26 FEB 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6809.90 0.00 3165.10 1* 1* 490.0000 0.0000 /
  B2 OPEN ORAT 1908.70 4267.40 1340.60 1* 1* 340.0000 1646.0000 /
  B4 OPEN ORAT 2545.10 3978.90 9387.80 1* 1* 510.0000 1833.0000 /
  /

DATES                                  -- Generated : Petrel
  27 FEB 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6769.20 0.00 3165.10 1* 1* 490.0000 0.0000 /
  B2 OPEN ORAT 1908.70 4267.40 1340.60 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2545.10 3978.90 9387.80 1* 1* 510.0000 1831.0000 /
  /

DATES                                  -- Generated : Petrel
  28 FEB 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6767.30 0.00 5511.70 1* 1* 490.0000 0.0000 /
  B2 OPEN ORAT 1908.70 4267.40 1340.60 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2545.10 3978.90 9387.80 1* 1* 510.0000 1831.0000 /
  /

DATES                                  -- Generated : Petrel
  29 FEB 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6924.30 0.00 5511.70 1* 1* 490.0000 0.0000 /
  B2 OPEN ORAT 1908.70 4267.40 1340.60 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2545.10 3978.90 9387.80 1* 1* 510.0000 1830.0000 /
  /

DATES                                  -- Generated : Petrel
  1 MAR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7631.20 0.00 5291.60 1* 1* 490.0000 0.0000 /
  B2 OPEN ORAT 1746.50 4721.40 1312.00 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2328.90 4402.20 9187.70 1* 1* 510.0000 1830.0000 /
  /

DATES                                  -- Generated : Petrel
  2 MAR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7414.60 0.00 5291.60 1* 1* 490.0000 0.0000 /
  B2 OPEN ORAT 1703.90 4606.10 1920.90 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2328.90 4402.20 9187.70 1* 1* 510.0000 1830.0000 /
  /

DATES                                  -- Generated : Petrel
  3 MAR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7719.40 0.00 5291.60 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1703.90 4606.10 1920.90 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2316.70 4379.20 8796.30 1* 1* 510.0000 1830.0000 /
  /

DATES                                  -- Generated : Petrel
  4 MAR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7477.50 0.00 5291.60 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1703.90 4606.10 1920.90 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2316.70 4379.20 8796.30 1* 1* 510.0000 1830.0000 /
  /

DATES                                  -- Generated : Petrel
  5 MAR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7498.20 0.00 5291.60 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1703.90 4606.10 1920.90 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2316.70 4379.20 8796.30 1* 1* 500.0000 1830.0000 /
  /

DATES                                  -- Generated : Petrel
  6 MAR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7629.40 0.00 5291.60 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1703.90 4606.10 1920.90 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2316.70 4379.20 8796.30 1* 1* 500.0000 1830.0000 /
  /

DATES                                  -- Generated : Petrel
  7 MAR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7713.40 0.00 5291.60 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1703.90 4606.10 1920.90 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2316.70 4379.20 8796.30 1* 1* 500.0000 1829.0000 /
  /

DATES                                  -- Generated : Petrel
  8 MAR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7517.10 0.00 5291.60 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1703.90 4606.10 1920.90 1* 1* 350.0000 1649.0000 /
  B4 OPEN ORAT 2316.70 4379.20 8796.30 1* 1* 500.0000 1830.0000 /
  /

DATES                                  -- Generated : Petrel
  9 MAR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7832.70 0.00 5291.60 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1703.90 4606.10 1920.90 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2316.70 4379.20 8796.30 1* 1* 510.0000 1829.0000 /
  /

DATES                                  -- Generated : Petrel
  10 MAR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7890.90 0.00 5291.60 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1703.90 4606.10 1920.90 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2316.70 4379.20 8796.30 1* 1* 510.0000 1829.0000 /
  /

DATES                                  -- Generated : Petrel
  11 MAR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7309.50 0.00 5291.60 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1703.90 4606.10 1920.90 1* 1* 340.0000 1648.0000 /
  B4 OPEN ORAT 2316.70 4379.20 8796.30 1* 1* 510.0000 1828.0000 /
  /

DATES                                  -- Generated : Petrel
  12 MAR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7522.40 0.00 5291.60 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1703.90 4606.10 1920.90 1* 1* 340.0000 1648.0000 /
  B4 OPEN ORAT 2316.70 4379.20 8796.30 1* 1* 510.0000 1828.0000 /
  /

DATES                                  -- Generated : Petrel
  13 MAR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7301.20 0.00 5291.60 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1703.90 4606.10 1920.90 1* 1* 340.0000 1648.0000 /
  B4 OPEN ORAT 2316.70 4379.20 8796.30 1* 1* 510.0000 1828.0000 /
  /

DATES                                  -- Generated : Petrel
  14 MAR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7882.60 0.00 5291.60 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1174.80 4825.70 1929.40 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2316.70 4379.20 8796.30 1* 1* 510.0000 1828.0000 /
  /

DATES                                  -- Generated : Petrel
  15 MAR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7836.40 0.00 5291.60 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1174.80 4825.70 1929.40 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2393.20 4523.80 8499.10 1* 1* 510.0000 1828.0000 /
  /

DATES                                  -- Generated : Petrel
  16 MAR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7868.60 0.00 5323.00 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1174.80 4825.70 1929.40 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2393.20 4523.80 8499.10 1* 1* 510.0000 1828.0000 /
  /

DATES                                  -- Generated : Petrel
  17 MAR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7814.90 0.00 5323.00 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1174.80 4825.70 1929.40 1* 1* 340.0000 1648.0000 /
  B4 OPEN ORAT 2393.20 4523.80 8499.10 1* 1* 510.0000 1828.0000 /
  /

DATES                                  -- Generated : Petrel
  18 MAR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7825.90 0.00 5323.00 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1178.50 4323.60 2046.60 1* 1* 340.0000 1648.0000 /
  B4 OPEN ORAT 2393.20 4523.80 8499.10 1* 1* 510.0000 1828.0000 /
  /

DATES                                  -- Generated : Petrel
  19 MAR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7848.60 0.00 5323.00 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1178.50 4323.60 2046.60 1* 1* 340.0000 1648.0000 /
  B4 OPEN ORAT 2393.20 4523.80 8499.10 1* 1* 510.0000 1828.0000 /
  /

DATES                                  -- Generated : Petrel
  20 MAR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7885.50 0.00 5323.00 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1178.50 4323.60 2046.60 1* 1* 340.0000 1648.0000 /
  B4 OPEN ORAT 2393.20 4523.80 8499.10 1* 1* 510.0000 1828.0000 /
  /

DATES                                  -- Generated : Petrel
  21 MAR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7639.60 0.00 5323.00 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1178.50 4323.60 2046.60 1* 1* 340.0000 1648.0000 /
  B4 OPEN ORAT 2393.20 4523.80 8499.10 1* 1* 510.0000 1828.0000 /
  /

DATES                                  -- Generated : Petrel
  22 MAR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7835.60 0.00 5323.00 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1178.50 4323.60 2046.60 1* 1* 340.0000 1648.0000 /
  B4 OPEN ORAT 2393.20 4523.80 8499.10 1* 1* 510.0000 1828.0000 /
  /

DATES                                  -- Generated : Petrel
  23 MAR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7886.90 0.00 5323.00 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1178.50 4323.60 2046.60 1* 1* 340.0000 1648.0000 /
  B4 OPEN ORAT 2393.20 4523.80 8499.10 1* 1* 510.0000 1828.0000 /
  /

DATES                                  -- Generated : Petrel
  24 MAR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7811.50 0.00 5323.00 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1178.50 4323.60 2046.60 1* 1* 340.0000 1648.0000 /
  B4 OPEN ORAT 2393.20 4523.80 8499.10 1* 1* 510.0000 1828.0000 /
  /

DATES                                  -- Generated : Petrel
  25 MAR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7840.60 0.00 5323.00 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1178.50 4323.60 2046.60 1* 1* 340.0000 1648.0000 /
  B4 OPEN ORAT 2393.20 4523.80 8499.10 1* 1* 510.0000 1828.0000 /
  /

DATES                                  -- Generated : Petrel
  26 MAR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7816.10 0.00 5323.00 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1178.50 4323.60 2046.60 1* 1* 340.0000 1648.0000 /
  B4 OPEN ORAT 2393.20 4523.80 8499.10 1* 1* 510.0000 1828.0000 /
  /

DATES                                  -- Generated : Petrel
  27 MAR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7677.60 0.00 5323.00 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1178.50 4323.60 2046.60 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2393.20 4523.80 8499.10 1* 1* 510.0000 1828.0000 /
  /

DATES                                  -- Generated : Petrel
  28 MAR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 8076.80 0.00 5323.00 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1206.70 4427.00 2000.60 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2393.20 4523.80 8499.10 1* 1* 510.0000 1828.0000 /
  /

DATES                                  -- Generated : Petrel
  29 MAR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 8141.20 0.00 5323.00 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1206.70 4427.00 2000.60 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2212.90 4183.00 8731.10 1* 1* 510.0000 1828.0000 /
  /

DATES                                  -- Generated : Petrel
  30 MAR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7960.20 0.00 4908.60 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1206.70 4427.00 2000.60 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2212.90 4183.00 8731.10 1* 1* 510.0000 1828.0000 /
  /

DATES                                  -- Generated : Petrel
  31 MAR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 8269.30 0.00 4908.60 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1206.70 4427.00 2000.60 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2212.90 4183.00 8731.10 1* 1* 510.0000 1829.0000 /
  /

DATES                                  -- Generated : Petrel
  1 APR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7847.80 0.00 5056.70 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1200.00 4583.00 2061.00 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2200.60 4330.40 8994.50 1* 1* 510.0000 1827.0000 /
  /

DATES                                  -- Generated : Petrel
  2 APR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7578.90 0.00 5056.70 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1200.00 4583.00 2061.00 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2200.60 4330.40 8994.50 1* 1* 500.0000 1827.0000 /
  /

DATES                                  -- Generated : Petrel
  3 APR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7652.00 0.00 5056.70 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1200.00 4583.00 2061.00 1* 1* 350.0000 1649.0000 /
  B4 OPEN ORAT 2200.60 4330.40 8994.50 1* 1* 500.0000 1828.0000 /
  /

DATES                                  -- Generated : Petrel
  4 APR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7440.80 0.00 5056.70 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1200.00 4583.00 2061.00 1* 1* 350.0000 1649.0000 /
  B4 OPEN ORAT 2200.60 4330.40 8994.50 1* 1* 500.0000 1827.0000 /
  /

DATES                                  -- Generated : Petrel
  5 APR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7398.90 0.00 5056.70 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1200.00 4583.00 2061.00 1* 1* 350.0000 1650.0000 /
  B4 OPEN ORAT 2200.60 4330.40 8994.50 1* 1* 500.0000 1827.0000 /
  /

DATES                                  -- Generated : Petrel
  6 APR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7546.60 0.00 5056.70 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1200.00 4583.00 2061.00 1* 1* 350.0000 1649.0000 /
  B4 OPEN ORAT 2200.60 4330.40 8994.50 1* 1* 500.0000 1827.0000 /
  /

DATES                                  -- Generated : Petrel
  7 APR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7484.50 0.00 5056.70 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1200.00 4583.00 2061.00 1* 1* 350.0000 1650.0000 /
  B4 OPEN ORAT 2200.60 4330.40 8994.50 1* 1* 500.0000 1827.0000 /
  /

DATES                                  -- Generated : Petrel
  8 APR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7573.80 0.00 5056.70 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1200.00 4583.00 2061.00 1* 1* 350.0000 1650.0000 /
  B4 OPEN ORAT 2200.60 4330.40 8994.50 1* 1* 500.0000 1827.0000 /
  /

DATES                                  -- Generated : Petrel
  9 APR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7583.90 0.00 5056.70 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1200.00 4583.00 2061.00 1* 1* 340.0000 1650.0000 /
  B4 OPEN ORAT 2200.60 4330.40 8994.50 1* 1* 500.0000 1827.0000 /
  /

DATES                                  -- Generated : Petrel
  10 APR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7496.50 0.00 5056.70 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1200.00 4583.00 2061.00 1* 1* 340.0000 1650.0000 /
  B4 OPEN ORAT 2200.60 4330.40 8994.50 1* 1* 500.0000 1827.0000 /
  /

DATES                                  -- Generated : Petrel
  11 APR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7457.80 0.00 5056.70 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1200.00 4583.00 2061.00 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2200.60 4330.40 8994.50 1* 1* 500.0000 1827.0000 /
  /

DATES                                  -- Generated : Petrel
  12 APR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6408.10 0.00 5056.70 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1200.00 4583.00 2061.00 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2200.60 4330.40 8994.50 1* 1* 1080.0000 1856.0000 /
  /

DATES                                  -- Generated : Petrel
  13 APR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6877.40 0.00 5056.70 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1200.00 4583.00 2061.00 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 1467.10 2886.90 5996.30 1* 1* 520.0000 1835.0000 /
  /

DATES                                  -- Generated : Petrel
  14 APR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7529.10 0.00 5056.70 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1168.30 4995.80 1987.60 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2200.60 4330.40 8994.50 1* 1* 500.0000 1832.0000 /
  /

DATES                                  -- Generated : Petrel
  15 APR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7562.70 0.00 5056.70 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1168.30 4995.80 1987.60 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2200.60 4330.40 8994.50 1* 1* 500.0000 1832.0000 /
  /

DATES                                  -- Generated : Petrel
  16 APR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7312.50 0.00 5056.70 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1168.30 4995.80 1987.60 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2212.10 4352.90 8942.20 1* 1* 500.0000 1832.0000 /
  /

DATES                                  -- Generated : Petrel
  17 APR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7351.30 0.00 4861.30 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1168.30 4995.80 1987.60 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2212.10 4352.90 8942.20 1* 1* 500.0000 1832.0000 /
  /

DATES                                  -- Generated : Petrel
  18 APR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7267.60 169.50 4861.30 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1168.30 4995.80 1987.60 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2212.10 4352.90 8942.20 1* 1* 500.0000 1832.0000 /
  /

DATES                                  -- Generated : Petrel
  19 APR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7441.70 169.50 4861.30 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1168.30 4995.80 1987.60 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2212.10 4352.90 8942.20 1* 1* 500.0000 1832.0000 /
  /

DATES                                  -- Generated : Petrel
  20 APR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7391.00 169.50 4861.30 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1168.30 4995.80 1987.60 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2212.10 4352.90 8942.20 1* 1* 500.0000 1832.0000 /
  /

DATES                                  -- Generated : Petrel
  21 APR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7352.40 169.50 4861.30 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1168.30 4995.80 1987.60 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2212.10 4352.90 8942.20 1* 1* 500.0000 1832.0000 /
  /

DATES                                  -- Generated : Petrel
  22 APR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7400.20 169.50 4861.30 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1168.30 4995.80 1987.60 1* 1* 340.0000 1649.0000 /
  B4 OPEN ORAT 2212.10 4352.90 8942.20 1* 1* 500.0000 1832.0000 /
  /

DATES                                  -- Generated : Petrel
  23 APR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7202.10 169.50 4861.30 1* 1* 480.0000 0.0000 /
  B2 OPEN ORAT 1168.30 4995.80 1987.60 1* 1* 340.0000 1650.0000 /
  B4 OPEN ORAT 2212.10 4352.90 8942.20 1* 1* 500.0000 1827.0000 /
  /

DATES                                  -- Generated : Petrel
  24 APR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7094.10 169.50 4861.30 1* 1* 500.0000 0.0000 /
  B2 OPEN ORAT 1168.30 4995.80 1987.60 1* 1* 340.0000 1650.0000 /
  B4 OPEN ORAT 2212.10 4352.90 8942.20 1* 1* 505.0000 1828.0000 /
  /

DATES                                  -- Generated : Petrel
  25 APR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7227.10 169.50 4861.30 1* 1* 500.0000 0.0000 /
  B2 OPEN ORAT 1168.30 4995.80 1987.60 1* 1* 340.0000 1650.0000 /
  B4 OPEN ORAT 2212.10 4352.90 8942.20 1* 1* 505.0000 1827.0000 /
  /

DATES                                  -- Generated : Petrel
  26 APR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6944.30 169.50 4861.30 1* 1* 500.0000 0.0000 /
  B2 OPEN ORAT 1168.30 4995.80 1987.60 1* 1* 340.0000 1650.0000 /
  B4 OPEN ORAT 2212.10 4352.90 8942.20 1* 1* 505.0000 1827.0000 /
  /

DATES                                  -- Generated : Petrel
  27 APR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7135.20 169.50 4861.30 1* 1* 500.0000 0.0000 /
  B2 OPEN ORAT 1168.30 4995.80 1987.60 1* 1* 340.0000 1650.0000 /
  B4 OPEN ORAT 2212.10 4352.90 8942.20 1* 1* 500.0000 1827.0000 /
  /

DATES                                  -- Generated : Petrel
  28 APR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7197.40 169.50 4861.30 1* 1* 500.0000 0.0000 /
  B2 OPEN ORAT 1168.30 4995.80 1987.60 1* 1* 340.0000 1651.0000 /
  B4 OPEN ORAT 2212.10 4352.90 8942.20 1* 1* 500.0000 1826.0000 /
  /

DATES                                  -- Generated : Petrel
  29 APR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7061.90 169.50 4861.30 1* 1* 500.0000 0.0000 /
  B2 OPEN ORAT 1168.30 4995.80 1987.60 1* 1* 340.0000 1650.0000 /
  B4 OPEN ORAT 2212.10 4352.90 8942.20 1* 1* 500.0000 1826.0000 /
  /

DATES                                  -- Generated : Petrel
  30 APR 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7057.90 169.50 4861.30 1* 1* 500.0000 0.0000 /
  B2 OPEN ORAT 1168.30 4995.80 1987.60 1* 1* 340.0000 1650.0000 /
  B4 OPEN ORAT 2212.10 4352.90 8942.20 1* 1* 500.0000 1827.0000 /
  /

DATES                                  -- Generated : Petrel
  1 MAY 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7169.10 147.90 4799.60 1* 1* 500.0000 0.0000 /
  B2 OPEN ORAT 1195.80 4358.60 1962.30 1* 1* 340.0000 1651.0000 /
  B4 OPEN ORAT 2264.20 3797.80 9214.10 1* 1* 500.0000 1826.0000 /
  /

DATES                                  -- Generated : Petrel
  2 MAY 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7177.70 147.90 4799.60 1* 1* 500.0000 0.0000 /
  B2 OPEN ORAT 1195.80 4358.60 1962.30 1* 1* 340.0000 1650.0000 /
  B4 OPEN ORAT 2264.20 3797.80 9221.10 1* 1* 500.0000 1826.0000 /
  /

DATES                                  -- Generated : Petrel
  3 MAY 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7211.10 147.90 4799.60 1* 1* 500.0000 0.0000 /
  B2 OPEN ORAT 1157.40 3767.90 1618.30 1* 1* 340.0000 1651.0000 /
  B4 OPEN ORAT 2264.20 3797.80 9556.20 1* 1* 500.0000 1825.0000 /
  /

DATES                                  -- Generated : Petrel
  4 MAY 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7584.00 147.90 4799.60 1* 1* 500.0000 0.0000 /
  B2 OPEN ORAT 1157.40 3767.90 1618.30 1* 1* 340.0000 1651.0000 /
  B4 OPEN ORAT 1933.70 4224.40 9563.20 1* 1* 500.0000 1825.0000 /
  /

DATES                                  -- Generated : Petrel
  5 MAY 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7384.60 151.70 5002.30 1* 1* 500.0000 0.0000 /
  B2 OPEN ORAT 1157.40 3767.90 1618.30 1* 1* 340.0000 1651.0000 /
  B4 OPEN ORAT 1933.70 4224.40 9357.40 1* 1* 500.0000 1825.0000 /
  /

DATES                                  -- Generated : Petrel
  6 MAY 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7377.10 151.70 5002.30 1* 1* 500.0000 0.0000 /
  B2 OPEN ORAT 1157.40 3767.90 1618.30 1* 1* 340.0000 1651.0000 /
  B4 OPEN ORAT 1933.70 4224.40 9365.40 1* 1* 500.0000 1825.0000 /
  /

DATES                                  -- Generated : Petrel
  7 MAY 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6492.50 145.30 4793.90 1* 1* 500.0000 0.0000 /
  B2 OPEN ORAT 434.00 3610.90 540.00 1* 1* 110.0000 1673.0000 /
  B4 OPEN ORAT 1700.00 4048.40 9485.10 1* 1* 500.0000 1832.0000 /
  /

DATES                                  -- Generated : Petrel
  8 MAY 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7228.90 151.70 5002.30 1* 1* 460.0000 0.0000 /
  B2 OPEN ORAT 378.40 3767.90 520.00 1* 1* 80.0000 1673.0000 /
  B4 OPEN ORAT 1933.70 4224.40 8150.70 1* 1* 490.0000 1832.0000 /
  /

DATES                                  -- Generated : Petrel
  9 MAY 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6240.10 146.90 4846.00 1* 1* 460.0000 0.0000 /
  B2 OPEN ORAT 310.00 3650.10 500.00 1* 1* 50.0000 1676.0000 /
  B4 OPEN ORAT 1700.00 4092.40 8105.00 1* 1* 500.0000 1833.0000 /
  /

DATES                                  -- Generated : Petrel
  10 MAY 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7109.90 151.70 5002.30 1* 1* 460.0000 0.0000 /
  B2 OPEN ORAT 378.00 3767.90 520.00 1* 1* 45.0000 1676.0000 /
  B4 OPEN ORAT 1933.70 4224.40 8020.70 1* 1* 500.0000 1833.0000 /
  /

DATES                                  -- Generated : Petrel
  11 MAY 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7071.30 752.30 5108.00 1* 1* 460.0000 0.0000 /
  B2 OPEN ORAT 471.50 3767.90 600.00 1* 1* 45.0000 1676.0000 /
  B4 OPEN ORAT 1933.70 4224.40 7865.00 1* 1* 500.0000 1833.0000 /
  /

DATES                                  -- Generated : Petrel
  12 MAY 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7071.30 752.30 5108.00 1* 1* 460.0000 0.0000 /
  B2 OPEN ORAT 100.20 3767.90 150.00 1* 1* 40.0000 1675.0000 /
  B4 OPEN ORAT 2085.60 4162.00 8291.00 1* 1* 500.0000 1833.0000 /
  /

DATES                                  -- Generated : Petrel
  13 MAY 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7071.00 752.30 5108.00 1* 1* 460.0000 0.0000 /
  B2 OPEN ORAT 189.60 3218.40 200.00 1* 1* 45.0000 1678.0000 /
  B4 OPEN ORAT 2085.60 4162.00 8250.00 1* 1* 500.0000 1833.0000 /
  /

DATES                                  -- Generated : Petrel
  14 MAY 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7071.00 752.30 5108.00 1* 1* 460.0000 0.0000 /
  B2 OPEN ORAT 287.40 491.30 400.00 1* 1* 43.0000 1678.0000 /
  B4 OPEN ORAT 2085.60 4162.00 7823.00 1* 1* 500.0000 1833.0000 /
  /

DATES                                  -- Generated : Petrel
  15 MAY 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7071.00 752.30 5108.00 1* 1* 460.0000 0.0000 /
  B2 OPEN ORAT 781.80 2719.60 900.00 1* 1* 100.0000 1678.0000 /
  B4 OPEN ORAT 2085.60 4162.00 7981.00 1* 1* 500.0000 1833.0000 /
  /

DATES                                  -- Generated : Petrel
  16 MAY 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7071.00 752.30 5108.00 1* 1* 460.0000 0.0000 /
  B2 OPEN ORAT 277.80 2719.60 420.00 1* 1* 160.0000 1678.0000 /
  B4 OPEN ORAT 2085.60 4162.00 9017.00 1* 1* 550.0000 1833.0000 /
  /

DATES                                  -- Generated : Petrel
  17 MAY 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7071.00 752.30 5108.00 1* 1* 460.0000 0.0000 /
  B2 OPEN ORAT 483.90 3308.40 720.00 1* 1* 185.0000 1657.0000 /
  B4 OPEN ORAT 2085.60 4162.00 9102.00 1* 1* 550.0000 1833.0000 /
  /

DATES                                  -- Generated : Petrel
  18 MAY 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7071.00 752.30 5108.00 1* 1* 460.0000 0.0000 /
  B2 OPEN ORAT 746.10 3502.80 920.00 1* 1* 207.0000 1657.0000 /
  B4 OPEN ORAT 2085.60 4162.00 9322.00 1* 1* 540.0000 1833.0000 /
  /

DATES                                  -- Generated : Petrel
  19 MAY 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7071.00 752.30 5108.00 1* 1* 460.0000 0.0000 /
  B2 OPEN ORAT 863.00 3502.80 920.00 1* 1* 220.0000 1657.0000 /
  B4 OPEN ORAT 2085.60 4162.00 9335.00 1* 1* 530.0000 1833.0000 /
  /

DATES                                  -- Generated : Petrel
  20 MAY 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7071.00 752.30 5108.00 1* 1* 460.0000 0.0000 /
  B2 OPEN ORAT 1078.30 3671.30 950.00 1* 1* 223.0000 1657.0000 /
  B4 OPEN ORAT 2085.60 4162.00 9343.00 1* 1* 530.0000 1833.0000 /
  /

DATES                                  -- Generated : Petrel
  21 MAY 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7071.00 752.30 5108.00 1* 1* 460.0000 0.0000 /
  B2 OPEN ORAT 847.20 3671.30 870.00 1* 1* 225.0000 1655.0000 /
  B4 OPEN ORAT 2085.60 4162.00 9420.00 1* 1* 530.0000 1833.0000 /
  /

DATES                                  -- Generated : Petrel
  22 MAY 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6586.10 752.30 5108.00 1* 1* 460.0000 0.0000 /
  B2 OPEN ORAT 1265.60 3791.60 1000.00 1* 1* 235.0000 1659.0000 /
  B4 OPEN ORAT 2085.60 4162.00 9294.00 1* 1* 530.0000 1833.0000 /
  /

DATES                                  -- Generated : Petrel
  23 MAY 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6495.50 742.00 5037.70 1* 1* 450.0000 0.0000 /
  B2 OPEN ORAT 178.50 3159.70 250.00 1* 1* 200.0000 1663.0000 /
  B4 OPEN ORAT 1970.00 3931.30 10263.30 1* 1* 550.0000 1835.0000 /
  /

DATES                                  -- Generated : Petrel
  24 MAY 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6586.10 752.30 5108.00 1* 1* 450.0000 0.0000 /
  B2 OPEN ORAT 1482.10 3791.60 1840.00 1* 1* 210.0000 1654.0000 /
  B4 OPEN ORAT 2085.60 4162.00 9066.00 1* 1* 550.0000 1835.0000 /
  /

DATES                                  -- Generated : Petrel
  25 MAY 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6586.10 752.30 5108.00 1* 1* 450.0000 0.0000 /
  B2 OPEN ORAT 1245.20 3791.60 1330.00 1* 1* 220.0000 1654.0000 /
  B4 OPEN ORAT 2085.60 4162.00 9690.00 1* 1* 550.0000 1835.0000 /
  /

DATES                                  -- Generated : Petrel
  26 MAY 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6174.40 705.30 4788.70 1* 1* 450.0000 0.0000 /
  B2 OPEN ORAT 360.80 3665.30 500.00 1* 1* 220.0000 1687.0000 /
  B4 OPEN ORAT 1955.20 3901.90 10123.30 1* 1* 550.0000 1861.0000 /
  /

DATES                                  -- Generated : Petrel
  27 MAY 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5133.40 752.30 5108.00 1* 1* 480.0000 0.0000 /
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1750.0000 /
  B4 OPEN ORAT 818.60 1633.60 4529.00 1* 1* 1700.0000 1916.0000 /
  /

DATES                                  -- Generated : Petrel
  28 MAY 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5661.20 632.30 4292.80 1* 1* 460.0000 0.0000 /
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1685.0000 /
  B4 OPEN ORAT 847.30 1690.80 4896.20 1* 1* 540.0000 1840.0000 /
  /

DATES                                  -- Generated : Petrel
  29 MAY 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7682.50 752.30 5108.00 1* 1* 460.0000 0.0000 /
  B4 OPEN ORAT 2085.60 4162.00 9811.00 1* 1* 550.0000 1839.0000 /
  /

DATES                                  -- Generated : Petrel
  30 MAY 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7318.00 752.30 5108.00 1* 1* 460.0000 0.0000 /
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1686.0000 /
  B4 OPEN ORAT 2085.60 4162.00 9835.00 1* 1* 540.0000 1839.0000 /
  /

DATES                                  -- Generated : Petrel
  31 MAY 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7115.70 752.30 5108.00 1* 1* 460.0000 0.0000 /
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1687.0000 /
  B4 OPEN ORAT 2085.60 4162.00 9799.00 1* 1* 550.0000 1838.0000 /
  /

DATES                                  -- Generated : Petrel
  1 JUN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6562.60 765.50 4224.00 1* 1* 460.0000 0.0000 /
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1688.0000 /
  B4 OPEN ORAT 2078.10 4234.90 10768.00 1* 1* 540.0000 1837.0000 /
  /

DATES                                  -- Generated : Petrel
  2 JUN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6562.60 765.50 4224.00 1* 1* 460.0000 0.0000 /
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1689.0000 /
  B4 OPEN ORAT 2078.10 4234.90 10639.00 1* 1* 540.0000 1837.0000 /
  /

DATES                                  -- Generated : Petrel
  3 JUN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6562.60 765.50 4224.00 1* 1* 460.0000 0.0000 /
  B4 OPEN ORAT 2078.10 4234.90 10667.00 1* 1* 540.0000 1837.0000 /
  /

DATES                                  -- Generated : Petrel
  4 JUN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2871.10 334.90 1848.00 1* 1* 0.0000 0.0000 /
  B2 OPEN ORAT 0.00 0.00 258.70 1* 1* 0.0000 1689.0000 /
  B4 OPEN ORAT 909.20 1852.80 5383.30 1* 1* 0.0000 1837.0000 /
  /

DATES                                  -- Generated : Petrel
  5 JUN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3144.60 366.80 2024.00 1* 1* 450.0000 0.0000 /
  B2 OPEN ORAT 0.00 0.00 271.00 1* 1* 0.0000 1691.0000 /
  B4 OPEN ORAT 995.80 2029.20 3955.00 1* 1* 550.0000 1841.0000 /
  /

DATES                                  -- Generated : Petrel
  6 JUN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6562.60 765.50 4224.00 1* 1* 450.0000 0.0000 /
  B2 OPEN ORAT 0.00 0.00 591.40 1* 1* 0.0000 1691.0000 /
  B4 OPEN ORAT 2078.10 4234.90 10324.70 1* 1* 550.0000 1841.0000 /
  /

DATES                                  -- Generated : Petrel
  7 JUN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6494.20 757.50 4180.00 1* 1* 620.0000 0.0000 /
  B2 OPEN ORAT 0.00 0.00 486.60 1* 1* 0.0000 1694.0000 /
  B4 OPEN ORAT 1710.10 3485.00 9594.40 1* 1* 0.0000 1918.0000 /
  /

DATES                                  -- Generated : Petrel
  8 JUN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6562.60 765.50 2080.00 1* 1* 620.0000 0.0000 /
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1694.0000 /
  B4 STOP ORAT 0.00 0.00 -1.00 1* 1* 0.0000 1918.0000 /
  /

DATES                                  -- Generated : Petrel
  9 JUN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6562.60 765.50 3300.00 1* 1* 460.0000 0.0000 /
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1922.0000 /
  B4 OPEN ORAT 0.00 0.00 4.00 1* 1* 0.0000 1918.0000 /
  /

DATES                                  -- Generated : Petrel
  10 JUN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6562.60 765.50 3470.00 1* 1* 470.0000 0.0000 /
  B4 OPEN ORAT 0.00 0.00 4.00 1* 1* 0.0000 1918.0000 /
  /

DATES                                  -- Generated : Petrel
  11 JUN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6384.90 744.80 3100.00 1* 1* 470.0000 0.0000 /
  B4 OPEN ORAT 0.00 0.00 3.00 1* 1* 0.0000 1918.0000 /
  /

DATES                                  -- Generated : Petrel
  12 JUN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6562.60 765.50 4224.00 1* 1* 440.0000 0.0000 /
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1801.0000 /
  B4 OPEN ORAT 1134.30 2311.50 8285.00 1* 1* 560.0000 1835.0000 /
  /

DATES                                  -- Generated : Petrel
  13 JUN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6562.60 765.50 4224.00 1* 1* 440.0000 0.0000 /
  B2 OPEN ORAT 306.30 1286.00 197.10 1* 1* 80.0000 1801.0000 /
  B4 OPEN ORAT 2078.10 4234.90 10362.90 1* 1* 560.0000 1835.0000 /
  /

DATES                                  -- Generated : Petrel
  14 JUN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6562.60 765.50 4224.00 1* 1* 450.0000 0.0000 /
  B2 OPEN ORAT 918.80 3858.10 591.40 1* 1* 105.0000 1801.0000 /
  B4 OPEN ORAT 2078.10 4234.90 10415.70 1* 1* 590.0000 1835.0000 /
  /

DATES                                  -- Generated : Petrel
  15 JUN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6289.20 733.60 4048.00 1* 1* 450.0000 0.0000 /
  B2 OPEN ORAT 880.50 3697.30 566.70 1* 1* 115.0000 1801.0000 /
  B4 OPEN ORAT 1991.50 4058.40 9990.30 1* 1* 590.0000 1835.0000 /
  /

DATES                                  -- Generated : Petrel
  16 JUN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6562.60 765.50 4224.00 1* 1* 450.0000 0.0000 /
  B2 OPEN ORAT 842.20 3536.60 542.10 1* 1* 125.0000 1801.0000 /
  B4 OPEN ORAT 2078.10 4234.90 10438.90 1* 1* 590.0000 1835.0000 /
  /

DATES                                  -- Generated : Petrel
  17 JUN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6562.60 765.50 4224.00 1* 1* 460.0000 0.0000 /
  B2 OPEN ORAT 918.80 3858.10 591.40 1* 1* 140.0000 1801.0000 /
  B4 OPEN ORAT 2078.10 4234.90 10528.70 1* 1* 600.0000 1835.0000 /
  /

DATES                                  -- Generated : Petrel
  18 JUN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6562.60 765.50 4224.00 1* 1* 460.0000 0.0000 /
  B2 OPEN ORAT 622.90 2615.60 400.90 1* 1* 150.0000 1679.0000 /
  B4 OPEN ORAT 2078.10 4234.90 10710.10 1* 1* 600.0000 1841.0000 /
  /

DATES                                  -- Generated : Petrel
  19 JUN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6562.60 765.50 4224.00 1* 1* 460.0000 0.0000 /
  B2 OPEN ORAT 666.00 2796.60 428.70 1* 1* 160.0000 1679.0000 /
  B4 OPEN ORAT 2078.10 4234.90 10641.40 1* 1* 600.0000 1839.0000 /
  /

DATES                                  -- Generated : Petrel
  20 JUN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6562.60 765.50 4224.00 1* 1* 460.0000 0.0000 /
  B2 OPEN ORAT 666.00 2796.60 428.70 1* 1* 180.0000 1680.0000 /
  B4 OPEN ORAT 2078.10 4234.90 10529.40 1* 1* 600.0000 1843.0000 /
  /

DATES                                  -- Generated : Petrel
  21 JUN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6562.60 765.50 4224.00 1* 1* 460.0000 0.0000 /
  B2 OPEN ORAT 666.00 2796.60 428.70 1* 1* 180.0000 1671.0000 /
  B4 OPEN ORAT 2078.10 4234.90 10472.40 1* 1* 600.0000 1841.0000 /
  /

DATES                                  -- Generated : Petrel
  22 JUN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6562.60 765.50 4224.00 1* 1* 460.0000 0.0000 /
  B2 OPEN ORAT 666.00 2796.60 428.70 1* 1* 185.0000 1669.0000 /
  B4 OPEN ORAT 2078.10 4234.90 10350.40 1* 1* 600.0000 1841.0000 /
  /

DATES                                  -- Generated : Petrel
  23 JUN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6473.50 1491.80 4166.70 1* 1* 460.0000 0.0000 /
  B2 OPEN ORAT 666.00 2796.60 428.70 1* 1* 185.0000 1668.0000 /
  B4 OPEN ORAT 2090.70 4664.00 11016.70 1* 1* 600.0000 1842.0000 /
  /

DATES                                  -- Generated : Petrel
  24 JUN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6473.50 1491.80 4166.70 1* 1* 450.0000 0.0000 /
  B2 OPEN ORAT 666.00 2796.60 428.70 1* 1* 190.0000 1667.0000 /
  B4 OPEN ORAT 2090.70 4664.00 11008.70 1* 1* 550.0000 1843.0000 /
  /

DATES                                  -- Generated : Petrel
  25 JUN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6473.50 1491.80 4166.70 1* 1* 450.0000 0.0000 /
  B2 OPEN ORAT 666.00 2796.60 428.70 1* 1* 200.0000 1667.0000 /
  B4 OPEN ORAT 2090.70 4664.00 11105.70 1* 1* 550.0000 1841.0000 /
  /

DATES                                  -- Generated : Petrel
  26 JUN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6473.50 1491.80 4166.70 1* 1* 450.0000 0.0000 /
  B2 OPEN ORAT 666.00 2796.60 428.70 1* 1* 230.0000 1666.0000 /
  B4 OPEN ORAT 2090.70 4664.00 11158.70 1* 1* 580.0000 1841.0000 /
  /

DATES                                  -- Generated : Petrel
  27 JUN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6473.50 1491.80 4166.70 1* 1* 450.0000 0.0000 /
  B2 OPEN ORAT 1030.60 4327.60 663.30 1* 1* 230.0000 1665.0000 /
  B4 OPEN ORAT 2090.70 4664.00 10673.00 1* 1* 620.0000 1842.0000 /
  /

DATES                                  -- Generated : Petrel
  28 JUN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6473.50 1491.80 4166.70 1* 1* 450.0000 0.0000 /
  B2 OPEN ORAT 1030.60 4327.60 663.30 1* 1* 230.0000 1664.0000 /
  B4 OPEN ORAT 2090.70 4664.00 10663.00 1* 1* 600.0000 1840.0000 /
  /

DATES                                  -- Generated : Petrel
  29 JUN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6473.50 1491.80 4166.70 1* 1* 450.0000 0.0000 /
  B2 OPEN ORAT 1030.60 4327.60 663.30 1* 1* 250.0000 1663.0000 /
  B4 OPEN ORAT 2090.70 4664.00 10645.00 1* 1* 600.0000 1840.0000 /
  /

DATES                                  -- Generated : Petrel
  30 JUN 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6473.50 1491.80 4166.70 1* 1* 450.0000 0.0000 /
  B2 OPEN ORAT 1030.60 4327.60 663.30 1* 1* 250.0000 1664.0000 /
  B4 OPEN ORAT 2090.70 4664.00 10794.00 1* 1* 600.0000 1840.0000 /
  /

DATES                                  -- Generated : Petrel
  1 JUL 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6757.40 1538.90 4389.90 1* 1* 450.0000 0.0000 /
  B2 OPEN ORAT 1046.70 4464.30 681.20 1* 1* 270.0000 1664.0000 /
  B4 OPEN ORAT 2123.40 4811.40 10515.00 1* 1* 620.0000 1840.0000 /
  /

DATES                                  -- Generated : Petrel
  2 JUL 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6990.40 1538.90 4541.30 1* 1* 450.0000 0.0000 /
  B2 OPEN ORAT 1046.70 4464.30 681.20 1* 1* 230.0000 1664.0000 /
  B4 OPEN ORAT 2123.40 4811.40 10349.50 1* 1* 600.0000 1839.0000 /
  /

DATES                                  -- Generated : Petrel
  3 JUL 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6758.70 1538.90 4390.70 1* 1* 450.0000 0.0000 /
  B2 OPEN ORAT 1046.70 4464.30 681.20 1* 1* 230.0000 1666.0000 /
  B4 OPEN ORAT 2123.40 4811.40 10626.10 1* 1* 590.0000 1839.0000 /
  /

DATES                                  -- Generated : Petrel
  4 JUL 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6765.10 1538.90 4394.90 1* 1* 450.0000 0.0000 /
  B2 OPEN ORAT 1046.70 4464.30 681.20 1* 1* 230.0000 1665.0000 /
  B4 OPEN ORAT 2034.90 4610.90 10277.00 1* 1* 580.0000 1839.0000 /
  /

DATES                                  -- Generated : Petrel
  5 JUL 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6892.70 1538.90 4477.80 1* 1* 450.0000 0.0000 /
  B2 OPEN ORAT 1046.70 4464.30 681.20 1* 1* 240.0000 1665.0000 /
  B4 OPEN ORAT 2123.40 4811.40 10566.00 1* 1* 580.0000 1839.0000 /
  /

DATES                                  -- Generated : Petrel
  6 JUL 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6605.00 1538.90 4290.80 1* 1* 450.0000 0.0000 /
  B2 OPEN ORAT 1046.70 4464.30 681.20 1* 1* 240.0000 1665.0000 /
  B4 OPEN ORAT 2123.40 4811.40 10757.00 1* 1* 580.0000 1839.0000 /
  /

DATES                                  -- Generated : Petrel
  7 JUL 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6793.30 1538.90 4413.20 1* 1* 450.0000 0.0000 /
  B2 OPEN ORAT 1046.70 4464.30 681.20 1* 1* 240.0000 1665.0000 /
  B4 OPEN ORAT 2123.40 4811.40 10653.70 1* 1* 570.0000 1839.0000 /
  /

DATES                                  -- Generated : Petrel
  8 JUL 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7030.90 1538.90 4567.60 1* 1* 450.0000 0.0000 /
  B2 OPEN ORAT 1046.70 4464.30 681.20 1* 1* 240.0000 1664.0000 /
  B4 OPEN ORAT 2123.40 4811.40 10489.20 1* 1* 580.0000 1836.0000 /
  /

DATES                                  -- Generated : Petrel
  9 JUL 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6989.40 1538.90 4540.70 1* 1* 450.0000 0.0000 /
  B2 OPEN ORAT 1046.70 4464.30 681.20 1* 1* 240.0000 1664.0000 /
  B4 OPEN ORAT 2123.40 4811.40 10599.20 1* 1* 580.0000 1836.0000 /
  /

DATES                                  -- Generated : Petrel
  10 JUL 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6611.90 1538.90 4295.30 1* 1* 450.0000 0.0000 /
  B2 OPEN ORAT 1046.70 4464.30 681.20 1* 1* 240.0000 1664.0000 /
  B4 OPEN ORAT 2123.40 4811.40 10779.60 1* 1* 580.0000 1836.0000 /
  /

DATES                                  -- Generated : Petrel
  11 JUL 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6583.00 1538.90 4276.50 1* 1* 450.0000 0.0000 /
  B2 OPEN ORAT 1046.70 4464.30 681.20 1* 1* 240.0000 1664.0000 /
  B4 OPEN ORAT 2123.40 4811.40 10919.30 1* 1* 580.0000 1836.0000 /
  /

DATES                                  -- Generated : Petrel
  12 JUL 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6714.20 1538.90 4361.80 1* 1* 450.0000 0.0000 /
  B2 OPEN ORAT 1046.70 4464.30 681.20 1* 1* 240.0000 1664.0000 /
  B4 OPEN ORAT 2123.40 4811.40 10845.10 1* 1* 580.0000 1836.0000 /
  /

DATES                                  -- Generated : Petrel
  13 JUL 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6679.20 1538.90 4339.00 1* 1* 450.0000 0.0000 /
  B2 OPEN ORAT 1046.70 4464.30 681.20 1* 1* 240.0000 1664.0000 /
  B4 OPEN ORAT 2123.40 4811.40 10880.80 1* 1* 580.0000 1836.0000 /
  /

DATES                                  -- Generated : Petrel
  14 JUL 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6506.70 1538.90 4288.30 1* 1* 450.0000 0.0000 /
  B2 OPEN ORAT 1278.20 3684.90 770.20 1* 1* 240.0000 1664.0000 /
  B4 OPEN ORAT 2123.40 4811.40 10766.50 1* 1* 580.0000 1836.0000 /
  /

DATES                                  -- Generated : Petrel
  15 JUL 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4959.20 1442.70 3278.80 1* 1* 440.0000 0.0000 /
  B2 OPEN ORAT 1198.30 3454.60 722.00 1* 1* 220.0000 1666.0000 /
  B4 OPEN ORAT 1990.70 4510.70 10259.20 1* 1* 560.0000 1836.0000 /
  /

DATES                                  -- Generated : Petrel
  16 JUL 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6481.40 1538.90 4271.90 1* 1* 440.0000 0.0000 /
  B2 OPEN ORAT 1278.20 3684.90 770.20 1* 1* 230.0000 1665.0000 /
  B4 OPEN ORAT 2123.40 4811.40 10337.90 1* 1* 560.0000 1838.0000 /
  /

DATES                                  -- Generated : Petrel
  17 JUL 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6588.40 1538.90 4341.40 1* 1* 440.0000 0.0000 /
  B2 OPEN ORAT 1278.20 3684.90 770.20 1* 1* 240.0000 1665.0000 /
  B4 OPEN ORAT 2123.40 4811.40 10608.40 1* 1* 560.0000 1837.0000 /
  /

DATES                                  -- Generated : Petrel
  18 JUL 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6421.50 1538.90 4233.00 1* 1* 440.0000 0.0000 /
  B2 OPEN ORAT 1278.20 3684.90 770.20 1* 1* 245.0000 1665.0000 /
  B4 OPEN ORAT 2123.40 4811.40 10691.90 1* 1* 560.0000 1837.0000 /
  /

DATES                                  -- Generated : Petrel
  19 JUL 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6404.90 1538.90 4222.20 1* 1* 440.0000 0.0000 /
  B2 OPEN ORAT 1278.20 3684.90 770.20 1* 1* 245.0000 1665.0000 /
  B4 OPEN ORAT 2123.40 4811.40 10746.70 1* 1* 560.0000 1837.0000 /
  /

DATES                                  -- Generated : Petrel
  20 JUL 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6997.90 1637.50 4480.30 1* 1* 440.0000 0.0000 /
  B2 OPEN ORAT 1278.20 3684.90 770.20 1* 1* 245.0000 1665.0000 /
  B4 OPEN ORAT 1634.20 5227.70 10560.50 1* 1* 565.0000 1836.0000 /
  /

DATES                                  -- Generated : Petrel
  21 JUL 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6925.90 1637.50 4433.50 1* 1* 440.0000 0.0000 /
  B2 OPEN ORAT 1278.20 3684.90 770.20 1* 1* 245.0000 1665.0000 /
  B4 OPEN ORAT 1634.20 5227.70 10692.30 1* 1* 565.0000 1835.0000 /
  /

DATES                                  -- Generated : Petrel
  22 JUL 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7116.10 1637.50 4557.20 1* 1* 440.0000 0.0000 /
  B2 OPEN ORAT 1278.20 3684.90 770.20 1* 1* 245.0000 1665.0000 /
  B4 OPEN ORAT 1634.20 5227.70 10574.60 1* 1* 565.0000 1835.0000 /
  /

DATES                                  -- Generated : Petrel
  23 JUL 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7252.50 1637.50 4645.80 1* 1* 440.0000 0.0000 /
  B2 OPEN ORAT 1278.20 3684.90 770.20 1* 1* 240.0000 1665.0000 /
  B4 OPEN ORAT 1634.20 5227.70 10459.00 1* 1* 560.0000 1835.0000 /
  /

DATES                                  -- Generated : Petrel
  24 JUL 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7051.20 1637.50 4515.00 1* 1* 440.0000 0.0000 /
  B2 OPEN ORAT 1278.20 3684.90 770.20 1* 1* 240.0000 1664.0000 /
  B4 OPEN ORAT 1634.20 5227.70 10583.80 1* 1* 560.0000 1835.0000 /
  /

DATES                                  -- Generated : Petrel
  25 JUL 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7124.10 1637.50 4562.40 1* 1* 440.0000 0.0000 /
  B2 OPEN ORAT 1278.20 3684.90 770.20 1* 1* 240.0000 1664.0000 /
  B4 OPEN ORAT 1634.20 5227.70 10502.40 1* 1* 560.0000 1834.0000 /
  /

DATES                                  -- Generated : Petrel
  26 JUL 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7156.30 1637.50 4583.30 1* 1* 440.0000 0.0000 /
  B2 OPEN ORAT 1278.20 3684.90 770.20 1* 1* 250.0000 1664.0000 /
  B4 OPEN ORAT 1634.20 5227.70 10503.50 1* 1* 560.0000 1834.0000 /
  /

DATES                                  -- Generated : Petrel
  27 JUL 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7162.20 1637.50 4587.20 1* 1* 440.0000 0.0000 /
  B2 OPEN ORAT 1278.20 3684.90 770.20 1* 1* 250.0000 1664.0000 /
  B4 OPEN ORAT 1634.20 5227.70 10511.60 1* 1* 560.0000 1834.0000 /
  /

DATES                                  -- Generated : Petrel
  28 JUL 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7078.40 1637.50 4532.70 1* 1* 440.0000 0.0000 /
  B2 OPEN ORAT 1278.20 3684.90 770.20 1* 1* 250.0000 1664.0000 /
  B4 OPEN ORAT 1634.20 5227.70 10538.20 1* 1* 560.0000 1834.0000 /
  /

DATES                                  -- Generated : Petrel
  29 JUL 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7088.70 1501.00 4614.90 1* 1* 440.0000 0.0000 /
  B2 OPEN ORAT 1171.60 3377.80 706.00 1* 1* 250.0000 1678.0000 /
  B4 OPEN ORAT 612.80 1960.40 4541.10 1* 1* 0.0000 1911.0000 /
  /

DATES                                  -- Generated : Petrel
  30 JUL 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 2720.60 989.30 1706.30 1* 1* 440.0000 0.0000 /
  B2 OPEN ORAT 106.50 307.10 64.20 1* 1* 60.0000 1701.0000 /
  B4 OPEN ORAT 851.10 2722.80 5436.50 1* 1* 700.0000 1830.0000 /
  /

DATES                                  -- Generated : Petrel
  31 JUL 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5897.40 1637.50 3704.40 1* 1* 430.0000 0.0000 /
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1662.0000 /
  B4 OPEN ORAT 1634.20 5227.70 10730.60 1* 1* 500.0000 1917.0000 /
  /

DATES                                  -- Generated : Petrel
  1 AUG 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 0.0000 /
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1768.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1921.0000 /
  /

DATES                                  -- Generated : Petrel
  2 AUG 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1807.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1923.0000 /
  /

DATES                                  -- Generated : Petrel
  3 AUG 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1808.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1925.0000 /
  /

DATES                                  -- Generated : Petrel
  4 AUG 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1809.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1927.0000 /
  /

DATES                                  -- Generated : Petrel
  5 AUG 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1810.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1929.0000 /
  /

DATES                                  -- Generated : Petrel
  6 AUG 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1811.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1931.0000 /
  /

DATES                                  -- Generated : Petrel
  7 AUG 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1812.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1932.0000 /
  /

DATES                                  -- Generated : Petrel
  8 AUG 2016 /
  /

DATES                                  -- Generated : Petrel
  9 AUG 2016 /
  /

DATES                                  -- Generated : Petrel
  10 AUG 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3988.90 930.70 2592.80 1* 1* 440.0000 0.0000 /
  B2 OPEN ORAT 633.00 1819.70 411.50 1* 1* 60.0000 1706.0000 /
  B4 OPEN ORAT 931.50 2971.20 6294.70 1* 1* 550.0000 1850.0000 /
  /

DATES                                  -- Generated : Petrel
  11 AUG 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6417.00 1464.70 4171.10 1* 1* 440.0000 0.0000 /
  B2 OPEN ORAT 1146.60 3296.00 745.30 1* 1* 100.0000 1694.0000 /
  B4 OPEN ORAT 1466.00 4676.00 8328.60 1* 1* 600.0000 1844.0000 /
  /

DATES                                  -- Generated : Petrel
  12 AUG 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6788.90 1464.70 4412.80 1* 1* 450.0000 0.0000 /
  B2 OPEN ORAT 671.70 2142.60 436.60 1* 1* 115.0000 1691.0000 /
  B4 OPEN ORAT 1466.00 4676.00 10981.60 1* 1* 560.0000 1844.0000 /
  /

DATES                                  -- Generated : Petrel
  13 AUG 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6769.20 1464.70 4399.90 1* 1* 450.0000 0.0000 /
  B2 OPEN ORAT 671.70 2142.60 436.60 1* 1* 150.0000 1689.0000 /
  B4 OPEN ORAT 1466.00 4676.00 12059.60 1* 1* 560.0000 1852.0000 /
  /

DATES                                  -- Generated : Petrel
  14 AUG 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6431.80 1464.70 4180.70 1* 1* 450.0000 0.0000 /
  B2 OPEN ORAT 671.70 2142.60 436.60 1* 1* 160.0000 1685.0000 /
  B4 OPEN ORAT 1466.00 4676.00 12141.70 1* 1* 600.0000 1852.0000 /
  /

DATES                                  -- Generated : Petrel
  15 AUG 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6620.90 1464.70 4303.60 1* 1* 450.0000 0.0000 /
  B2 OPEN ORAT 671.70 2142.60 436.60 1* 1* 180.0000 1680.0000 /
  B4 OPEN ORAT 1466.00 4676.00 11187.80 1* 1* 900.0000 1865.0000 /
  /

DATES                                  -- Generated : Petrel
  16 AUG 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6009.20 1464.70 3906.00 1* 1* 450.0000 0.0000 /
  B2 OPEN ORAT 692.70 2945.90 450.30 1* 1* 180.0000 1679.0000 /
  B4 OPEN ORAT 1466.00 4676.00 10401.80 1* 1* 900.0000 1863.0000 /
  /

DATES                                  -- Generated : Petrel
  17 AUG 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6324.90 1464.70 4111.20 1* 1* 450.0000 0.0000 /
  B2 OPEN ORAT 880.90 2965.60 572.60 1* 1* 180.0000 1679.0000 /
  B4 OPEN ORAT 1466.00 4676.00 11146.30 1* 1* 850.0000 1859.0000 /
  /

DATES                                  -- Generated : Petrel
  18 AUG 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6265.60 1464.70 4072.60 1* 1* 450.0000 0.0000 /
  B2 OPEN ORAT 806.60 3040.60 524.30 1* 1* 190.0000 1694.0000 /
  B4 OPEN ORAT 1466.00 4676.00 11304.00 1* 1* 850.0000 1859.0000 /
  /

DATES                                  -- Generated : Petrel
  19 AUG 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6194.40 1464.70 4026.30 1* 1* 450.0000 0.0000 /
  B2 OPEN ORAT 806.60 3040.60 524.30 1* 1* 190.0000 1700.0000 /
  B4 OPEN ORAT 1466.00 4676.00 10771.30 1* 1* 850.0000 1859.0000 /
  /

DATES                                  -- Generated : Petrel
  20 AUG 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6187.90 1464.70 4022.20 1* 1* 450.0000 0.0000 /
  B2 OPEN ORAT 806.60 3040.60 524.30 1* 1* 300.0000 1694.0000 /
  B4 OPEN ORAT 1466.00 4676.00 10666.50 1* 1* 750.0000 1855.0000 /
  /

DATES                                  -- Generated : Petrel
  21 AUG 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6487.50 1464.70 4216.90 1* 1* 450.0000 0.0000 /
  B2 OPEN ORAT 806.60 3040.60 524.30 1* 1* 240.0000 1698.0000 /
  B4 OPEN ORAT 1466.00 4676.00 10896.80 1* 1* 700.0000 1855.0000 /
  /

DATES                                  -- Generated : Petrel
  22 AUG 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6653.60 1464.70 4324.80 1* 1* 450.0000 0.0000 /
  B2 OPEN ORAT 806.60 3040.60 524.30 1* 1* 240.0000 1698.0000 /
  B4 OPEN ORAT 1466.00 4676.00 10797.90 1* 1* 650.0000 1855.0000 /
  /

DATES                                  -- Generated : Petrel
  23 AUG 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6853.10 1464.70 4454.50 1* 1* 420.0000 0.0000 /
  B2 OPEN ORAT 806.60 3040.60 524.30 1* 1* 250.0000 1698.0000 /
  B4 OPEN ORAT 1466.00 4676.00 10660.10 1* 1* 680.0000 1850.0000 /
  /

DATES                                  -- Generated : Petrel
  24 AUG 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6615.90 1464.70 4300.40 1* 1* 420.0000 0.0000 /
  B2 OPEN ORAT 806.60 3040.60 524.30 1* 1* 250.0000 1698.0000 /
  B4 OPEN ORAT 1466.00 4676.00 10772.30 1* 1* 680.0000 1850.0000 /
  /

DATES                                  -- Generated : Petrel
  25 AUG 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5854.90 1464.70 3805.70 1* 1* 500.0000 0.0000 /
  B2 OPEN ORAT 806.60 3040.60 524.30 1* 1* 200.0000 1717.0000 /
  B4 OPEN ORAT 1466.00 4676.00 6460.00 1* 1* 1620.0000 1915.0000 /
  /

DATES                                  -- Generated : Petrel
  26 AUG 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5484.50 1464.70 3564.90 1* 1* 700.0000 0.0000 /
  B2 OPEN ORAT 67.20 253.40 43.70 1* 1* 0.0000 1817.0000 /
  B4 OPEN ORAT 885.70 2825.10 2331.40 1* 1* 0.0000 1923.0000 /
  /

DATES                                  -- Generated : Petrel
  27 AUG 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 1329.60 671.30 864.30 1* 1* 0.0000 0.0000 /
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1820.0000 /
  B4 OPEN ORAT 0.00 0.00 1149.70 1* 1* 0.0000 1926.0000 /
  /

DATES                                  -- Generated : Petrel
  28 AUG 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 0.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1927.0000 /
  /

DATES                                  -- Generated : Petrel
  29 AUG 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1821.0000 /
  /

DATES                                  -- Generated : Petrel
  30 AUG 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1822.0000 /
  /

DATES                                  -- Generated : Petrel
  31 AUG 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1823.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1932.0000 /
  /

DATES                                  -- Generated : Petrel
  1 SEP 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1824.0000 /
  /

DATES                                  -- Generated : Petrel
  2 SEP 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1825.0000 /
  /

DATES                                  -- Generated : Petrel
  3 SEP 2016 /
  /

DATES                                  -- Generated : Petrel
  4 SEP 2016 /
  /

DATES                                  -- Generated : Petrel
  5 SEP 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4200.40 1050.10 2730.20 1* 1* 410.0000 0.0000 /
  B2 OPEN ORAT 622.00 2322.10 404.30 1* 1* 150.0000 1719.0000 /
  B4 OPEN ORAT 1017.40 3214.00 9138.50 1* 1* 680.0000 1856.0000 /
  /

DATES                                  -- Generated : Petrel
  6 SEP 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5747.40 1621.10 3735.80 1* 1* 400.0000 0.0000 /
  B2 OPEN ORAT 853.00 3184.60 554.40 1* 1* 170.0000 1712.0000 /
  B4 OPEN ORAT 1550.30 4897.50 10918.80 1* 1* 670.0000 1863.0000 /
  /

DATES                                  -- Generated : Petrel
  7 SEP 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6626.10 1868.90 4306.90 1* 1* 400.0000 0.0000 /
  B2 OPEN ORAT 853.00 3184.60 554.40 1* 1* 170.0000 1703.0000 /
  B4 OPEN ORAT 1550.30 4897.50 10358.60 1* 1* 660.0000 1863.0000 /
  /

DATES                                  -- Generated : Petrel
  8 SEP 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6359.40 1793.70 4133.60 1* 1* 400.0000 0.0000 /
  B2 OPEN ORAT 853.00 3184.60 554.40 1* 1* 170.0000 1703.0000 /
  B4 OPEN ORAT 1550.30 4897.50 10978.00 1* 1* 660.0000 1863.0000 /
  /

DATES                                  -- Generated : Petrel
  9 SEP 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6320.30 1782.70 4108.20 1* 1* 400.0000 0.0000 /
  B2 OPEN ORAT 853.00 3184.60 554.40 1* 1* 180.0000 1703.0000 /
  B4 OPEN ORAT 1550.30 4897.50 11063.40 1* 1* 660.0000 1863.0000 /
  /

DATES                                  -- Generated : Petrel
  10 SEP 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6904.70 1947.50 4488.10 1* 1* 400.0000 0.0000 /
  B2 OPEN ORAT 853.00 3184.60 554.40 1* 1* 180.0000 1704.0000 /
  B4 OPEN ORAT 1550.30 4897.50 10881.50 1* 1* 660.0000 1859.0000 /
  /

DATES                                  -- Generated : Petrel
  11 SEP 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6556.70 1849.30 4261.90 1* 1* 400.0000 0.0000 /
  B2 OPEN ORAT 853.00 3184.60 554.40 1* 1* 180.0000 1691.0000 /
  B4 OPEN ORAT 1550.30 4897.50 11102.70 1* 1* 660.0000 1859.0000 /
  /

DATES                                  -- Generated : Petrel
  12 SEP 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6478.50 2646.10 4211.00 1* 1* 400.0000 0.0000 /
  B2 OPEN ORAT 853.00 3184.60 554.40 1* 1* 180.0000 1689.0000 /
  B4 OPEN ORAT 1550.30 4897.50 11149.60 1* 1* 700.0000 1859.0000 /
  /

DATES                                  -- Generated : Petrel
  13 SEP 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6247.60 2551.80 4060.90 1* 1* 400.0000 0.0000 /
  B2 OPEN ORAT 1001.10 3162.60 650.70 1* 1* 240.0000 1708.0000 /
  B4 OPEN ORAT 1550.30 4897.50 11194.30 1* 1* 800.0000 1859.0000 /
  /

DATES                                  -- Generated : Petrel
  14 SEP 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5977.20 2441.40 3885.20 1* 1* 400.0000 0.0000 /
  B2 OPEN ORAT 1001.10 3162.60 650.70 1* 1* 200.0000 1708.0000 /
  B4 OPEN ORAT 1550.30 4897.50 11382.10 1* 1* 800.0000 1859.0000 /
  /

DATES                                  -- Generated : Petrel
  15 SEP 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6194.90 2530.30 4026.70 1* 1* 400.0000 0.0000 /
  B2 OPEN ORAT 1001.10 3162.60 650.70 1* 1* 220.0000 1708.0000 /
  B4 OPEN ORAT 1550.30 4897.50 10384.60 1* 1* 800.0000 1859.0000 /
  /

DATES                                  -- Generated : Petrel
  16 SEP 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6082.10 2484.20 3953.40 1* 1* 400.0000 0.0000 /
  B2 OPEN ORAT 1001.10 3162.60 650.70 1* 1* 220.0000 1687.0000 /
  B4 OPEN ORAT 1550.30 4897.50 10874.90 1* 1* 800.0000 1858.0000 /
  /

DATES                                  -- Generated : Petrel
  17 SEP 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6475.70 2645.00 4209.20 1* 1* 400.0000 0.0000 /
  B2 OPEN ORAT 1001.10 3162.60 650.70 1* 1* 220.0000 1686.0000 /
  B4 OPEN ORAT 1550.30 4897.50 10746.10 1* 1* 850.0000 1860.0000 /
  /

DATES                                  -- Generated : Petrel
  18 SEP 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6773.90 2766.80 4403.10 1* 1* 400.0000 0.0000 /
  B2 OPEN ORAT 1001.10 3162.60 650.70 1* 1* 230.0000 1686.0000 /
  B4 OPEN ORAT 1550.30 4897.50 10480.20 1* 1* 850.0000 1859.0000 /
  /

DATES                                  -- Generated : Petrel
  19 SEP 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7066.80 2886.40 4593.40 1* 1* 400.0000 0.0000 /
  B2 OPEN ORAT 1001.10 3162.60 650.70 1* 1* 230.0000 1686.0000 /
  B4 OPEN ORAT 1075.30 2103.00 10371.90 1* 1* 850.0000 1859.0000 /
  /

DATES                                  -- Generated : Petrel
  20 SEP 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7196.60 2939.50 4677.80 1* 1* 400.0000 0.0000 /
  B2 OPEN ORAT 1001.10 3162.60 650.70 1* 1* 230.0000 1686.0000 /
  B4 OPEN ORAT 1075.30 2103.00 10251.50 1* 1* 850.0000 1858.0000 /
  /

DATES                                  -- Generated : Petrel
  21 SEP 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7201.50 2941.40 4681.00 1* 1* 400.0000 0.0000 /
  B2 OPEN ORAT 1001.10 3162.60 650.70 1* 1* 230.0000 1686.0000 /
  B4 OPEN ORAT 1075.30 2103.00 10260.30 1* 1* 850.0000 1858.0000 /
  /

DATES                                  -- Generated : Petrel
  22 SEP 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6991.40 2855.60 4544.40 1* 1* 400.0000 0.0000 /
  B2 OPEN ORAT 1001.10 3162.60 650.70 1* 1* 240.0000 1686.0000 /
  B4 OPEN ORAT 1075.30 2103.00 10345.90 1* 1* 850.0000 1858.0000 /
  /

DATES                                  -- Generated : Petrel
  23 SEP 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7038.70 2875.00 4575.20 1* 1* 400.0000 0.0000 /
  B2 OPEN ORAT 1001.10 3162.60 650.70 1* 1* 240.0000 1686.0000 /
  B4 OPEN ORAT 1075.30 2103.00 10324.10 1* 1* 850.0000 1857.0000 /
  /

DATES                                  -- Generated : Petrel
  24 SEP 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7049.90 2879.50 4582.40 1* 1* 400.0000 0.0000 /
  B2 OPEN ORAT 1001.10 3162.60 650.70 1* 1* 240.0000 1686.0000 /
  B4 OPEN ORAT 1075.30 2103.00 10250.90 1* 1* 850.0000 1857.0000 /
  /

DATES                                  -- Generated : Petrel
  25 SEP 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7101.00 3043.30 4615.70 1* 1* 400.0000 0.0000 /
  B2 OPEN ORAT 1001.10 3162.60 650.70 1* 1* 240.0000 1686.0000 /
  B4 OPEN ORAT 1075.30 2103.00 10152.60 1* 1* 850.0000 1856.0000 /
  /

DATES                                  -- Generated : Petrel
  26 SEP 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7031.70 3013.60 4570.60 1* 1* 400.0000 0.0000 /
  B2 OPEN ORAT 1001.10 3162.60 650.70 1* 1* 250.0000 1686.0000 /
  B4 OPEN ORAT 1075.30 2103.00 10314.70 1* 1* 830.0000 1855.0000 /
  /

DATES                                  -- Generated : Petrel
  27 SEP 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7072.50 3031.10 4597.10 1* 1* 400.0000 0.0000 /
  B2 OPEN ORAT 1001.10 3162.60 650.70 1* 1* 250.0000 1686.0000 /
  B4 OPEN ORAT 1075.30 2103.00 10390.10 1* 1* 820.0000 1855.0000 /
  /

DATES                                  -- Generated : Petrel
  28 SEP 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7053.30 3022.90 4584.70 1* 1* 400.0000 0.0000 /
  B2 OPEN ORAT 1001.10 3162.60 650.70 1* 1* 250.0000 1687.0000 /
  B4 OPEN ORAT 1075.30 2103.00 10407.60 1* 1* 820.0000 1855.0000 /
  /

DATES                                  -- Generated : Petrel
  29 SEP 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7232.60 3403.60 4701.20 1* 1* 400.0000 0.0000 /
  B2 OPEN ORAT 1001.10 3162.60 650.70 1* 1* 250.0000 1687.0000 /
  B4 OPEN ORAT 1075.30 2103.00 9812.10 1* 1* 800.0000 1853.0000 /
  /

DATES                                  -- Generated : Petrel
  30 SEP 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6735.60 3169.70 4378.10 1* 1* 400.0000 0.0000 /
  B2 OPEN ORAT 1001.10 3162.60 650.70 1* 1* 260.0000 1690.0000 /
  B4 OPEN ORAT 1075.30 2103.00 10597.10 1* 1* 800.0000 1852.0000 /
  /

DATES                                  -- Generated : Petrel
  1 OCT 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6925.70 3259.10 4501.70 1* 1* 420.0000 0.0000 /
  B2 OPEN ORAT 1044.20 3760.10 678.80 1* 1* 250.0000 1690.0000 /
  B4 OPEN ORAT 1121.70 2500.30 10750.60 1* 1* 800.0000 1852.0000 /
  /

DATES                                  -- Generated : Petrel
  2 OCT 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7073.40 3643.90 4597.70 1* 1* 420.0000 0.0000 /
  B2 OPEN ORAT 1044.20 3760.10 678.80 1* 1* 260.0000 1689.0000 /
  B4 OPEN ORAT 1121.70 2500.30 10458.50 1* 1* 800.0000 1851.0000 /
  /

DATES                                  -- Generated : Petrel
  3 OCT 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7185.90 3701.90 4670.90 1* 1* 420.0000 0.0000 /
  B2 OPEN ORAT 1044.20 3760.10 678.80 1* 1* 260.0000 1689.0000 /
  B4 OPEN ORAT 1121.70 2500.30 10573.40 1* 1* 800.0000 1851.0000 /
  /

DATES                                  -- Generated : Petrel
  4 OCT 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7134.80 3675.50 4637.60 1* 1* 4000.0000 0.0000 /
  B2 OPEN ORAT 1044.20 3760.10 678.80 1* 1* 260.0000 1689.0000 /
  B4 OPEN ORAT 1121.70 2500.30 10386.60 1* 1* 800.0000 1850.0000 /
  /

DATES                                  -- Generated : Petrel
  5 OCT 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7154.20 3685.50 4650.20 1* 1* 400.0000 0.0000 /
  B2 OPEN ORAT 1044.20 3760.10 678.80 1* 1* 260.0000 1689.0000 /
  B4 OPEN ORAT 1121.70 2500.30 10280.00 1* 1* 800.0000 1850.0000 /
  /

DATES                                  -- Generated : Petrel
  6 OCT 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7136.10 3676.20 4638.40 1* 1* 400.0000 0.0000 /
  B2 OPEN ORAT 1044.20 3760.10 678.80 1* 1* 260.0000 1689.0000 /
  B4 OPEN ORAT 1121.70 2500.30 10414.80 1* 1* 800.0000 1849.0000 /
  /

DATES                                  -- Generated : Petrel
  7 OCT 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7155.90 3686.30 4651.30 1* 1* 400.0000 0.0000 /
  B2 OPEN ORAT 1044.20 3760.10 678.80 1* 1* 260.0000 1689.0000 /
  B4 OPEN ORAT 1121.70 2500.30 10346.90 1* 1* 800.0000 1849.0000 /
  /

DATES                                  -- Generated : Petrel
  8 OCT 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6923.20 3566.50 4500.10 1* 1* 400.0000 0.0000 /
  B2 OPEN ORAT 1133.40 4081.10 736.70 1* 1* 260.0000 1689.0000 /
  B4 OPEN ORAT 1121.70 2500.30 10755.20 1* 1* 800.0000 1849.0000 /
  /

DATES                                  -- Generated : Petrel
  9 OCT 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7022.50 3617.70 4564.60 1* 1* 400.0000 0.0000 /
  B2 OPEN ORAT 1133.40 4081.10 736.70 1* 1* 260.0000 1689.0000 /
  B4 OPEN ORAT 1121.70 2500.30 10257.70 1* 1* 800.0000 1849.0000 /
  /

DATES                                  -- Generated : Petrel
  10 OCT 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6904.30 3556.70 4487.80 1* 1* 400.0000 0.0000 /
  B2 OPEN ORAT 1133.40 4081.10 736.70 1* 1* 260.0000 1689.0000 /
  B4 OPEN ORAT 1121.70 2500.30 10252.50 1* 1* 800.0000 1849.0000 /
  /

DATES                                  -- Generated : Petrel
  11 OCT 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6920.20 3565.00 4498.20 1* 1* 400.0000 0.0000 /
  B2 OPEN ORAT 1133.40 4081.10 736.70 1* 1* 260.0000 1688.0000 /
  B4 OPEN ORAT 1203.80 2683.20 10292.10 1* 1* 800.0000 1849.0000 /
  /

DATES                                  -- Generated : Petrel
  12 OCT 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6865.10 3536.60 4462.30 1* 1* 400.0000 0.0000 /
  B2 OPEN ORAT 1133.40 4081.10 736.70 1* 1* 260.0000 1688.0000 /
  B4 OPEN ORAT 1203.80 2683.20 10154.00 1* 1* 800.0000 1849.0000 /
  /

DATES                                  -- Generated : Petrel
  13 OCT 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6915.60 3723.80 4495.10 1* 1* 400.0000 0.0000 /
  B2 OPEN ORAT 1133.40 4081.10 736.70 1* 1* 260.0000 1688.0000 /
  B4 OPEN ORAT 1203.80 2683.20 10079.10 1* 1* 800.0000 1848.0000 /
  /

DATES                                  -- Generated : Petrel
  14 OCT 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6747.50 3476.00 4385.90 1* 1* 400.0000 0.0000 /
  B2 OPEN ORAT 1133.40 4081.10 736.70 1* 1* 260.0000 1688.0000 /
  B4 OPEN ORAT 1203.80 2683.20 10052.40 1* 1* 800.0000 1848.0000 /
  /

DATES                                  -- Generated : Petrel
  15 OCT 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7002.30 3607.20 4551.50 1* 1* 400.0000 0.0000 /
  B2 OPEN ORAT 1133.40 4081.10 736.70 1* 1* 260.0000 1688.0000 /
  B4 OPEN ORAT 1203.80 2683.20 10165.80 1* 1* 750.0000 1848.0000 /
  /

DATES                                  -- Generated : Petrel
  16 OCT 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7237.10 3728.20 4704.10 1* 1* 400.0000 0.0000 /
  B2 OPEN ORAT 1133.40 4081.10 736.70 1* 1* 260.0000 1688.0000 /
  B4 OPEN ORAT 1203.80 2683.20 10324.20 1* 1* 750.0000 1843.0000 /
  /

DATES                                  -- Generated : Petrel
  17 OCT 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6221.80 3205.20 4044.20 1* 1* 400.0000 0.0000 /
  B2 OPEN ORAT 1086.20 3911.10 706.00 1* 1* 280.0000 1706.0000 /
  B4 OPEN ORAT 1153.60 2571.40 10429.80 1* 1* 770.0000 1843.0000 /
  /

DATES                                  -- Generated : Petrel
  18 OCT 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6654.30 3428.00 4325.30 1* 1* 400.0000 0.0000 /
  B2 OPEN ORAT 1133.40 4081.10 736.70 1* 1* 290.0000 1705.0000 /
  B4 OPEN ORAT 1203.80 2683.20 10011.00 1* 1* 770.0000 1844.0000 /
  /

DATES                                  -- Generated : Petrel
  19 OCT 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6751.50 3478.00 4388.50 1* 1* 380.0000 0.0000 /
  B2 OPEN ORAT 1133.40 4081.10 736.70 1* 1* 290.0000 1707.0000 /
  B4 OPEN ORAT 1203.80 2683.20 9978.80 1* 1* 780.0000 1844.0000 /
  /

DATES                                  -- Generated : Petrel
  20 OCT 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6723.70 3463.70 4370.40 1* 1* 380.0000 0.0000 /
  B2 OPEN ORAT 1133.40 4081.10 736.70 1* 1* 290.0000 1706.0000 /
  B4 OPEN ORAT 1203.80 2683.20 9988.90 1* 1* 780.0000 1843.0000 /
  /

DATES                                  -- Generated : Petrel
  21 OCT 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6812.90 3668.50 4428.40 1* 1* 380.0000 0.0000 /
  B2 OPEN ORAT 1133.40 4081.10 736.70 1* 1* 290.0000 1706.0000 /
  B4 OPEN ORAT 1203.80 2683.20 9961.90 1* 1* 780.0000 1843.0000 /
  /

DATES                                  -- Generated : Petrel
  22 OCT 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6801.60 3662.40 4421.00 1* 1* 380.0000 0.0000 /
  B2 OPEN ORAT 1133.40 4081.10 736.70 1* 1* 290.0000 1706.0000 /
  B4 OPEN ORAT 1203.80 2683.20 9946.30 1* 1* 780.0000 1843.0000 /
  /

DATES                                  -- Generated : Petrel
  23 OCT 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6774.60 3810.70 4403.50 1* 1* 380.0000 0.0000 /
  B2 OPEN ORAT 1133.40 4081.10 736.70 1* 1* 290.0000 1706.0000 /
  B4 OPEN ORAT 1203.80 2683.20 9879.80 1* 1* 780.0000 1843.0000 /
  /

DATES                                  -- Generated : Petrel
  24 OCT 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6873.50 3866.40 4467.80 1* 1* 390.0000 0.0000 /
  B2 OPEN ORAT 1133.40 4081.10 736.70 1* 1* 290.0000 1706.0000 /
  B4 OPEN ORAT 1203.80 2683.20 9799.50 1* 1* 780.0000 1843.0000 /
  /

DATES                                  -- Generated : Petrel
  25 OCT 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6847.00 3686.90 4450.60 1* 1* 390.0000 0.0000 /
  B2 OPEN ORAT 1133.40 4081.10 736.70 1* 1* 290.0000 1707.0000 /
  B4 OPEN ORAT 1203.80 2683.20 9714.70 1* 1* 780.0000 1842.0000 /
  /

DATES                                  -- Generated : Petrel
  26 OCT 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 7071.70 3807.90 4596.60 1* 1* 380.0000 0.0000 /
  B2 OPEN ORAT 1133.40 4081.10 736.70 1* 1* 290.0000 1707.0000 /
  B4 OPEN ORAT 1203.80 2683.20 9747.70 1* 1* 780.0000 1840.0000 /
  /

DATES                                  -- Generated : Petrel
  27 OCT 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6957.60 3746.40 4522.40 1* 1* 380.0000 0.0000 /
  B2 OPEN ORAT 1133.40 4081.10 736.70 1* 1* 290.0000 1707.0000 /
  B4 OPEN ORAT 1203.80 2683.20 9928.90 1* 1* 780.0000 1840.0000 /
  /

DATES                                  -- Generated : Petrel
  28 OCT 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6958.50 3746.90 4523.00 1* 1* 380.0000 0.0000 /
  B2 OPEN ORAT 1133.40 4081.10 736.70 1* 1* 290.0000 1705.0000 /
  B4 OPEN ORAT 1203.80 2683.20 10184.20 1* 1* 780.0000 1840.0000 /
  /

DATES                                  -- Generated : Petrel
  29 OCT 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6959.40 3747.30 4523.60 1* 1* 380.0000 0.0000 /
  B2 OPEN ORAT 1133.40 4081.10 736.70 1* 1* 290.0000 1705.0000 /
  B4 OPEN ORAT 1203.80 2683.20 10283.70 1* 1* 780.0000 1840.0000 /
  /

DATES                                  -- Generated : Petrel
  30 OCT 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6841.90 3684.10 4447.20 1* 1* 380.0000 0.0000 /
  B2 OPEN ORAT 1133.40 4081.10 736.70 1* 1* 285.0000 1704.0000 /
  B4 OPEN ORAT 1203.80 2683.20 10278.00 1* 1* 780.0000 1839.0000 /
  /

DATES                                  -- Generated : Petrel
  31 OCT 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6751.50 3635.40 4388.50 1* 1* 380.0000 0.0000 /
  B2 OPEN ORAT 1133.40 4081.10 736.70 1* 1* 285.0000 1704.0000 /
  B4 OPEN ORAT 1203.80 2683.20 10321.80 1* 1* 780.0000 1839.0000 /
  /

DATES                                  -- Generated : Petrel
  1 NOV 2016 /
  /

RPTRST
  BASIC=3 FLOWS FLORES FREQ=1 ALLPROPS RSSAT PCOW BG BO BW /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6471.70 3484.80 4206.60 1* 1* 380.0000 0.0000 /
  B2 OPEN ORAT 1069.50 4162.20 695.20 1* 1* 285.0000 1704.0000 /
  B4 OPEN ORAT 1263.00 2951.30 10509.20 1* 1* 780.0000 1838.0000 /
  /

DATES                                  -- Generated : Petrel
  2 NOV 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6613.00 3560.90 4298.50 1* 1* 380.0000 0.0000 /
  B2 OPEN ORAT 1069.50 4162.20 695.20 1* 1* 285.0000 1704.0000 /
  B4 OPEN ORAT 1263.00 2951.30 10413.30 1* 1* 770.0000 1838.0000 /
  /

DATES                                  -- Generated : Petrel
  3 NOV 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6704.40 3610.10 4357.90 1* 1* 380.0000 0.0000 /
  B2 OPEN ORAT 1069.50 4162.20 695.20 1* 1* 280.0000 1702.0000 /
  B4 OPEN ORAT 1263.00 2951.30 10457.00 1* 1* 780.0000 1838.0000 /
  /

DATES                                  -- Generated : Petrel
  4 NOV 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5828.70 3138.50 3788.70 1* 1* 380.0000 0.0000 /
  B2 OPEN ORAT 1069.50 4162.20 695.20 1* 1* 280.0000 1702.0000 /
  B4 OPEN ORAT 1263.00 2951.30 9908.10 1* 1* 770.0000 1838.0000 /
  /

DATES                                  -- Generated : Petrel
  5 NOV 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6649.50 3580.50 4322.20 1* 1* 380.0000 0.0000 /
  B2 OPEN ORAT 1069.50 4162.20 695.20 1* 1* 280.0000 1702.0000 /
  B4 OPEN ORAT 1263.00 2951.30 10238.60 1* 1* 780.0000 1838.0000 /
  /

DATES                                  -- Generated : Petrel
  6 NOV 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6791.80 3657.10 4414.60 1* 1* 380.0000 0.0000 /
  B2 OPEN ORAT 1069.50 4162.20 695.20 1* 1* 290.0000 1702.0000 /
  B4 OPEN ORAT 1263.00 2951.30 10283.20 1* 1* 780.0000 1838.0000 /
  /

DATES                                  -- Generated : Petrel
  7 NOV 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6611.80 3560.20 4297.70 1* 1* 380.0000 0.0000 /
  B2 OPEN ORAT 1069.50 4162.20 695.20 1* 1* 290.0000 1702.0000 /
  B4 OPEN ORAT 1263.00 2951.30 10262.10 1* 1* 780.0000 1840.0000 /
  /

DATES                                  -- Generated : Petrel
  8 NOV 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6686.30 3600.30 4346.10 1* 1* 380.0000 0.0000 /
  B2 OPEN ORAT 1069.50 4162.20 695.20 1* 1* 290.0000 1702.0000 /
  B4 OPEN ORAT 1226.90 2996.70 10375.70 1* 1* 780.0000 1840.0000 /
  /

DATES                                  -- Generated : Petrel
  9 NOV 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6469.30 3483.50 4205.00 1* 1* 380.0000 0.0000 /
  B2 OPEN ORAT 1103.70 4295.20 717.40 1* 1* 290.0000 1702.0000 /
  B4 OPEN ORAT 1226.90 2996.70 10370.50 1* 1* 780.0000 1840.0000 /
  /

DATES                                  -- Generated : Petrel
  10 NOV 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6571.30 3538.40 4271.30 1* 1* 380.0000 0.0000 /
  B2 OPEN ORAT 1103.70 4295.20 717.40 1* 1* 290.0000 1703.0000 /
  B4 OPEN ORAT 1226.90 2996.70 10141.30 1* 1* 780.0000 1838.0000 /
  /

DATES                                  -- Generated : Petrel
  11 NOV 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6533.70 3518.20 4246.90 1* 1* 380.0000 0.0000 /
  B2 OPEN ORAT 1103.70 4295.20 717.40 1* 1* 290.0000 1703.0000 /
  B4 OPEN ORAT 1299.10 2905.90 10072.60 1* 1* 720.0000 1838.0000 /
  /

DATES                                  -- Generated : Petrel
  12 NOV 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6534.40 3366.20 4247.40 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1103.70 4295.20 717.40 1* 1* 290.0000 1703.0000 /
  B4 OPEN ORAT 1154.70 3087.50 10079.20 1* 1* 710.0000 1838.0000 /
  /

DATES                                  -- Generated : Petrel
  13 NOV 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6322.20 3256.90 4109.40 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1103.70 4295.20 717.40 1* 1* 290.0000 1703.0000 /
  B4 OPEN ORAT 1154.70 3087.50 10155.10 1* 1* 710.0000 1838.0000 /
  /

DATES                                  -- Generated : Petrel
  14 NOV 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6519.90 3358.70 4237.90 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1103.70 4295.20 717.40 1* 1* 290.0000 1703.0000 /
  B4 OPEN ORAT 1154.70 3087.50 10205.70 1* 1* 710.0000 1838.0000 /
  /

DATES                                  -- Generated : Petrel
  15 NOV 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6068.40 3126.10 3944.40 1* 1* 360.0000 0.0000 /
  B2 OPEN ORAT 1046.20 4071.50 680.10 1* 1* 270.0000 1702.0000 /
  B4 OPEN ORAT 1094.60 2926.70 10141.50 1* 1* 690.0000 1838.0000 /
  /

DATES                                  -- Generated : Petrel
  16 NOV 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6504.60 3350.90 4228.00 1* 1* 360.0000 0.0000 /
  B2 OPEN ORAT 1103.70 4295.20 717.40 1* 1* 280.0000 1703.0000 /
  B4 OPEN ORAT 1154.70 3087.50 10163.60 1* 1* 680.0000 1838.0000 /
  /

DATES                                  -- Generated : Petrel
  17 NOV 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6483.00 3339.70 4214.00 1* 1* 360.0000 0.0000 /
  B2 OPEN ORAT 1103.70 4295.20 717.40 1* 1* 290.0000 1704.0000 /
  B4 OPEN ORAT 1154.70 3087.50 10071.60 1* 1* 670.0000 1838.0000 /
  /

DATES                                  -- Generated : Petrel
  18 NOV 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6521.90 3511.80 4239.20 1* 1* 360.0000 0.0000 /
  B2 OPEN ORAT 1103.70 4295.20 717.40 1* 1* 290.0000 1703.0000 /
  B4 OPEN ORAT 1154.70 3087.50 10309.40 1* 1* 670.0000 1838.0000 /
  /

DATES                                  -- Generated : Petrel
  19 NOV 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6434.80 3464.90 4182.60 1* 1* 360.0000 0.0000 /
  B2 OPEN ORAT 1103.70 4295.20 717.40 1* 1* 290.0000 1703.0000 /
  B4 OPEN ORAT 1154.70 3087.50 10996.00 1* 1* 670.0000 1838.0000 /
  /

DATES                                  -- Generated : Petrel
  20 NOV 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6557.50 3851.30 4262.40 1* 1* 360.0000 0.0000 /
  B2 OPEN ORAT 1103.70 4295.20 717.40 1* 1* 290.0000 1704.0000 /
  B4 OPEN ORAT 1154.70 3087.50 10646.20 1* 1* 670.0000 1838.0000 /
  /

DATES                                  -- Generated : Petrel
  21 NOV 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6539.90 3521.50 4250.90 1* 1* 360.0000 0.0000 /
  B2 OPEN ORAT 1103.70 4295.20 717.40 1* 1* 290.0000 1704.0000 /
  B4 OPEN ORAT 1154.70 3087.50 10520.60 1* 1* 670.0000 1838.0000 /
  /

DATES                                  -- Generated : Petrel
  22 NOV 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6611.70 3256.50 4297.60 1* 1* 360.0000 0.0000 /
  B2 OPEN ORAT 1103.70 4295.20 717.40 1* 1* 290.0000 1704.0000 /
  B4 OPEN ORAT 1263.00 2951.30 10508.00 1* 1* 670.0000 1838.0000 /
  /

DATES                                  -- Generated : Petrel
  23 NOV 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6720.70 3310.20 4368.50 1* 1* 360.0000 0.0000 /
  B2 OPEN ORAT 1103.70 4295.20 717.40 1* 1* 290.0000 1704.0000 /
  B4 OPEN ORAT 1154.70 3087.50 10469.10 1* 1* 670.0000 1838.0000 /
  /

DATES                                  -- Generated : Petrel
  24 NOV 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6389.60 3147.10 4153.30 1* 1* 360.0000 0.0000 /
  B2 OPEN ORAT 1057.70 4116.20 687.50 1* 1* 270.0000 1703.0000 /
  B4 OPEN ORAT 1106.60 2958.90 10513.20 1* 1* 670.0000 1838.0000 /
  /

DATES                                  -- Generated : Petrel
  25 NOV 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6650.50 3581.00 4322.80 1* 1* 360.0000 0.0000 /
  B2 OPEN ORAT 1103.70 4295.20 717.40 1* 1* 290.0000 1704.0000 /
  B4 OPEN ORAT 1154.70 3087.50 10229.80 1* 1* 670.0000 1838.0000 /
  /

DATES                                  -- Generated : Petrel
  26 NOV 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6253.20 3367.10 4064.60 1* 1* 360.0000 0.0000 /
  B2 OPEN ORAT 1103.70 4295.20 717.40 1* 1* 290.0000 1704.0000 /
  B4 OPEN ORAT 1154.70 3087.50 10131.00 1* 1* 670.0000 1838.0000 /
  /

DATES                                  -- Generated : Petrel
  27 NOV 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6395.10 3443.50 4156.80 1* 1* 360.0000 0.0000 /
  B2 OPEN ORAT 1103.70 4295.20 717.40 1* 1* 290.0000 1704.0000 /
  B4 OPEN ORAT 1082.50 3178.30 10553.80 1* 1* 670.0000 1838.0000 /
  /

DATES                                  -- Generated : Petrel
  28 NOV 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6690.90 3602.80 4349.10 1* 1* 360.0000 0.0000 /
  B2 OPEN ORAT 1103.70 4295.20 717.40 1* 1* 290.0000 1704.0000 /
  B4 OPEN ORAT 1082.50 3178.30 10333.50 1* 1* 670.0000 1838.0000 /
  /

DATES                                  -- Generated : Petrel
  29 NOV 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6583.00 3544.70 4279.00 1* 1* 360.0000 0.0000 /
  B2 OPEN ORAT 1103.70 4295.20 717.40 1* 1* 290.0000 1704.0000 /
  B4 OPEN ORAT 1082.50 3178.30 10402.60 1* 1* 670.0000 1838.0000 /
  /

DATES                                  -- Generated : Petrel
  30 NOV 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6642.30 3576.60 4317.50 1* 1* 360.0000 0.0000 /
  B2 OPEN ORAT 1103.70 4295.20 717.40 1* 1* 290.0000 1704.0000 /
  B4 OPEN ORAT 1082.50 3178.30 10376.10 1* 1* 670.0000 1838.0000 /
  /

DATES                                  -- Generated : Petrel
  1 DEC 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6658.70 3585.50 4325.20 1* 1* 360.0000 0.0000 /
  B2 OPEN ORAT 1254.70 3241.80 815.00 1* 1* 290.0000 1709.0000 /
  B4 OPEN ORAT 1291.30 2065.30 10354.80 1* 1* 670.0000 1838.0000 /
  /

DATES                                  -- Generated : Petrel
  2 DEC 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6485.60 3492.20 4212.70 1* 1* 360.0000 0.0000 /
  B2 OPEN ORAT 1254.70 3241.80 815.00 1* 1* 290.0000 1709.0000 /
  B4 OPEN ORAT 1291.30 2065.30 10400.30 1* 1* 670.0000 1838.0000 /
  /

DATES                                  -- Generated : Petrel
  3 DEC 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6766.00 3643.20 4394.90 1* 1* 360.0000 0.0000 /
  B2 OPEN ORAT 1254.70 3241.80 815.00 1* 1* 290.0000 1709.0000 /
  B4 OPEN ORAT 1291.30 2065.30 10201.10 1* 1* 670.0000 1838.0000 /
  /

DATES                                  -- Generated : Petrel
  4 DEC 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6632.00 3571.10 4307.80 1* 1* 360.0000 0.0000 /
  B2 OPEN ORAT 1234.20 3188.70 801.70 1* 1* 290.0000 1709.0000 /
  B4 OPEN ORAT 430.40 688.40 6569.50 1* 1* 670.0000 0.0000 /
  /

DATES                                  -- Generated : Petrel
  5 DEC 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6220.50 2665.90 4040.50 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1193.60 3083.80 775.30 1* 1* 290.0000 1709.0000 /
  B4 OPEN ORAT 0.00 0.00 96.20 1* 1* 0.0000 0.0000 /
  /

DATES                                  -- Generated : Petrel
  6 DEC 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6448.40 2763.60 4188.60 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1193.60 3083.80 775.30 1* 1* 290.0000 1704.0000 /
  B4 OPEN ORAT 185.60 296.90 2792.10 1* 1* 700.0000 0.0000 /
  /

DATES                                  -- Generated : Petrel
  7 DEC 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6479.50 2776.90 4208.80 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1193.60 3083.80 775.30 1* 1* 280.0000 1702.0000 /
  B4 OPEN ORAT 470.80 753.00 4750.00 1* 1* 0.0000 0.0000 /
  /

DATES                                  -- Generated : Petrel
  8 DEC 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6651.20 2716.70 4006.50 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 410.30 1060.10 266.50 1* 1* 0.0000 1807.0000 /
  B4 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 0.0000 /
  /

DATES                                  -- Generated : Petrel
  9 DEC 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5865.00 2395.60 3914.00 1* 1* 370.0000 0.0000 /
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1725.0000 /
  /

DATES                                  -- Generated : Petrel
  10 DEC 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5744.50 2346.30 4028.20 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 124.30 321.20 80.80 1* 1* 120.0000 1792.0000 /
  /

DATES                                  -- Generated : Petrel
  11 DEC 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5358.00 2188.50 3617.70 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 870.30 2248.60 565.30 1* 1* 100.0000 1721.0000 /
  /

DATES                                  -- Generated : Petrel
  12 DEC 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5827.70 2380.30 3577.70 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1193.60 3083.80 775.30 1* 1* 190.0000 1704.0000 /
  /

DATES                                  -- Generated : Petrel
  13 DEC 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5906.60 2531.40 4047.70 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1193.60 3083.80 775.30 1* 1* 210.0000 1703.0000 /
  /

DATES                                  -- Generated : Petrel
  14 DEC 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 6139.00 2631.00 4198.70 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1193.60 3083.80 775.30 1* 1* 240.0000 1703.0000 /
  /

DATES                                  -- Generated : Petrel
  15 DEC 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5835.90 2501.10 4443.70 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1193.60 3083.80 775.30 1* 1* 240.0000 1704.0000 /
  /

DATES                                  -- Generated : Petrel
  16 DEC 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5680.70 2434.60 4618.70 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1193.60 3083.80 775.30 1* 1* 250.0000 1704.0000 /
  /

DATES                                  -- Generated : Petrel
  17 DEC 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5617.80 2407.60 4634.70 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1193.60 3083.80 775.30 1* 1* 260.0000 1705.0000 /
  /

DATES                                  -- Generated : Petrel
  18 DEC 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5694.70 2440.60 4565.70 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1193.60 3083.80 775.30 1* 1* 260.0000 1705.0000 /
  /

DATES                                  -- Generated : Petrel
  19 DEC 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5723.00 2452.70 4631.70 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1193.60 3083.80 775.30 1* 1* 260.0000 1705.0000 /
  /

DATES                                  -- Generated : Petrel
  20 DEC 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5202.30 2229.50 4199.40 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1497.30 3008.80 972.60 1* 1* 280.0000 1705.0000 /
  /

DATES                                  -- Generated : Petrel
  21 DEC 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5267.80 2257.60 4472.40 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1497.30 3008.80 972.60 1* 1* 270.0000 1706.0000 /
  /

DATES                                  -- Generated : Petrel
  22 DEC 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5277.40 2841.70 4663.40 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1497.30 3008.80 972.60 1* 1* 270.0000 1706.0000 /
  /

DATES                                  -- Generated : Petrel
  23 DEC 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5302.60 2855.20 4645.40 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1497.30 3008.80 972.60 1* 1* 270.0000 1706.0000 /
  /

DATES                                  -- Generated : Petrel
  24 DEC 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5334.50 2872.40 4650.40 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1497.30 3008.80 972.60 1* 1* 270.0000 1706.0000 /
  /

DATES                                  -- Generated : Petrel
  25 DEC 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5318.80 2864.00 4636.40 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1497.30 3008.80 972.60 1* 1* 270.0000 1707.0000 /
  /

DATES                                  -- Generated : Petrel
  26 DEC 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5311.70 2860.20 4617.40 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1497.30 3008.80 972.60 1* 1* 270.0000 1707.0000 /
  /

DATES                                  -- Generated : Petrel
  27 DEC 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5360.30 2886.30 4639.40 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1497.30 3008.80 972.60 1* 1* 270.0000 1705.0000 /
  /

DATES                                  -- Generated : Petrel
  28 DEC 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5458.60 2939.30 4598.40 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1497.30 3008.80 972.60 1* 1* 270.0000 1706.0000 /
  /

DATES                                  -- Generated : Petrel
  29 DEC 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5374.00 2893.70 4690.40 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1497.30 3008.80 972.60 1* 1* 270.0000 1706.0000 /
  /

DATES                                  -- Generated : Petrel
  30 DEC 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5831.30 3140.00 4635.40 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1497.30 3008.80 972.60 1* 1* 270.0000 1706.0000 /
  /

DATES                                  -- Generated : Petrel
  31 DEC 2016 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5183.00 2670.00 4584.40 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1497.30 3008.80 972.60 1* 1* 280.0000 1706.0000 /
  /

DATES                                  -- Generated : Petrel
  1 JAN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5736.90 2955.40 4339.00 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1512.30 2462.30 983.00 1* 1* 280.0000 1706.0000 /
  /

DATES                                  -- Generated : Petrel
  2 JAN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5464.90 2815.30 4427.30 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1513.40 2464.00 983.70 1* 1* 280.0000 1706.0000 /
  /

DATES                                  -- Generated : Petrel
  3 JAN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5460.30 2812.90 4295.30 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1513.40 2464.00 983.70 1* 1* 280.0000 1706.0000 /
  /

DATES                                  -- Generated : Petrel
  4 JAN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5481.90 2824.00 4268.30 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1513.40 2464.00 983.70 1* 1* 280.0000 1706.0000 /
  /

DATES                                  -- Generated : Petrel
  5 JAN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5482.90 2824.50 4036.30 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1513.40 2464.00 983.70 1* 1* 280.0000 1706.0000 /
  /

DATES                                  -- Generated : Petrel
  6 JAN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5518.90 2843.10 4473.30 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1513.40 2464.00 983.70 1* 1* 280.0000 1706.0000 /
  /

DATES                                  -- Generated : Petrel
  7 JAN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5443.30 2804.10 4919.30 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1513.40 2464.00 983.70 1* 1* 280.0000 1706.0000 /
  /

DATES                                  -- Generated : Petrel
  8 JAN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5527.10 2847.30 4905.30 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1513.40 2464.00 983.70 1* 1* 280.0000 1706.0000 /
  /

DATES                                  -- Generated : Petrel
  9 JAN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5486.50 2826.40 4889.30 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1513.40 2464.00 983.70 1* 1* 280.0000 1706.0000 /
  /

DATES                                  -- Generated : Petrel
  10 JAN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5416.10 2790.10 4907.30 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1513.40 2464.00 983.70 1* 1* 290.0000 1712.0000 /
  /

DATES                                  -- Generated : Petrel
  11 JAN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5352.30 2882.00 4531.30 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1513.40 2464.00 983.70 1* 1* 290.0000 1706.0000 /
  /

DATES                                  -- Generated : Petrel
  12 JAN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5498.30 2960.60 4777.30 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1513.40 2464.00 983.70 1* 1* 290.0000 1706.0000 /
  /

DATES                                  -- Generated : Petrel
  13 JAN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5509.70 2966.70 4672.30 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1513.40 2464.00 983.70 1* 1* 280.0000 1707.0000 /
  /

DATES                                  -- Generated : Petrel
  14 JAN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5491.10 2956.80 4959.30 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1513.40 2464.00 983.70 1* 1* 280.0000 1707.0000 /
  /

DATES                                  -- Generated : Petrel
  15 JAN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5458.80 2939.30 5040.30 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1513.40 2464.00 983.70 1* 1* 280.0000 1707.0000 /
  /

DATES                                  -- Generated : Petrel
  16 JAN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5487.60 2954.80 4967.30 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1513.40 2464.00 983.70 1* 1* 280.0000 1707.0000 /
  /

DATES                                  -- Generated : Petrel
  17 JAN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5493.70 2958.20 4988.30 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1513.40 2464.00 983.70 1* 1* 280.0000 1707.0000 /
  /

DATES                                  -- Generated : Petrel
  18 JAN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5534.50 2980.10 4889.70 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1534.30 2498.00 997.30 1* 1* 280.0000 1706.0000 /
  /

DATES                                  -- Generated : Petrel
  19 JAN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5522.70 2973.80 4927.70 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1534.30 2498.00 997.30 1* 1* 280.0000 1706.0000 /
  /

DATES                                  -- Generated : Petrel
  20 JAN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5543.80 2985.10 4729.70 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1534.30 2498.00 997.30 1* 1* 280.0000 1706.0000 /
  /

DATES                                  -- Generated : Petrel
  21 JAN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5588.50 3009.20 4612.70 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1534.30 2498.00 997.30 1* 1* 280.0000 1706.0000 /
  /

DATES                                  -- Generated : Petrel
  22 JAN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5594.70 3012.50 4548.70 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1534.30 2498.00 997.30 1* 1* 280.0000 1706.0000 /
  /

DATES                                  -- Generated : Petrel
  23 JAN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5577.20 3003.10 4476.70 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1534.30 2498.00 997.30 1* 1* 280.0000 1707.0000 /
  /

DATES                                  -- Generated : Petrel
  24 JAN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5542.70 2984.50 4359.70 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1534.30 2498.00 997.30 1* 1* 280.0000 1707.0000 /
  /

DATES                                  -- Generated : Petrel
  25 JAN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5574.10 3001.40 4633.70 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1534.30 2498.00 997.30 1* 1* 280.0000 1707.0000 /
  /

DATES                                  -- Generated : Petrel
  26 JAN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4806.00 2587.80 4623.70 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1534.30 2498.00 997.30 1* 1* 280.0000 1707.0000 /
  /

DATES                                  -- Generated : Petrel
  27 JAN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5445.00 2931.90 4619.70 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1534.30 2498.00 997.30 1* 1* 280.0000 1707.0000 /
  /

DATES                                  -- Generated : Petrel
  28 JAN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5786.20 3115.60 4642.00 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1438.40 2341.90 935.00 1* 1* 270.0000 1707.0000 /
  /

DATES                                  -- Generated : Petrel
  29 JAN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5588.60 3009.20 4799.70 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1534.30 2498.00 997.30 1* 1* 270.0000 1707.0000 /
  /

DATES                                  -- Generated : Petrel
  30 JAN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5704.00 3071.40 4825.70 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1534.30 2498.00 997.30 1* 1* 270.0000 1707.0000 /
  /

DATES                                  -- Generated : Petrel
  31 JAN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5519.50 2972.10 4639.70 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1534.30 2498.00 997.30 1* 1* 270.0000 1707.0000 /
  /

DATES                                  -- Generated : Petrel
  1 FEB 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5429.20 2923.40 4429.50 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1513.20 4124.40 983.50 1* 1* 270.0000 1707.0000 /
  /

DATES                                  -- Generated : Petrel
  2 FEB 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5647.60 3041.00 4337.40 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1690.10 3666.60 1098.60 1* 1* 270.0000 1707.0000 /
  /

DATES                                  -- Generated : Petrel
  3 FEB 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5513.10 2968.60 4276.40 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1690.10 3666.60 1098.60 1* 1* 280.0000 1707.0000 /
  /

DATES                                  -- Generated : Petrel
  4 FEB 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4913.80 2645.90 3821.40 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1690.10 3666.60 1098.60 1* 1* 280.0000 1707.0000 /
  /

DATES                                  -- Generated : Petrel
  5 FEB 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5320.60 2864.90 4230.40 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1690.10 3666.60 1098.60 1* 1* 280.0000 1707.0000 /
  /

DATES                                  -- Generated : Petrel
  6 FEB 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5340.10 2875.40 4235.40 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1690.10 3666.60 1098.60 1* 1* 280.0000 1707.0000 /
  /

DATES                                  -- Generated : Petrel
  7 FEB 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5211.70 2806.30 4341.40 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1690.10 3666.60 1098.60 1* 1* 280.0000 1708.0000 /
  /

DATES                                  -- Generated : Petrel
  8 FEB 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5319.20 2864.20 4233.40 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1690.10 3666.60 1098.60 1* 1* 280.0000 1708.0000 /
  /

DATES                                  -- Generated : Petrel
  9 FEB 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5226.90 2814.50 4167.40 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1690.10 3666.60 1098.60 1* 1* 280.0000 1708.0000 /
  /

DATES                                  -- Generated : Petrel
  10 FEB 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5294.40 2850.80 4295.80 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1688.00 3662.00 1097.20 1* 1* 280.0000 1708.0000 /
  /

DATES                                  -- Generated : Petrel
  11 FEB 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5256.10 2830.20 4246.80 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1688.00 3662.00 1097.20 1* 1* 280.0000 1708.0000 /
  /

DATES                                  -- Generated : Petrel
  12 FEB 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5328.30 2869.10 4421.80 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1688.00 3662.00 1097.20 1* 1* 280.0000 1708.0000 /
  /

DATES                                  -- Generated : Petrel
  13 FEB 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5216.00 2808.60 4816.80 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1688.00 3662.00 1097.20 1* 1* 280.0000 1714.0000 /
  /

DATES                                  -- Generated : Petrel
  14 FEB 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5359.40 2885.80 4267.80 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1688.00 3662.00 1097.20 1* 1* 280.0000 1714.0000 /
  /

DATES                                  -- Generated : Petrel
  15 FEB 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5182.90 2790.80 4389.80 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1688.00 3662.00 1097.20 1* 1* 280.0000 1708.0000 /
  /

DATES                                  -- Generated : Petrel
  16 FEB 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5264.80 2834.90 4285.80 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1688.00 3662.00 1097.20 1* 1* 280.0000 1708.0000 /
  /

DATES                                  -- Generated : Petrel
  17 FEB 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5154.70 2775.60 4301.80 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1688.00 3662.00 1097.20 1* 1* 280.0000 1708.0000 /
  /

DATES                                  -- Generated : Petrel
  18 FEB 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5163.60 2780.40 4389.80 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1688.00 3662.00 1097.20 1* 1* 280.0000 1708.0000 /
  /

DATES                                  -- Generated : Petrel
  19 FEB 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5162.70 2779.90 4507.80 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1688.00 3662.00 1097.20 1* 1* 280.0000 1708.0000 /
  /

DATES                                  -- Generated : Petrel
  20 FEB 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5105.20 2748.90 4548.80 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1688.00 3662.00 1097.20 1* 1* 280.0000 1708.0000 /
  /

DATES                                  -- Generated : Petrel
  21 FEB 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5160.40 2778.70 4529.80 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1688.00 3662.00 1097.20 1* 1* 280.0000 1708.0000 /
  /

DATES                                  -- Generated : Petrel
  22 FEB 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5076.40 2733.40 4526.80 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1688.00 3662.00 1097.20 1* 1* 280.0000 1708.0000 /
  /

DATES                                  -- Generated : Petrel
  23 FEB 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5039.30 2713.50 4477.80 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1688.00 3662.00 1097.20 1* 1* 280.0000 1709.0000 /
  /

DATES                                  -- Generated : Petrel
  24 FEB 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5093.60 2742.70 4227.80 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1688.00 3662.00 1097.20 1* 1* 280.0000 1709.0000 /
  /

DATES                                  -- Generated : Petrel
  25 FEB 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5040.20 2714.00 4111.80 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1688.00 3662.00 1097.20 1* 1* 280.0000 1709.0000 /
  /

DATES                                  -- Generated : Petrel
  26 FEB 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5069.90 2729.90 4192.80 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1688.00 3662.00 1097.20 1* 1* 280.0000 1709.0000 /
  /

DATES                                  -- Generated : Petrel
  27 FEB 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4992.40 2688.20 4142.80 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1688.00 3662.00 1097.20 1* 1* 280.0000 1709.0000 /
  /

DATES                                  -- Generated : Petrel
  28 FEB 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5049.50 2719.00 4121.80 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1688.00 3662.00 1097.20 1* 1* 280.0000 1709.0000 /
  /

DATES                                  -- Generated : Petrel
  1 MAR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5068.70 2729.30 4266.30 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1555.20 3275.20 1009.70 1* 1* 280.0000 1708.0000 /
  /

DATES                                  -- Generated : Petrel
  2 MAR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5126.40 2640.90 4238.70 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1608.60 3242.80 1044.30 1* 1* 280.0000 1708.0000 /
  /

DATES                                  -- Generated : Petrel
  3 MAR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5146.90 2651.40 4176.70 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1608.60 3242.80 1044.30 1* 1* 280.0000 1708.0000 /
  /

DATES                                  -- Generated : Petrel
  4 MAR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5297.90 2729.20 4174.70 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1608.60 3242.80 1044.30 1* 1* 280.0000 1708.0000 /
  /

DATES                                  -- Generated : Petrel
  5 MAR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5083.50 2618.80 4187.70 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1608.60 3242.80 1044.30 1* 1* 280.0000 1708.0000 /
  /

DATES                                  -- Generated : Petrel
  6 MAR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5197.70 2677.60 4221.70 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1608.60 3242.80 1044.30 1* 1* 280.0000 1708.0000 /
  /

DATES                                  -- Generated : Petrel
  7 MAR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5173.50 2665.10 4244.70 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1608.60 3242.80 1044.30 1* 1* 280.0000 1708.0000 /
  /

DATES                                  -- Generated : Petrel
  8 MAR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5165.10 2660.80 4313.70 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1608.60 3242.80 1044.30 1* 1* 280.0000 1708.0000 /
  /

DATES                                  -- Generated : Petrel
  9 MAR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5163.70 2430.00 4329.70 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1608.60 3242.80 1044.30 1* 1* 280.0000 1708.0000 /
  /

DATES                                  -- Generated : Petrel
  10 MAR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5278.10 2483.80 4095.70 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1608.60 3242.80 1044.30 1* 1* 280.0000 1708.0000 /
  /

DATES                                  -- Generated : Petrel
  11 MAR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5228.80 2460.60 3976.70 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1608.60 3242.80 1044.30 1* 1* 280.0000 1715.0000 /
  /

DATES                                  -- Generated : Petrel
  12 MAR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5013.60 2359.40 4066.70 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1608.60 3242.80 1044.30 1* 1* 280.0000 1709.0000 /
  /

DATES                                  -- Generated : Petrel
  13 MAR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4276.00 1921.10 3952.90 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1508.10 3040.20 979.10 1* 1* 280.0000 1713.0000 /
  /

DATES                                  -- Generated : Petrel
  14 MAR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4498.40 2021.00 4144.70 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1608.60 3242.80 1044.30 1* 1* 270.0000 1711.0000 /
  /

DATES                                  -- Generated : Petrel
  15 MAR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4856.60 2081.40 4147.70 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1369.30 3299.60 1044.30 1* 1* 270.0000 1711.0000 /
  /

DATES                                  -- Generated : Petrel
  16 MAR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4690.40 2010.20 4273.10 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1569.40 3163.70 1018.90 1* 1* 280.0000 1711.0000 /
  /

DATES                                  -- Generated : Petrel
  17 MAR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4731.50 2027.80 4133.10 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1569.40 3163.70 1018.90 1* 1* 280.0000 1711.0000 /
  /

DATES                                  -- Generated : Petrel
  18 MAR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4743.60 2033.00 4025.10 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1569.40 3163.70 1018.90 1* 1* 280.0000 1711.0000 /
  /

DATES                                  -- Generated : Petrel
  19 MAR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4662.80 1998.40 3996.10 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1569.40 3163.70 1018.90 1* 1* 280.0000 1711.0000 /
  /

DATES                                  -- Generated : Petrel
  20 MAR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4705.90 2317.80 4177.10 1* 1* 370.0000 0.0000 /
  B2 OPEN ORAT 1569.40 3163.70 1018.90 1* 1* 280.0000 1711.0000 /
  /

DATES                                  -- Generated : Petrel
  21 MAR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4687.50 2308.80 3873.10 1* 1* 360.0000 0.0000 /
  B2 OPEN ORAT 1569.40 3163.70 1018.90 1* 1* 280.0000 1711.0000 /
  /

DATES                                  -- Generated : Petrel
  22 MAR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4677.30 2303.80 3894.10 1* 1* 360.0000 0.0000 /
  B2 OPEN ORAT 1569.40 3163.70 1018.90 1* 1* 280.0000 1711.0000 /
  /

DATES                                  -- Generated : Petrel
  23 MAR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4844.10 2385.90 3604.90 1* 1* 360.0000 0.0000 /
  B2 OPEN ORAT 1522.00 3068.30 988.10 1* 1* 280.0000 1715.0000 /
  /

DATES                                  -- Generated : Petrel
  24 MAR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4847.10 2387.40 3590.90 1* 1* 360.0000 0.0000 /
  B2 OPEN ORAT 1522.00 3068.30 988.10 1* 1* 280.0000 1715.0000 /
  /

DATES                                  -- Generated : Petrel
  25 MAR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4278.30 2107.20 3098.90 1* 1* 360.0000 0.0000 /
  B2 OPEN ORAT 1522.00 3068.30 988.10 1* 1* 280.0000 1715.0000 /
  /

DATES                                  -- Generated : Petrel
  26 MAR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4560.50 2246.20 3212.90 1* 1* 360.0000 0.0000 /
  B2 OPEN ORAT 1522.00 3068.30 988.10 1* 1* 300.0000 1734.0000 /
  /

DATES                                  -- Generated : Petrel
  27 MAR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4269.40 2102.90 3132.90 1* 1* 360.0000 0.0000 /
  B2 OPEN ORAT 1522.00 3068.30 988.10 1* 1* 280.0000 1734.0000 /
  /

DATES                                  -- Generated : Petrel
  28 MAR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4307.40 2121.60 3114.90 1* 1* 360.0000 0.0000 /
  B2 OPEN ORAT 1522.00 3068.30 988.10 1* 1* 280.0000 1734.0000 /
  /

DATES                                  -- Generated : Petrel
  29 MAR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4588.50 2260.00 3222.90 1* 1* 360.0000 0.0000 /
  B2 OPEN ORAT 1522.00 3068.30 988.10 1* 1* 280.0000 1732.0000 /
  /

DATES                                  -- Generated : Petrel
  30 MAR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5072.30 2498.30 3834.90 1* 1* 360.0000 0.0000 /
  B2 OPEN ORAT 1522.00 3068.30 988.10 1* 1* 280.0000 1715.0000 /
  /

DATES                                  -- Generated : Petrel
  31 MAR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5091.60 2507.80 3842.90 1* 1* 360.0000 0.0000 /
  B2 OPEN ORAT 1522.00 3068.30 988.10 1* 1* 270.0000 1715.0000 /
  /

DATES                                  -- Generated : Petrel
  1 APR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4770.00 2349.40 3920.70 1* 1* 360.0000 0.0000 /
  B2 OPEN ORAT 1553.60 4897.00 989.30 1* 1* 270.0000 1714.0000 /
  /

DATES                                  -- Generated : Petrel
  2 APR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4826.50 2377.20 3912.10 1* 1* 360.0000 0.0000 /
  B2 OPEN ORAT 1553.60 4897.00 1009.90 1* 1* 270.0000 1714.0000 /
  /

DATES                                  -- Generated : Petrel
  3 APR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4838.10 2382.90 3904.10 1* 1* 360.0000 0.0000 /
  B2 OPEN ORAT 1553.60 4897.00 1009.90 1* 1* 270.0000 1714.0000 /
  /

DATES                                  -- Generated : Petrel
  4 APR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4808.20 2368.20 3912.10 1* 1* 360.0000 0.0000 /
  B2 OPEN ORAT 1553.60 4897.00 1009.90 1* 1* 270.0000 1714.0000 /
  /

DATES                                  -- Generated : Petrel
  5 APR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4790.40 2359.40 4190.10 1* 1* 360.0000 0.0000 /
  B2 OPEN ORAT 1553.60 4897.00 1009.90 1* 1* 270.0000 1714.0000 /
  /

DATES                                  -- Generated : Petrel
  6 APR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4804.90 2366.60 4052.10 1* 1* 360.0000 0.0000 /
  B2 OPEN ORAT 1553.60 4897.00 1009.90 1* 1* 270.0000 1714.0000 /
  /

DATES                                  -- Generated : Petrel
  7 APR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4827.30 2377.60 3961.10 1* 1* 360.0000 0.0000 /
  B2 OPEN ORAT 1553.60 4897.00 1009.90 1* 1* 270.0000 1714.0000 /
  /

DATES                                  -- Generated : Petrel
  8 APR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4043.80 1991.70 3546.30 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1521.30 4795.00 1009.90 1* 1* 280.0000 1732.0000 /
  /

DATES                                  -- Generated : Petrel
  9 APR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4353.40 2144.20 3741.20 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1553.60 4897.00 988.80 1* 1* 260.0000 1715.0000 /
  /

DATES                                  -- Generated : Petrel
  10 APR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4350.10 2142.60 3295.10 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1488.90 4692.90 1009.90 1* 1* 200.0000 1703.0000 /
  /

DATES                                  -- Generated : Petrel
  11 APR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5020.30 2472.70 4108.20 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1553.60 4897.00 967.80 1* 1* 210.0000 1690.0000 /
  /

DATES                                  -- Generated : Petrel
  12 APR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5045.80 2485.20 4291.10 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1553.60 4897.00 1009.90 1* 1* 215.0000 1689.0000 /
  /

DATES                                  -- Generated : Petrel
  13 APR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5088.00 2506.00 4363.10 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1553.60 4897.00 1009.90 1* 1* 215.0000 1689.0000 /
  /

DATES                                  -- Generated : Petrel
  14 APR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4980.00 2681.50 4869.10 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1553.60 4897.00 1009.90 1* 1* 215.0000 1711.0000 /
  /

DATES                                  -- Generated : Petrel
  15 APR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4931.10 2655.20 4236.10 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1553.60 4897.00 1009.90 1* 1* 215.0000 1711.0000 /
  /

DATES                                  -- Generated : Petrel
  16 APR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4964.80 2673.40 4402.10 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1553.60 4897.00 1009.90 1* 1* 215.0000 1711.0000 /
  /

DATES                                  -- Generated : Petrel
  17 APR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4976.10 2679.50 4404.10 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1553.60 4897.00 1009.90 1* 1* 215.0000 1689.0000 /
  /

DATES                                  -- Generated : Petrel
  18 APR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4958.20 2669.80 4408.10 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1553.60 4897.00 1009.90 1* 1* 215.0000 1689.0000 /
  /

DATES                                  -- Generated : Petrel
  19 APR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4960.50 2671.10 4422.10 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1553.60 4897.00 1009.90 1* 1* 215.0000 1689.0000 /
  /

DATES                                  -- Generated : Petrel
  20 APR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4941.80 2661.00 4428.10 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1553.60 4897.00 1009.90 1* 1* 215.0000 1690.0000 /
  /

DATES                                  -- Generated : Petrel
  21 APR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5058.50 2723.80 4363.10 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1553.60 4897.00 1009.90 1* 1* 240.0000 1690.0000 /
  /

DATES                                  -- Generated : Petrel
  22 APR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5081.60 2736.30 4370.10 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1553.60 4897.00 1009.90 1* 1* 215.0000 1690.0000 /
  /

DATES                                  -- Generated : Petrel
  23 APR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5115.10 2754.30 4381.10 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1553.60 4897.00 1009.90 1* 1* 215.0000 1690.0000 /
  /

DATES                                  -- Generated : Petrel
  24 APR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5093.60 2742.70 4386.10 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1553.60 4897.00 1009.90 1* 1* 215.0000 1689.0000 /
  /

DATES                                  -- Generated : Petrel
  25 APR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5079.60 2735.20 4366.10 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1553.60 4897.00 1009.90 1* 1* 215.0000 1689.0000 /
  /

DATES                                  -- Generated : Petrel
  26 APR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5094.80 2743.30 4366.10 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1553.60 4897.00 1009.90 1* 1* 215.0000 1689.0000 /
  /

DATES                                  -- Generated : Petrel
  27 APR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5099.90 2746.10 4335.10 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1553.60 4897.00 1009.90 1* 1* 215.0000 1689.0000 /
  /

DATES                                  -- Generated : Petrel
  28 APR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5105.90 2749.30 4348.10 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1553.60 4897.00 1009.90 1* 1* 215.0000 1689.0000 /
  /

DATES                                  -- Generated : Petrel
  29 APR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4988.00 2685.80 4348.10 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1553.60 4897.00 1009.90 1* 1* 225.0000 1689.0000 /
  /

DATES                                  -- Generated : Petrel
  30 APR 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4851.70 2612.50 4341.10 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1553.60 4897.00 1009.90 1* 1* 225.0000 1689.0000 /
  /

DATES                                  -- Generated : Petrel
  1 MAY 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4728.30 2546.00 4312.20 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1589.00 4554.30 1032.80 1* 1* 230.0000 1689.0000 /
  /

DATES                                  -- Generated : Petrel
  2 MAY 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4858.70 2616.20 4319.20 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1589.00 4554.30 1032.80 1* 1* 220.0000 1689.0000 /
  /

DATES                                  -- Generated : Petrel
  3 MAY 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4850.30 2611.70 4217.20 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1589.00 4554.30 1032.80 1* 1* 240.0000 1689.0000 /
  /

DATES                                  -- Generated : Petrel
  4 MAY 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4896.20 2636.40 4092.20 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1589.00 4554.30 1032.80 1* 1* 240.0000 1689.0000 /
  /

DATES                                  -- Generated : Petrel
  5 MAY 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4857.10 2615.40 4278.20 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1589.00 4554.30 1032.80 1* 1* 240.0000 1689.0000 /
  /

DATES                                  -- Generated : Petrel
  6 MAY 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4810.80 2590.40 4096.20 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1589.00 4554.30 1032.80 1* 1* 240.0000 1689.0000 /
  /

DATES                                  -- Generated : Petrel
  7 MAY 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4844.20 2608.40 4183.20 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1589.00 4554.30 1032.80 1* 1* 240.0000 1689.0000 /
  /

DATES                                  -- Generated : Petrel
  8 MAY 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4795.90 2582.40 4144.20 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1589.00 4554.30 1032.80 1* 1* 240.0000 1689.0000 /
  /

DATES                                  -- Generated : Petrel
  9 MAY 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4750.80 2558.10 4111.20 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1589.00 4554.30 1032.80 1* 1* 240.0000 1689.0000 /
  /

DATES                                  -- Generated : Petrel
  10 MAY 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4792.00 2580.30 4111.30 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1434.90 4916.10 932.70 1* 1* 280.0000 1709.0000 /
  /

DATES                                  -- Generated : Petrel
  11 MAY 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4951.10 2666.00 4461.90 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1434.90 4916.10 932.70 1* 1* 240.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  12 MAY 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4985.00 2684.20 4285.30 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1434.90 4916.10 932.70 1* 1* 240.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  13 MAY 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4889.10 2632.60 4317.30 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1434.90 4916.10 932.70 1* 1* 240.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  14 MAY 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4814.10 2592.20 4318.30 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1434.90 4916.10 932.70 1* 1* 240.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  15 MAY 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4817.30 2593.90 4273.30 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1434.90 4916.10 932.70 1* 1* 240.0000 1688.0000 /
  /

DATES                                  -- Generated : Petrel
  16 MAY 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4801.90 2585.60 4335.30 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1434.90 4916.10 932.70 1* 1* 240.0000 1688.0000 /
  /

DATES                                  -- Generated : Petrel
  17 MAY 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4812.90 2591.60 4283.30 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1434.90 4916.10 932.70 1* 1* 240.0000 1689.0000 /
  /

DATES                                  -- Generated : Petrel
  18 MAY 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4812.10 2591.20 4290.30 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1434.90 4916.10 932.70 1* 1* 240.0000 1688.0000 /
  /

DATES                                  -- Generated : Petrel
  19 MAY 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4846.10 2609.40 4265.30 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1434.90 4916.10 932.70 1* 1* 240.0000 1688.0000 /
  /

DATES                                  -- Generated : Petrel
  20 MAY 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4841.70 2607.10 4254.30 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1434.90 4916.10 932.70 1* 1* 240.0000 1688.0000 /
  /

DATES                                  -- Generated : Petrel
  21 MAY 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4872.50 2623.70 4256.30 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1434.90 4916.10 932.70 1* 1* 240.0000 1688.0000 /
  /

DATES                                  -- Generated : Petrel
  22 MAY 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4915.50 2646.80 4281.30 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1434.90 4916.10 932.70 1* 1* 240.0000 1688.0000 /
  /

DATES                                  -- Generated : Petrel
  23 MAY 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4942.00 2661.10 4283.30 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1434.90 4916.10 932.70 1* 1* 240.0000 1688.0000 /
  /

DATES                                  -- Generated : Petrel
  24 MAY 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4875.30 2625.10 4319.80 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1434.90 4916.10 932.70 1* 1* 240.0000 1688.0000 /
  /

DATES                                  -- Generated : Petrel
  25 MAY 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4855.90 2614.70 4340.30 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1434.90 4916.10 932.70 1* 1* 240.0000 1688.0000 /
  /

DATES                                  -- Generated : Petrel
  26 MAY 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4901.30 2639.20 4319.30 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1434.90 4916.10 932.70 1* 1* 240.0000 1688.0000 /
  /

DATES                                  -- Generated : Petrel
  27 MAY 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4962.50 2672.10 4316.30 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1434.90 4916.10 932.70 1* 1* 240.0000 1688.0000 /
  /

DATES                                  -- Generated : Petrel
  28 MAY 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4956.20 2668.70 4311.30 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1434.90 4916.10 932.70 1* 1* 240.0000 1688.0000 /
  /

DATES                                  -- Generated : Petrel
  29 MAY 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4952.20 2666.60 4309.30 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1434.90 4916.10 932.70 1* 1* 240.0000 1688.0000 /
  /

DATES                                  -- Generated : Petrel
  30 MAY 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4983.80 2683.60 4236.30 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1434.90 4916.10 932.70 1* 1* 240.0000 1688.0000 /
  /

DATES                                  -- Generated : Petrel
  31 MAY 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4947.90 2664.20 4224.30 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1434.90 4916.10 932.70 1* 1* 240.0000 1688.0000 /
  /

DATES                                  -- Generated : Petrel
  1 JUN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5177.30 2787.80 4222.20 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1487.40 4710.50 985.80 1* 1* 240.0000 1688.0000 /
  /

DATES                                  -- Generated : Petrel
  2 JUN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5217.30 2809.30 4264.20 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1487.40 4710.50 985.80 1* 1* 240.0000 1688.0000 /
  /

DATES                                  -- Generated : Petrel
  3 JUN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5131.10 2762.90 4209.20 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1487.40 4710.50 985.80 1* 1* 240.0000 1688.0000 /
  /

DATES                                  -- Generated : Petrel
  4 JUN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5196.70 2798.20 4153.20 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1487.40 4710.50 985.80 1* 1* 240.0000 1688.0000 /
  /

DATES                                  -- Generated : Petrel
  5 JUN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5203.30 2801.80 4161.20 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1487.40 4710.50 985.80 1* 1* 240.0000 1687.0000 /
  /

DATES                                  -- Generated : Petrel
  6 JUN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5162.90 2780.00 4108.20 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1487.40 4710.50 985.80 1* 1* 240.0000 1687.0000 /
  /

DATES                                  -- Generated : Petrel
  7 JUN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5200.00 2800.00 4036.20 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1487.40 4710.50 985.80 1* 1* 240.0000 1687.0000 /
  /

DATES                                  -- Generated : Petrel
  8 JUN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5175.20 2786.70 4063.20 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1487.40 4710.50 985.80 1* 1* 240.0000 1687.0000 /
  /

DATES                                  -- Generated : Petrel
  9 JUN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5191.30 2795.30 4129.20 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1487.40 4710.50 985.80 1* 1* 240.0000 1687.0000 /
  /

DATES                                  -- Generated : Petrel
  10 JUN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4959.60 2670.60 4172.40 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1515.70 4800.10 1004.60 1* 1* 240.0000 1687.0000 /
  /

DATES                                  -- Generated : Petrel
  11 JUN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5155.60 2776.10 4481.40 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1515.70 4800.10 1004.60 1* 1* 240.0000 1687.0000 /
  /

DATES                                  -- Generated : Petrel
  12 JUN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5142.80 2769.20 4089.40 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1515.70 4800.10 1004.60 1* 1* 240.0000 1687.0000 /
  /

DATES                                  -- Generated : Petrel
  13 JUN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5179.90 2789.20 3999.40 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1515.70 4800.10 1004.60 1* 1* 240.0000 1687.0000 /
  /

DATES                                  -- Generated : Petrel
  14 JUN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5122.20 2758.10 4012.80 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1515.70 4800.10 985.20 1* 1* 240.0000 1687.0000 /
  /

DATES                                  -- Generated : Petrel
  15 JUN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5153.10 2774.80 4053.80 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1515.70 4800.10 985.20 1* 1* 240.0000 1687.0000 /
  /

DATES                                  -- Generated : Petrel
  16 JUN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5130.80 2762.80 4092.80 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1515.70 4800.10 985.20 1* 1* 240.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  17 JUN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5146.90 2771.40 4129.80 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1515.70 4800.10 985.20 1* 1* 240.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  18 JUN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5137.00 2766.10 4162.80 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1515.70 4800.10 985.20 1* 1* 240.0000 1687.0000 /
  /

DATES                                  -- Generated : Petrel
  19 JUN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5152.70 2774.50 4157.80 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1515.70 4800.10 985.20 1* 1* 240.0000 1687.0000 /
  /

DATES                                  -- Generated : Petrel
  20 JUN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5131.70 2763.20 4081.80 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1515.70 4800.10 985.20 1* 1* 240.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  21 JUN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4965.20 2673.60 4029.60 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1580.70 5005.80 1027.40 1* 1* 240.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  22 JUN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5037.00 2712.20 4014.60 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1580.70 5005.80 1027.40 1* 1* 240.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  23 JUN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4978.80 2680.90 3997.60 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1580.70 5005.80 1027.40 1* 1* 240.0000 1687.0000 /
  /

DATES                                  -- Generated : Petrel
  24 JUN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 5011.00 2698.20 4003.60 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1580.70 5005.80 1027.40 1* 1* 240.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  25 JUN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4841.40 2606.90 3998.60 1* 1* 350.0000 0.0000 /
  B2 OPEN ORAT 1580.70 5005.80 1027.40 1* 1* 240.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  26 JUN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4782.70 2575.30 3985.60 1* 1* 330.0000 0.0000 /
  B2 OPEN ORAT 1580.70 5005.80 1027.40 1* 1* 240.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  27 JUN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4593.90 2815.60 3780.00 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 1141.50 3969.30 742.00 1* 1* 220.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  28 JUN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4599.60 3066.40 3926.00 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 1141.50 3969.30 742.00 1* 1* 220.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  29 JUN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4630.50 2719.50 4004.00 1* 1* 295.0000 0.0000 /
  B2 OPEN ORAT 1141.50 3969.30 742.00 1* 1* 230.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  30 JUN 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4635.20 3090.10 3888.00 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 1141.50 3969.30 742.00 1* 1* 230.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  1 JUL 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4368.60 2912.40 3869.80 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 1117.30 3705.20 726.20 1* 1* 230.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  2 JUL 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4406.30 2937.50 3917.80 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 1117.30 3705.20 726.20 1* 1* 230.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  3 JUL 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3977.00 2651.40 4017.80 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 1117.30 3705.20 726.20 1* 1* 230.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  4 JUL 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4353.90 2902.60 3772.80 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 1117.30 3705.20 726.20 1* 1* 230.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  5 JUL 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4099.80 3354.40 4072.80 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 1117.30 3705.20 726.20 1* 1* 230.0000 1685.0000 /
  /

DATES                                  -- Generated : Petrel
  6 JUL 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4248.50 3476.10 4002.80 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 1117.30 3705.20 726.20 1* 1* 230.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  7 JUL 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4294.00 3109.40 3824.80 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 1117.30 3705.20 726.20 1* 1* 230.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  8 JUL 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4194.30 2914.70 3772.80 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 1117.30 3705.20 726.20 1* 1* 230.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  9 JUL 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4281.00 3100.00 3816.80 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 1117.30 3705.20 726.20 1* 1* 230.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  10 JUL 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4134.30 2993.80 3696.70 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 1100.50 4692.10 715.30 1* 1* 225.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  11 JUL 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4289.20 3105.90 3671.70 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 1100.50 4692.10 715.30 1* 1* 230.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  12 JUL 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4250.50 3078.00 3667.70 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 1100.50 4692.10 715.30 1* 1* 220.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  13 JUL 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4244.40 3073.50 3602.70 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 1100.50 4692.10 715.30 1* 1* 220.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  14 JUL 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4264.60 3088.20 3715.70 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 1100.50 4692.10 715.30 1* 1* 220.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  15 JUL 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4288.10 3105.20 3752.70 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 1100.50 4692.10 715.30 1* 1* 220.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  16 JUL 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4293.50 3109.10 3679.70 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 1100.50 4692.10 715.30 1* 1* 220.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  17 JUL 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4274.00 3095.00 3651.70 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 1100.50 4692.10 715.30 1* 1* 220.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  18 JUL 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4263.90 3087.60 3625.70 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 1100.50 4692.10 715.30 1* 1* 220.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  19 JUL 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4267.50 3090.30 3624.70 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 1100.50 4692.10 715.30 1* 1* 220.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  20 JUL 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4250.50 3078.00 3615.70 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 1100.50 4692.10 715.30 1* 1* 220.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  21 JUL 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4265.30 3088.70 3622.70 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 1100.50 4692.10 715.30 1* 1* 220.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  22 JUL 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4259.60 3084.50 3627.70 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 1100.50 4692.10 715.30 1* 1* 220.0000 1687.0000 /
  /

DATES                                  -- Generated : Petrel
  23 JUL 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4268.60 3091.00 3622.70 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 1100.50 4692.10 715.30 1* 1* 220.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  24 JUL 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4270.00 3092.10 3628.70 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 1100.50 4692.10 715.30 1* 1* 220.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  25 JUL 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4274.70 3095.50 3623.70 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 1100.50 4692.10 715.30 1* 1* 220.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  26 JUL 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4219.50 3055.50 3659.70 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 1100.50 4692.10 715.30 1* 1* 220.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  27 JUL 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4301.40 3114.80 3851.70 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 1100.50 4692.10 715.30 1* 1* 220.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  28 JUL 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4258.50 3083.70 3741.70 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 1100.50 4692.10 715.30 1* 1* 220.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  29 JUL 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4297.50 3111.90 3837.70 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 1100.50 4692.10 715.30 1* 1* 220.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  30 JUL 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4173.00 3148.10 3730.70 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 1100.50 4692.10 715.30 1* 1* 220.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  31 JUL 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4154.30 3134.00 3721.70 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 1100.50 4692.10 715.30 1* 1* 220.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  1 AUG 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4201.40 3169.50 3744.90 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 1030.90 4220.00 670.10 1* 1* 220.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  2 AUG 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4210.80 3176.60 3794.90 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 1030.90 4220.00 670.10 1* 1* 220.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  3 AUG 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4201.00 3169.20 3832.90 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 1030.90 4220.00 670.10 1* 1* 220.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  4 AUG 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4190.50 3161.30 3722.90 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 1030.90 4220.00 670.10 1* 1* 220.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  5 AUG 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4203.80 3171.30 3715.90 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 1030.90 4220.00 670.10 1* 1* 220.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  6 AUG 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4204.50 3171.80 3702.90 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 1030.90 4220.00 670.10 1* 1* 220.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  7 AUG 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4151.00 3131.50 3709.90 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 1030.90 4220.00 670.10 1* 1* 260.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  8 AUG 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3997.20 3015.40 3441.90 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 1030.90 4220.00 670.10 1* 1* 250.0000 1686.0000 /
  /

DATES                                  -- Generated : Petrel
  9 AUG 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3986.90 3007.70 3311.90 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 1030.90 4220.00 670.10 1* 1* 250.0000 1708.0000 /
  /

DATES                                  -- Generated : Petrel
  10 AUG 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4097.40 3091.10 3433.70 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 1028.30 3793.70 668.40 1* 1* 250.0000 1708.0000 /
  /

DATES                                  -- Generated : Petrel
  11 AUG 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4086.80 3083.00 3144.60 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 1028.30 3793.70 668.40 1* 1* 245.0000 1707.0000 /
  /

DATES                                  -- Generated : Petrel
  12 AUG 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4055.40 3059.30 3125.60 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 1028.30 3793.70 668.40 1* 1* 245.0000 1707.0000 /
  /

DATES                                  -- Generated : Petrel
  13 AUG 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3533.30 2665.50 2475.10 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 889.10 3280.00 577.90 1* 1* 45.0000 1726.0000 /
  /

DATES                                  -- Generated : Petrel
  14 AUG 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3918.00 2955.70 2761.00 1* 1* 300.0000 0.0000 /
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1726.0000 /
  /

DATES                                  -- Generated : Petrel
  15 AUG 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3988.50 3008.90 2693.00 1* 1* 300.0000 0.0000 /
  /

DATES                                  -- Generated : Petrel
  16 AUG 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3997.80 3015.90 2711.00 1* 1* 300.0000 0.0000 /
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1728.0000 /
  /

DATES                                  -- Generated : Petrel
  17 AUG 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3990.30 3010.30 2674.00 1* 1* 300.0000 0.0000 /
  /

DATES                                  -- Generated : Petrel
  18 AUG 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3988.00 3008.50 2712.00 1* 1* 300.0000 0.0000 /
  /

DATES                                  -- Generated : Petrel
  19 AUG 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4015.40 3029.10 2678.00 1* 1* 300.0000 0.0000 /
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1730.0000 /
  /

DATES                                  -- Generated : Petrel
  20 AUG 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4093.30 3087.90 2678.00 1* 1* 300.0000 0.0000 /
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1785.0000 /
  /

DATES                                  -- Generated : Petrel
  21 AUG 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3817.80 2880.10 2380.80 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 514.20 1896.90 334.20 1* 1* 33.0000 1732.0000 /
  /

DATES                                  -- Generated : Petrel
  22 AUG 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3366.90 2540.00 2109.10 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 878.40 3240.50 570.90 1* 1* 25.0000 1732.0000 /
  /

DATES                                  -- Generated : Petrel
  23 AUG 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3870.90 2920.20 2809.70 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 214.20 790.40 139.30 1* 1* 0.0000 1733.0000 /
  /

DATES                                  -- Generated : Petrel
  24 AUG 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3630.30 2738.70 2819.60 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 449.90 1659.70 292.40 1* 1* 0.0000 1734.0000 /
  /

DATES                                  -- Generated : Petrel
  25 AUG 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3944.50 2975.60 3037.30 1* 1* 300.0000 0.0000 /
  B2 OPEN ORAT 85.70 316.10 55.70 1* 1* 0.0000 1735.0000 /
  /

DATES                                  -- Generated : Petrel
  26 AUG 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 4141.10 3124.00 3081.00 1* 1* 300.0000 0.0000 /
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1736.0000 /
  /

DATES                                  -- Generated : Petrel
  27 AUG 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3729.10 2813.20 3007.00 1* 1* 300.0000 0.0000 /
  /

DATES                                  -- Generated : Petrel
  28 AUG 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3823.90 2884.70 2902.00 1* 1* 300.0000 0.0000 /
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1737.0000 /
  /

DATES                                  -- Generated : Petrel
  29 AUG 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3469.20 2617.10 2964.00 1* 1* 300.0000 0.0000 /
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1765.0000 /
  /

DATES                                  -- Generated : Petrel
  30 AUG 2017 /
  /

WCONHIST                               -- Generated : Petrel
  B1 OPEN ORAT 3272.40 2468.70 3707.00 1* 1* 300.0000 0.0000 /
  B2 STOP ORAT 0.00 0.00 0.00 1* 1* 0.0000 1808.0000 /
  /

DATES                                  -- Generated : Petrel
  31 AUG 2017 /
  /

