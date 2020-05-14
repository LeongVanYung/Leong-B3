-- Generated [
-- Format      : ECLIPSE keywords (ASCII)
-- Exported by : Petrel 2016.3 (64-bit) Schlumberger
-- User name   : BCHUAH
-- Date        : Wednesday, November 15 2017 16:22:18
-- Project     : BaseCase367.pet
-- Generated ]

EQUIL                                  -- Generated : Petrel
        4478.4       1949.3       4517.5            0       4478.4            0 0 0 0 /
        5442.6       2358.1       5490.6            0       5442.6            0 0 0 0 /

-- AQUALIST                               -- Generated : Petrel
--  (AQ20)
--  1 /
--  '7000MD)'
-- 2 /
-- /

AQUCT
  1 5442 1* 1000 0.3 6.06E-6 10000 100 50 2 1* 0.0 /

  2 4478 1* 5000 0.32 3E-5 10000 100 135 1 1* 0.0 /

  /

AQUANCON
--        Aquifer name,      Simulation name,             LGR name,                      Time,  Bin index,  Bin value,  Aquifer identification number
--Aq - CT - I60  (AQ20),               (AQ20),                     ,        Initial properties,          0,       4000,                              1
--Aq - CT - H30 (Perm: 7000mD),              7000MD),                     ,        Initial properties,          0,       4000,                              2
--        End of table
-- 1 1 1 80 90 1 41 I- 1* 1* NO /
--  1 1 1 66 73 1 21 I- 1* 1* NO /
  1 1 1 25 50 22 41 I- 1* 1* NO /               -- >> shorter attachment of aquifer
-- 1 1 1 23 24 1 21 I- 1* 1* NO /
--  1 1 1 91 96 21 21 I- 1* 1* NO /
--  1 1 1 76 79 21 41 I- 1* 1* NO /
--  1 1 1 74 75 21 21 I- 1* 1* NO /
--  1 1 1 64 65 21 41 I- 1* 1* NO /
--  1 1 1 66 69 22 41 I- 1* 1* NO /
--  2 1 1 101 102 1 20 I- 1* 1* NO /
--  2 1 1 80 90 1 20 I- 1* 1* NO /
--  2 1 1 66 73 1 20 I- 1* 1* NO /
  2 1 1 1 38 1 20 I- 1* 1* NO /           -- >> longer attachment of aquifer (according to seismic amplitude)
  2 10 10 3 3 1 20 J- 1* 1* NO /
  2 9 9 2 2 1 20 J- 1* 1* NO /
  2 1 8 1 1 1 20 J- 1* 1* NO /
  /

RPTRST                                 -- Generated : Petrel
  BASIC=3 FLOWS FLORES FREQ=30 ALLPROPS RSSAT PCOW BG BO BW /

RPTSOL                                 -- Generated : Petrel
  RESTART=2 FIP=3 EQUIL /

