#include "N2HDM.h"
Compare_N2HDM::Compare_N2HDM()
{
  std::size_t NHiggs = 9;
  CheckTripleTree =
      Matrix3D{NHiggs, Matrix2D{NHiggs, std::vector<double>(NHiggs, 0)}};
  CheckTripleCW =
      Matrix3D{NHiggs, Matrix2D{NHiggs, std::vector<double>(NHiggs, 0)}};
  CheckTripleCT =
      Matrix3D{NHiggs, Matrix2D{NHiggs, std::vector<double>(NHiggs, 0)}};
  EWPTPerSetting[4].Tc = 300;
  EWPTPerSetting[4].vc = 0;
  EWPTPerSetting[4].EWMinimum.push_back(0);
  EWPTPerSetting[4].EWMinimum.push_back(0);
  EWPTPerSetting[4].EWMinimum.push_back(0);
  EWPTPerSetting[4].EWMinimum.push_back(0);
  EWPTPerSetting[4].EWMinimum.push_back(0);
  EWPTPerSetting[1].Tc = 124.42;
  EWPTPerSetting[1].vc = 144.396;
  EWPTPerSetting[1].EWMinimum.push_back(2.43346e-05);
  EWPTPerSetting[1].EWMinimum.push_back(0);
  EWPTPerSetting[1].EWMinimum.push_back(26.8306);
  EWPTPerSetting[1].EWMinimum.push_back(141.881);
  EWPTPerSetting[1].EWMinimum.push_back(298.493);
  EWPTPerSetting[5].Tc = 124.411;
  EWPTPerSetting[5].vc = 145.323;
  EWPTPerSetting[5].EWMinimum.push_back(1.40226e-05);
  EWPTPerSetting[5].EWMinimum.push_back(0);
  EWPTPerSetting[5].EWMinimum.push_back(26.9905);
  EWPTPerSetting[5].EWMinimum.push_back(142.795);
  EWPTPerSetting[5].EWMinimum.push_back(298.46);
  EWPTPerSetting[2].Tc = 120.218;
  EWPTPerSetting[2].vc = 180.081;
  EWPTPerSetting[2].EWMinimum.push_back(-0.0001018);
  EWPTPerSetting[2].EWMinimum.push_back(-2.31819e-05);
  EWPTPerSetting[2].EWMinimum.push_back(-32.5818);
  EWPTPerSetting[2].EWMinimum.push_back(-177.109);
  EWPTPerSetting[2].EWMinimum.push_back(297.015);
  EWPTPerSetting[6].Tc = 120.218;
  EWPTPerSetting[6].vc = 180.081;
  EWPTPerSetting[6].EWMinimum.push_back(-0.0001018);
  EWPTPerSetting[6].EWMinimum.push_back(-2.31819e-05);
  EWPTPerSetting[6].EWMinimum.push_back(-32.5818);
  EWPTPerSetting[6].EWMinimum.push_back(-177.109);
  EWPTPerSetting[6].EWMinimum.push_back(297.015);
  EWPTPerSetting[3].Tc = 120.218;
  EWPTPerSetting[3].vc = 180.081;
  EWPTPerSetting[3].EWMinimum.push_back(-0.0001018);
  EWPTPerSetting[3].EWMinimum.push_back(-2.31819e-05);
  EWPTPerSetting[3].EWMinimum.push_back(-32.5818);
  EWPTPerSetting[3].EWMinimum.push_back(-177.109);
  EWPTPerSetting[3].EWMinimum.push_back(297.015);
  EWPTPerSetting[7].Tc = 120.218;
  EWPTPerSetting[7].vc = 180.081;
  EWPTPerSetting[7].EWMinimum.push_back(-0.0001018);
  EWPTPerSetting[7].EWMinimum.push_back(-2.31819e-05);
  EWPTPerSetting[7].EWMinimum.push_back(-32.5818);
  EWPTPerSetting[7].EWMinimum.push_back(-177.109);
  EWPTPerSetting[7].EWMinimum.push_back(297.015);
  CheckTripleTree.at(0).at(0).at(6) = -63.363;
  CheckTripleCT.at(0).at(0).at(6)   = 73.3299;
  CheckTripleCW.at(0).at(0).at(6)   = -73.3299;
  CheckTripleTree.at(0).at(0).at(7) = 5.2208;
  CheckTripleCT.at(0).at(0).at(7)   = -3.26127;
  CheckTripleCW.at(0).at(0).at(7)   = 3.26127;
  CheckTripleTree.at(0).at(0).at(8) = -210.394;
  CheckTripleCT.at(0).at(0).at(8)   = 50.8122;
  CheckTripleCW.at(0).at(0).at(8)   = -50.8122;
  CheckTripleTree.at(0).at(1).at(4) = 5.41788e-16;
  CheckTripleCT.at(0).at(1).at(4)   = 1.12952e-16;
  CheckTripleCW.at(0).at(1).at(4)   = 2.47188e-16;
  CheckTripleTree.at(0).at(1).at(5) = -3.90528e-15;
  CheckTripleCT.at(0).at(1).at(5)   = -2.29222e-17;
  CheckTripleCW.at(0).at(1).at(5)   = -5.13836e-15;
  CheckTripleTree.at(0).at(2).at(6) = 1.02686;
  CheckTripleCT.at(0).at(2).at(6)   = -0.186289;
  CheckTripleCW.at(0).at(2).at(6)   = 0.186289;
  CheckTripleTree.at(0).at(2).at(7) = -33.9201;
  CheckTripleCT.at(0).at(2).at(7)   = -1.34287;
  CheckTripleCW.at(0).at(2).at(7)   = 1.34287;
  CheckTripleTree.at(0).at(2).at(8) = 73.114;
  CheckTripleCT.at(0).at(2).at(8)   = -15.5881;
  CheckTripleCW.at(0).at(2).at(8)   = 15.5881;
  CheckTripleTree.at(0).at(3).at(4) = 1.70102e-14;
  CheckTripleCT.at(0).at(3).at(4)   = -7.62682e-16;
  CheckTripleCW.at(0).at(3).at(4)   = -5.75384e-15;
  CheckTripleTree.at(0).at(3).at(5) = 979.072;
  CheckTripleCT.at(0).at(3).at(5)   = 93.3687;
  CheckTripleCW.at(0).at(3).at(5)   = -93.3687;
  CheckTripleTree.at(0).at(4).at(1) = 5.41788e-16;
  CheckTripleCT.at(0).at(4).at(1)   = 1.12952e-16;
  CheckTripleCW.at(0).at(4).at(1)   = 2.47188e-16;
  CheckTripleTree.at(0).at(4).at(3) = 1.70102e-14;
  CheckTripleCT.at(0).at(4).at(3)   = -7.62682e-16;
  CheckTripleCW.at(0).at(4).at(3)   = -5.75384e-15;
  CheckTripleTree.at(0).at(5).at(1) = -3.90528e-15;
  CheckTripleCT.at(0).at(5).at(1)   = -2.29222e-17;
  CheckTripleCW.at(0).at(5).at(1)   = -5.13836e-15;
  CheckTripleTree.at(0).at(5).at(3) = 979.072;
  CheckTripleCT.at(0).at(5).at(3)   = 93.3687;
  CheckTripleCW.at(0).at(5).at(3)   = -93.3687;
  CheckTripleTree.at(0).at(6).at(0) = -63.363;
  CheckTripleCT.at(0).at(6).at(0)   = 73.3299;
  CheckTripleCW.at(0).at(6).at(0)   = -73.3299;
  CheckTripleTree.at(0).at(6).at(2) = 1.02686;
  CheckTripleCT.at(0).at(6).at(2)   = -0.186289;
  CheckTripleCW.at(0).at(6).at(2)   = 0.186289;
  CheckTripleTree.at(0).at(7).at(0) = 5.2208;
  CheckTripleCT.at(0).at(7).at(0)   = -3.26127;
  CheckTripleCW.at(0).at(7).at(0)   = 3.26127;
  CheckTripleTree.at(0).at(7).at(2) = -33.9201;
  CheckTripleCT.at(0).at(7).at(2)   = -1.34287;
  CheckTripleCW.at(0).at(7).at(2)   = 1.34287;
  CheckTripleTree.at(0).at(8).at(0) = -210.394;
  CheckTripleCT.at(0).at(8).at(0)   = 50.8122;
  CheckTripleCW.at(0).at(8).at(0)   = -50.8122;
  CheckTripleTree.at(0).at(8).at(2) = 73.114;
  CheckTripleCT.at(0).at(8).at(2)   = -15.5881;
  CheckTripleCW.at(0).at(8).at(2)   = 15.5881;
  CheckTripleTree.at(1).at(0).at(4) = -5.41788e-16;
  CheckTripleCT.at(1).at(0).at(4)   = -1.12952e-16;
  CheckTripleCW.at(1).at(0).at(4)   = -2.71218e-16;
  CheckTripleTree.at(1).at(0).at(5) = 3.90528e-15;
  CheckTripleCT.at(1).at(0).at(5)   = 2.29222e-17;
  CheckTripleCW.at(1).at(0).at(5)   = -3.16796e-15;
  CheckTripleTree.at(1).at(1).at(6) = -63.363;
  CheckTripleCT.at(1).at(1).at(6)   = 73.3299;
  CheckTripleCW.at(1).at(1).at(6)   = -73.3299;
  CheckTripleTree.at(1).at(1).at(7) = 5.2208;
  CheckTripleCT.at(1).at(1).at(7)   = -3.26127;
  CheckTripleCW.at(1).at(1).at(7)   = 3.26127;
  CheckTripleTree.at(1).at(1).at(8) = -210.394;
  CheckTripleCT.at(1).at(1).at(8)   = 50.8122;
  CheckTripleCW.at(1).at(1).at(8)   = -50.8122;
  CheckTripleTree.at(1).at(2).at(4) = -1.70102e-14;
  CheckTripleCT.at(1).at(2).at(4)   = 7.62682e-16;
  CheckTripleCW.at(1).at(2).at(4)   = 5.533e-15;
  CheckTripleTree.at(1).at(2).at(5) = -979.072;
  CheckTripleCT.at(1).at(2).at(5)   = -93.3687;
  CheckTripleCW.at(1).at(2).at(5)   = 93.3687;
  CheckTripleTree.at(1).at(3).at(6) = 1.02686;
  CheckTripleCT.at(1).at(3).at(6)   = -0.186289;
  CheckTripleCW.at(1).at(3).at(6)   = 0.186289;
  CheckTripleTree.at(1).at(3).at(7) = -33.9201;
  CheckTripleCT.at(1).at(3).at(7)   = -1.34287;
  CheckTripleCW.at(1).at(3).at(7)   = 1.34287;
  CheckTripleTree.at(1).at(3).at(8) = 73.114;
  CheckTripleCT.at(1).at(3).at(8)   = -15.5881;
  CheckTripleCW.at(1).at(3).at(8)   = 15.5881;
  CheckTripleTree.at(1).at(4).at(0) = -5.41788e-16;
  CheckTripleCT.at(1).at(4).at(0)   = -1.12952e-16;
  CheckTripleCW.at(1).at(4).at(0)   = -2.71218e-16;
  CheckTripleTree.at(1).at(4).at(2) = -1.70102e-14;
  CheckTripleCT.at(1).at(4).at(2)   = 7.62682e-16;
  CheckTripleCW.at(1).at(4).at(2)   = 5.533e-15;
  CheckTripleTree.at(1).at(5).at(0) = 3.90528e-15;
  CheckTripleCT.at(1).at(5).at(0)   = 2.29222e-17;
  CheckTripleCW.at(1).at(5).at(0)   = -3.16796e-15;
  CheckTripleTree.at(1).at(5).at(2) = -979.072;
  CheckTripleCT.at(1).at(5).at(2)   = -93.3687;
  CheckTripleCW.at(1).at(5).at(2)   = 93.3687;
  CheckTripleTree.at(1).at(6).at(1) = -63.363;
  CheckTripleCT.at(1).at(6).at(1)   = 73.3299;
  CheckTripleCW.at(1).at(6).at(1)   = -73.3299;
  CheckTripleTree.at(1).at(6).at(3) = 1.02686;
  CheckTripleCT.at(1).at(6).at(3)   = -0.186289;
  CheckTripleCW.at(1).at(6).at(3)   = 0.186289;
  CheckTripleTree.at(1).at(7).at(1) = 5.2208;
  CheckTripleCT.at(1).at(7).at(1)   = -3.26127;
  CheckTripleCW.at(1).at(7).at(1)   = 3.26127;
  CheckTripleTree.at(1).at(7).at(3) = -33.9201;
  CheckTripleCT.at(1).at(7).at(3)   = -1.34287;
  CheckTripleCW.at(1).at(7).at(3)   = 1.34287;
  CheckTripleTree.at(1).at(8).at(1) = -210.394;
  CheckTripleCT.at(1).at(8).at(1)   = 50.8122;
  CheckTripleCW.at(1).at(8).at(1)   = -50.8122;
  CheckTripleTree.at(1).at(8).at(3) = 73.114;
  CheckTripleCT.at(1).at(8).at(3)   = -15.5881;
  CheckTripleCW.at(1).at(8).at(3)   = 15.5881;
  CheckTripleTree.at(2).at(0).at(6) = 1.02686;
  CheckTripleCT.at(2).at(0).at(6)   = -0.186289;
  CheckTripleCW.at(2).at(0).at(6)   = 0.186289;
  CheckTripleTree.at(2).at(0).at(7) = -33.9201;
  CheckTripleCT.at(2).at(0).at(7)   = -1.34287;
  CheckTripleCW.at(2).at(0).at(7)   = 1.34287;
  CheckTripleTree.at(2).at(0).at(8) = 73.114;
  CheckTripleCT.at(2).at(0).at(8)   = -15.5881;
  CheckTripleCW.at(2).at(0).at(8)   = 15.5881;
  CheckTripleTree.at(2).at(1).at(4) = -1.7228e-14;
  CheckTripleCT.at(2).at(1).at(4)   = 8.09745e-16;
  CheckTripleCW.at(2).at(1).at(4)   = 5.68631e-15;
  CheckTripleTree.at(2).at(1).at(5) = -979.072;
  CheckTripleCT.at(2).at(1).at(5)   = -93.3687;
  CheckTripleCW.at(2).at(1).at(5)   = 93.3687;
  CheckTripleTree.at(2).at(2).at(6) = 17.1796;
  CheckTripleCT.at(2).at(2).at(6)   = -137.986;
  CheckTripleCW.at(2).at(2).at(6)   = -72.4157;
  CheckTripleTree.at(2).at(2).at(7) = -2.31824;
  CheckTripleCT.at(2).at(2).at(7)   = -538.331;
  CheckTripleCW.at(2).at(2).at(7)   = 3.8593;
  CheckTripleTree.at(2).at(2).at(8) = 209.333;
  CheckTripleCT.at(2).at(2).at(8)   = -38.4073;
  CheckTripleCW.at(2).at(2).at(8)   = 39.5718;
  CheckTripleTree.at(2).at(3).at(4) = -5.41788e-16;
  CheckTripleCT.at(2).at(3).at(4)   = -1.12952e-16;
  CheckTripleCW.at(2).at(3).at(4)   = -2.47188e-16;
  CheckTripleTree.at(2).at(3).at(5) = 3.90528e-15;
  CheckTripleCT.at(2).at(3).at(5)   = 2.29222e-17;
  CheckTripleCW.at(2).at(3).at(5)   = 5.13836e-15;
  CheckTripleTree.at(2).at(4).at(1) = -1.7228e-14;
  CheckTripleCT.at(2).at(4).at(1)   = 8.09745e-16;
  CheckTripleCW.at(2).at(4).at(1)   = 5.68631e-15;
  CheckTripleTree.at(2).at(4).at(3) = -5.41788e-16;
  CheckTripleCT.at(2).at(4).at(3)   = -1.12952e-16;
  CheckTripleCW.at(2).at(4).at(3)   = -2.47188e-16;
  CheckTripleTree.at(2).at(5).at(1) = -979.072;
  CheckTripleCT.at(2).at(5).at(1)   = -93.3687;
  CheckTripleCW.at(2).at(5).at(1)   = 93.3687;
  CheckTripleTree.at(2).at(5).at(3) = 3.90528e-15;
  CheckTripleCT.at(2).at(5).at(3)   = 2.29222e-17;
  CheckTripleCW.at(2).at(5).at(3)   = 5.13836e-15;
  CheckTripleTree.at(2).at(6).at(0) = 1.02686;
  CheckTripleCT.at(2).at(6).at(0)   = -0.186289;
  CheckTripleCW.at(2).at(6).at(0)   = 0.186289;
  CheckTripleTree.at(2).at(6).at(2) = 17.1796;
  CheckTripleCT.at(2).at(6).at(2)   = -137.986;
  CheckTripleCW.at(2).at(6).at(2)   = -72.4157;
  CheckTripleTree.at(2).at(7).at(0) = -33.9201;
  CheckTripleCT.at(2).at(7).at(0)   = -1.34287;
  CheckTripleCW.at(2).at(7).at(0)   = 1.34287;
  CheckTripleTree.at(2).at(7).at(2) = -2.31824;
  CheckTripleCT.at(2).at(7).at(2)   = -538.331;
  CheckTripleCW.at(2).at(7).at(2)   = 3.8593;
  CheckTripleTree.at(2).at(8).at(0) = 73.114;
  CheckTripleCT.at(2).at(8).at(0)   = -15.5881;
  CheckTripleCW.at(2).at(8).at(0)   = 15.5881;
  CheckTripleTree.at(2).at(8).at(2) = 209.333;
  CheckTripleCT.at(2).at(8).at(2)   = -38.4073;
  CheckTripleCW.at(2).at(8).at(2)   = 39.5718;
  CheckTripleTree.at(3).at(0).at(4) = 1.7228e-14;
  CheckTripleCT.at(3).at(0).at(4)   = -8.09745e-16;
  CheckTripleCW.at(3).at(0).at(4)   = -7.55334e-15;
  CheckTripleTree.at(3).at(0).at(5) = 979.072;
  CheckTripleCT.at(3).at(0).at(5)   = 93.3687;
  CheckTripleCW.at(3).at(0).at(5)   = -93.3687;
  CheckTripleTree.at(3).at(1).at(6) = 1.02686;
  CheckTripleCT.at(3).at(1).at(6)   = -0.186289;
  CheckTripleCW.at(3).at(1).at(6)   = 0.186289;
  CheckTripleTree.at(3).at(1).at(7) = -33.9201;
  CheckTripleCT.at(3).at(1).at(7)   = -1.34287;
  CheckTripleCW.at(3).at(1).at(7)   = 1.34287;
  CheckTripleTree.at(3).at(1).at(8) = 73.114;
  CheckTripleCT.at(3).at(1).at(8)   = -15.5881;
  CheckTripleCW.at(3).at(1).at(8)   = 15.5881;
  CheckTripleTree.at(3).at(2).at(4) = 5.41788e-16;
  CheckTripleCT.at(3).at(2).at(4)   = 1.12952e-16;
  CheckTripleCW.at(3).at(2).at(4)   = 2.71218e-16;
  CheckTripleTree.at(3).at(2).at(5) = -3.90528e-15;
  CheckTripleCT.at(3).at(2).at(5)   = -2.29222e-17;
  CheckTripleCW.at(3).at(2).at(5)   = 3.16796e-15;
  CheckTripleTree.at(3).at(3).at(6) = 17.1796;
  CheckTripleCT.at(3).at(3).at(6)   = -137.986;
  CheckTripleCW.at(3).at(3).at(6)   = -72.4157;
  CheckTripleTree.at(3).at(3).at(7) = -2.31824;
  CheckTripleCT.at(3).at(3).at(7)   = -538.331;
  CheckTripleCW.at(3).at(3).at(7)   = 3.8593;
  CheckTripleTree.at(3).at(3).at(8) = 209.333;
  CheckTripleCT.at(3).at(3).at(8)   = -38.4073;
  CheckTripleCW.at(3).at(3).at(8)   = 39.5718;
  CheckTripleTree.at(3).at(4).at(0) = 1.7228e-14;
  CheckTripleCT.at(3).at(4).at(0)   = -8.09745e-16;
  CheckTripleCW.at(3).at(4).at(0)   = -7.55334e-15;
  CheckTripleTree.at(3).at(4).at(2) = 5.41788e-16;
  CheckTripleCT.at(3).at(4).at(2)   = 1.12952e-16;
  CheckTripleCW.at(3).at(4).at(2)   = 2.71218e-16;
  CheckTripleTree.at(3).at(5).at(0) = 979.072;
  CheckTripleCT.at(3).at(5).at(0)   = 93.3687;
  CheckTripleCW.at(3).at(5).at(0)   = -93.3687;
  CheckTripleTree.at(3).at(5).at(2) = -3.90528e-15;
  CheckTripleCT.at(3).at(5).at(2)   = -2.29222e-17;
  CheckTripleCW.at(3).at(5).at(2)   = 3.16796e-15;
  CheckTripleTree.at(3).at(6).at(1) = 1.02686;
  CheckTripleCT.at(3).at(6).at(1)   = -0.186289;
  CheckTripleCW.at(3).at(6).at(1)   = 0.186289;
  CheckTripleTree.at(3).at(6).at(3) = 17.1796;
  CheckTripleCT.at(3).at(6).at(3)   = -137.986;
  CheckTripleCW.at(3).at(6).at(3)   = -72.4157;
  CheckTripleTree.at(3).at(7).at(1) = -33.9201;
  CheckTripleCT.at(3).at(7).at(1)   = -1.34287;
  CheckTripleCW.at(3).at(7).at(1)   = 1.34287;
  CheckTripleTree.at(3).at(7).at(3) = -2.31824;
  CheckTripleCT.at(3).at(7).at(3)   = -538.331;
  CheckTripleCW.at(3).at(7).at(3)   = 3.8593;
  CheckTripleTree.at(3).at(8).at(1) = 73.114;
  CheckTripleCT.at(3).at(8).at(1)   = -15.5881;
  CheckTripleCW.at(3).at(8).at(1)   = 15.5881;
  CheckTripleTree.at(3).at(8).at(3) = 209.333;
  CheckTripleCT.at(3).at(8).at(3)   = -38.4073;
  CheckTripleCW.at(3).at(8).at(3)   = 39.5718;
  CheckTripleTree.at(4).at(0).at(1) = 5.41788e-16;
  CheckTripleCT.at(4).at(0).at(1)   = 1.12952e-16;
  CheckTripleCW.at(4).at(0).at(1)   = 2.47188e-16;
  CheckTripleTree.at(4).at(0).at(3) = 1.70102e-14;
  CheckTripleCT.at(4).at(0).at(3)   = -7.62682e-16;
  CheckTripleCW.at(4).at(0).at(3)   = -5.75384e-15;
  CheckTripleTree.at(4).at(1).at(0) = -5.41788e-16;
  CheckTripleCT.at(4).at(1).at(0)   = -1.12952e-16;
  CheckTripleCW.at(4).at(1).at(0)   = -2.71218e-16;
  CheckTripleTree.at(4).at(1).at(2) = -1.70102e-14;
  CheckTripleCT.at(4).at(1).at(2)   = 7.62682e-16;
  CheckTripleCW.at(4).at(1).at(2)   = 5.533e-15;
  CheckTripleTree.at(4).at(2).at(1) = -2.43334e-14;
  CheckTripleCT.at(4).at(2).at(1)   = 9.76279e-16;
  CheckTripleCW.at(4).at(2).at(1)   = 5.74182e-15;
  CheckTripleTree.at(4).at(2).at(3) = -5.41788e-16;
  CheckTripleCT.at(4).at(2).at(3)   = -1.12952e-16;
  CheckTripleCW.at(4).at(2).at(3)   = -2.47188e-16;
  CheckTripleTree.at(4).at(3).at(0) = 2.43334e-14;
  CheckTripleCT.at(4).at(3).at(0)   = -9.76279e-16;
  CheckTripleCW.at(4).at(3).at(0)   = -7.71988e-15;
  CheckTripleTree.at(4).at(3).at(2) = 5.41788e-16;
  CheckTripleCT.at(4).at(3).at(2)   = 1.12952e-16;
  CheckTripleCW.at(4).at(3).at(2)   = 2.71218e-16;
  CheckTripleTree.at(4).at(4).at(6) = -63.363;
  CheckTripleCT.at(4).at(4).at(6)   = 73.3299;
  CheckTripleCW.at(4).at(4).at(6)   = -73.3299;
  CheckTripleTree.at(4).at(4).at(7) = 5.2208;
  CheckTripleCT.at(4).at(4).at(7)   = -3.26127;
  CheckTripleCW.at(4).at(4).at(7)   = 3.26127;
  CheckTripleTree.at(4).at(4).at(8) = -210.394;
  CheckTripleCT.at(4).at(4).at(8)   = 50.8122;
  CheckTripleCW.at(4).at(4).at(8)   = -50.8122;
  CheckTripleTree.at(4).at(5).at(6) = 44.9668;
  CheckTripleCT.at(4).at(5).at(6)   = 4.00402;
  CheckTripleCW.at(4).at(5).at(6)   = -4.00402;
  CheckTripleTree.at(4).at(5).at(7) = 943.914;
  CheckTripleCT.at(4).at(5).at(7)   = 91.9078;
  CheckTripleCW.at(4).at(5).at(7)   = -91.9078;
  CheckTripleTree.at(4).at(5).at(8) = 50.9425;
  CheckTripleCT.at(4).at(5).at(8)   = -17.7025;
  CheckTripleCW.at(4).at(5).at(8)   = 17.7025;
  CheckTripleTree.at(4).at(6).at(4) = -63.363;
  CheckTripleCT.at(4).at(6).at(4)   = 73.3299;
  CheckTripleCW.at(4).at(6).at(4)   = -73.3299;
  CheckTripleTree.at(4).at(6).at(5) = 44.9668;
  CheckTripleCT.at(4).at(6).at(5)   = 4.00402;
  CheckTripleCW.at(4).at(6).at(5)   = -4.00402;
  CheckTripleTree.at(4).at(7).at(4) = 5.2208;
  CheckTripleCT.at(4).at(7).at(4)   = -3.26127;
  CheckTripleCW.at(4).at(7).at(4)   = 3.26127;
  CheckTripleTree.at(4).at(7).at(5) = 943.914;
  CheckTripleCT.at(4).at(7).at(5)   = 91.9078;
  CheckTripleCW.at(4).at(7).at(5)   = -91.9078;
  CheckTripleTree.at(4).at(8).at(4) = -210.394;
  CheckTripleCT.at(4).at(8).at(4)   = 50.8122;
  CheckTripleCW.at(4).at(8).at(4)   = -50.8122;
  CheckTripleTree.at(4).at(8).at(5) = 50.9425;
  CheckTripleCT.at(4).at(8).at(5)   = -17.7025;
  CheckTripleCW.at(4).at(8).at(5)   = 17.7025;
  CheckTripleTree.at(5).at(0).at(1) = 3.20015e-15;
  CheckTripleCT.at(5).at(0).at(1)   = -1.89456e-16;
  CheckTripleCW.at(5).at(0).at(1)   = -5.47143e-15;
  CheckTripleTree.at(5).at(0).at(3) = 979.072;
  CheckTripleCT.at(5).at(0).at(3)   = 93.3687;
  CheckTripleCW.at(5).at(0).at(3)   = -93.3687;
  CheckTripleTree.at(5).at(1).at(0) = -3.20015e-15;
  CheckTripleCT.at(5).at(1).at(0)   = 1.89456e-16;
  CheckTripleCW.at(5).at(1).at(0)   = -2.89041e-15;
  CheckTripleTree.at(5).at(1).at(2) = -979.072;
  CheckTripleCT.at(5).at(1).at(2)   = -93.3687;
  CheckTripleCW.at(5).at(1).at(2)   = 93.3687;
  CheckTripleTree.at(5).at(2).at(1) = -979.072;
  CheckTripleCT.at(5).at(2).at(1)   = -93.3687;
  CheckTripleCW.at(5).at(2).at(1)   = 93.3687;
  CheckTripleTree.at(5).at(2).at(3) = -3.20015e-15;
  CheckTripleCT.at(5).at(2).at(3)   = 1.89456e-16;
  CheckTripleCW.at(5).at(2).at(3)   = 5.47143e-15;
  CheckTripleTree.at(5).at(3).at(0) = 979.072;
  CheckTripleCT.at(5).at(3).at(0)   = 93.3687;
  CheckTripleCW.at(5).at(3).at(0)   = -93.3687;
  CheckTripleTree.at(5).at(3).at(2) = 3.20015e-15;
  CheckTripleCT.at(5).at(3).at(2)   = -1.89456e-16;
  CheckTripleCW.at(5).at(3).at(2)   = 2.89041e-15;
  CheckTripleTree.at(5).at(4).at(6) = 44.9668;
  CheckTripleCT.at(5).at(4).at(6)   = 4.00402;
  CheckTripleCW.at(5).at(4).at(6)   = -4.00402;
  CheckTripleTree.at(5).at(4).at(7) = 943.914;
  CheckTripleCT.at(5).at(4).at(7)   = 91.9078;
  CheckTripleCW.at(5).at(4).at(7)   = -91.9078;
  CheckTripleTree.at(5).at(4).at(8) = 50.9425;
  CheckTripleCT.at(5).at(4).at(8)   = -17.7025;
  CheckTripleCW.at(5).at(4).at(8)   = 17.7025;
  CheckTripleTree.at(5).at(5).at(6) = -1935.17;
  CheckTripleCT.at(5).at(5).at(6)   = -324.171;
  CheckTripleCW.at(5).at(5).at(6)   = 60.2999;
  CheckTripleTree.at(5).at(5).at(7) = 82.5947;
  CheckTripleCT.at(5).at(5).at(7)   = -530.233;
  CheckTripleCW.at(5).at(5).at(7)   = -8.50806;
  CheckTripleTree.at(5).at(5).at(8) = 85.0571;
  CheckTripleCT.at(5).at(5).at(8)   = -50.2588;
  CheckTripleCW.at(5).at(5).at(8)   = 497.175;
  CheckTripleTree.at(5).at(6).at(4) = 44.9668;
  CheckTripleCT.at(5).at(6).at(4)   = 4.00402;
  CheckTripleCW.at(5).at(6).at(4)   = -4.00402;
  CheckTripleTree.at(5).at(6).at(5) = -1935.17;
  CheckTripleCT.at(5).at(6).at(5)   = -324.171;
  CheckTripleCW.at(5).at(6).at(5)   = 60.2999;
  CheckTripleTree.at(5).at(7).at(4) = 943.914;
  CheckTripleCT.at(5).at(7).at(4)   = 91.9078;
  CheckTripleCW.at(5).at(7).at(4)   = -91.9078;
  CheckTripleTree.at(5).at(7).at(5) = 82.5947;
  CheckTripleCT.at(5).at(7).at(5)   = -530.233;
  CheckTripleCW.at(5).at(7).at(5)   = -8.50806;
  CheckTripleTree.at(5).at(8).at(4) = 50.9425;
  CheckTripleCT.at(5).at(8).at(4)   = -17.7025;
  CheckTripleCW.at(5).at(8).at(4)   = 17.7025;
  CheckTripleTree.at(5).at(8).at(5) = 85.0571;
  CheckTripleCT.at(5).at(8).at(5)   = -50.2588;
  CheckTripleCW.at(5).at(8).at(5)   = 497.175;
  CheckTripleTree.at(6).at(0).at(0) = -63.363;
  CheckTripleCT.at(6).at(0).at(0)   = 73.3299;
  CheckTripleCW.at(6).at(0).at(0)   = -73.3299;
  CheckTripleTree.at(6).at(0).at(2) = 1.02686;
  CheckTripleCT.at(6).at(0).at(2)   = -0.186289;
  CheckTripleCW.at(6).at(0).at(2)   = 0.186289;
  CheckTripleTree.at(6).at(1).at(1) = -63.363;
  CheckTripleCT.at(6).at(1).at(1)   = 73.3299;
  CheckTripleCW.at(6).at(1).at(1)   = -73.3299;
  CheckTripleTree.at(6).at(1).at(3) = 1.02686;
  CheckTripleCT.at(6).at(1).at(3)   = -0.186289;
  CheckTripleCW.at(6).at(1).at(3)   = 0.186289;
  CheckTripleTree.at(6).at(2).at(0) = 1.02686;
  CheckTripleCT.at(6).at(2).at(0)   = -0.186289;
  CheckTripleCW.at(6).at(2).at(0)   = 0.186289;
  CheckTripleTree.at(6).at(2).at(2) = 17.1796;
  CheckTripleCT.at(6).at(2).at(2)   = -137.986;
  CheckTripleCW.at(6).at(2).at(2)   = -72.4157;
  CheckTripleTree.at(6).at(3).at(1) = 1.02686;
  CheckTripleCT.at(6).at(3).at(1)   = -0.186289;
  CheckTripleCW.at(6).at(3).at(1)   = 0.186289;
  CheckTripleTree.at(6).at(3).at(3) = 17.1796;
  CheckTripleCT.at(6).at(3).at(3)   = -137.986;
  CheckTripleCW.at(6).at(3).at(3)   = -72.4157;
  CheckTripleTree.at(6).at(4).at(4) = -63.363;
  CheckTripleCT.at(6).at(4).at(4)   = 73.3299;
  CheckTripleCW.at(6).at(4).at(4)   = -73.3299;
  CheckTripleTree.at(6).at(4).at(5) = 44.9668;
  CheckTripleCT.at(6).at(4).at(5)   = 4.00402;
  CheckTripleCW.at(6).at(4).at(5)   = -4.00402;
  CheckTripleTree.at(6).at(5).at(4) = 44.9668;
  CheckTripleCT.at(6).at(5).at(4)   = 4.00402;
  CheckTripleCW.at(6).at(5).at(4)   = -4.00402;
  CheckTripleTree.at(6).at(5).at(5) = -1935.17;
  CheckTripleCT.at(6).at(5).at(5)   = -324.171;
  CheckTripleCW.at(6).at(5).at(5)   = 60.2999;
  CheckTripleTree.at(6).at(6).at(6) = -188.547;
  CheckTripleCT.at(6).at(6).at(6)   = 216.835;
  CheckTripleCW.at(6).at(6).at(6)   = -290.182;
  CheckTripleTree.at(6).at(6).at(7) = 11.1893;
  CheckTripleCT.at(6).at(6).at(7)   = -23.129;
  CheckTripleCW.at(6).at(6).at(7)   = 3.31125;
  CheckTripleTree.at(6).at(6).at(8) = -221.518;
  CheckTripleCT.at(6).at(6).at(8)   = 76.5066;
  CheckTripleCW.at(6).at(6).at(8)   = -76.498;
  CheckTripleTree.at(6).at(7).at(6) = 11.1893;
  CheckTripleCT.at(6).at(7).at(6)   = -23.129;
  CheckTripleCW.at(6).at(7).at(6)   = 3.31125;
  CheckTripleTree.at(6).at(7).at(7) = -51.1429;
  CheckTripleCT.at(6).at(7).at(7)   = -188.292;
  CheckTripleCW.at(6).at(7).at(7)   = -65.9015;
  CheckTripleTree.at(6).at(7).at(8) = 96.6509;
  CheckTripleCT.at(6).at(7).at(8)   = -23.4745;
  CheckTripleCW.at(6).at(7).at(8)   = 26.6894;
  CheckTripleTree.at(6).at(8).at(6) = -221.518;
  CheckTripleCT.at(6).at(8).at(6)   = 76.5066;
  CheckTripleCW.at(6).at(8).at(6)   = -76.498;
  CheckTripleTree.at(6).at(8).at(7) = 96.6509;
  CheckTripleCT.at(6).at(8).at(7)   = -23.4745;
  CheckTripleCW.at(6).at(8).at(7)   = 26.6894;
  CheckTripleTree.at(6).at(8).at(8) = 319.197;
  CheckTripleCT.at(6).at(8).at(8)   = -316.801;
  CheckTripleCW.at(6).at(8).at(8)   = 405.982;
  CheckTripleTree.at(7).at(0).at(0) = 5.2208;
  CheckTripleCT.at(7).at(0).at(0)   = -3.26127;
  CheckTripleCW.at(7).at(0).at(0)   = 3.26127;
  CheckTripleTree.at(7).at(0).at(2) = -33.9201;
  CheckTripleCT.at(7).at(0).at(2)   = -1.34287;
  CheckTripleCW.at(7).at(0).at(2)   = 1.34287;
  CheckTripleTree.at(7).at(1).at(1) = 5.2208;
  CheckTripleCT.at(7).at(1).at(1)   = -3.26127;
  CheckTripleCW.at(7).at(1).at(1)   = 3.26127;
  CheckTripleTree.at(7).at(1).at(3) = -33.9201;
  CheckTripleCT.at(7).at(1).at(3)   = -1.34287;
  CheckTripleCW.at(7).at(1).at(3)   = 1.34287;
  CheckTripleTree.at(7).at(2).at(0) = -33.9201;
  CheckTripleCT.at(7).at(2).at(0)   = -1.34287;
  CheckTripleCW.at(7).at(2).at(0)   = 1.34287;
  CheckTripleTree.at(7).at(2).at(2) = -2.31824;
  CheckTripleCT.at(7).at(2).at(2)   = -538.331;
  CheckTripleCW.at(7).at(2).at(2)   = 3.8593;
  CheckTripleTree.at(7).at(3).at(1) = -33.9201;
  CheckTripleCT.at(7).at(3).at(1)   = -1.34287;
  CheckTripleCW.at(7).at(3).at(1)   = 1.34287;
  CheckTripleTree.at(7).at(3).at(3) = -2.31824;
  CheckTripleCT.at(7).at(3).at(3)   = -538.331;
  CheckTripleCW.at(7).at(3).at(3)   = 3.8593;
  CheckTripleTree.at(7).at(4).at(4) = 5.2208;
  CheckTripleCT.at(7).at(4).at(4)   = -3.26127;
  CheckTripleCW.at(7).at(4).at(4)   = 3.26127;
  CheckTripleTree.at(7).at(4).at(5) = 943.914;
  CheckTripleCT.at(7).at(4).at(5)   = 91.9078;
  CheckTripleCW.at(7).at(4).at(5)   = -91.9078;
  CheckTripleTree.at(7).at(5).at(4) = 943.914;
  CheckTripleCT.at(7).at(5).at(4)   = 91.9078;
  CheckTripleCW.at(7).at(5).at(4)   = -91.9078;
  CheckTripleTree.at(7).at(5).at(5) = 82.5947;
  CheckTripleCT.at(7).at(5).at(5)   = -530.233;
  CheckTripleCW.at(7).at(5).at(5)   = -8.50806;
  CheckTripleTree.at(7).at(6).at(6) = 11.1893;
  CheckTripleCT.at(7).at(6).at(6)   = -23.129;
  CheckTripleCW.at(7).at(6).at(6)   = 3.31125;
  CheckTripleTree.at(7).at(6).at(7) = -51.1429;
  CheckTripleCT.at(7).at(6).at(7)   = -188.292;
  CheckTripleCW.at(7).at(6).at(7)   = -65.9015;
  CheckTripleTree.at(7).at(6).at(8) = 96.6509;
  CheckTripleCT.at(7).at(6).at(8)   = -23.4745;
  CheckTripleCW.at(7).at(6).at(8)   = 26.6894;
  CheckTripleTree.at(7).at(7).at(6) = -51.1429;
  CheckTripleCT.at(7).at(7).at(6)   = -188.292;
  CheckTripleCW.at(7).at(7).at(6)   = -65.9015;
  CheckTripleTree.at(7).at(7).at(7) = 1.90163;
  CheckTripleCT.at(7).at(7).at(7)   = -1610.51;
  CheckTripleCW.at(7).at(7).at(7)   = 10.5816;
  CheckTripleTree.at(7).at(7).at(8) = 195.857;
  CheckTripleCT.at(7).at(7).at(8)   = -9.66018;
  CheckTripleCW.at(7).at(7).at(8)   = 35.3349;
  CheckTripleTree.at(7).at(8).at(6) = 96.6509;
  CheckTripleCT.at(7).at(8).at(6)   = -23.4745;
  CheckTripleCW.at(7).at(8).at(6)   = 26.6894;
  CheckTripleTree.at(7).at(8).at(7) = 195.857;
  CheckTripleCT.at(7).at(8).at(7)   = -9.66018;
  CheckTripleCW.at(7).at(8).at(7)   = 35.3349;
  CheckTripleTree.at(7).at(8).at(8) = -142.349;
  CheckTripleCT.at(7).at(8).at(8)   = 131.967;
  CheckTripleCW.at(7).at(8).at(8)   = -172.595;
  CheckTripleTree.at(8).at(0).at(0) = -210.394;
  CheckTripleCT.at(8).at(0).at(0)   = 50.8122;
  CheckTripleCW.at(8).at(0).at(0)   = -50.8122;
  CheckTripleTree.at(8).at(0).at(2) = 73.114;
  CheckTripleCT.at(8).at(0).at(2)   = -15.5881;
  CheckTripleCW.at(8).at(0).at(2)   = 15.5881;
  CheckTripleTree.at(8).at(1).at(1) = -210.394;
  CheckTripleCT.at(8).at(1).at(1)   = 50.8122;
  CheckTripleCW.at(8).at(1).at(1)   = -50.8122;
  CheckTripleTree.at(8).at(1).at(3) = 73.114;
  CheckTripleCT.at(8).at(1).at(3)   = -15.5881;
  CheckTripleCW.at(8).at(1).at(3)   = 15.5881;
  CheckTripleTree.at(8).at(2).at(0) = 73.114;
  CheckTripleCT.at(8).at(2).at(0)   = -15.5881;
  CheckTripleCW.at(8).at(2).at(0)   = 15.5881;
  CheckTripleTree.at(8).at(2).at(2) = 209.333;
  CheckTripleCT.at(8).at(2).at(2)   = -38.4073;
  CheckTripleCW.at(8).at(2).at(2)   = 39.5718;
  CheckTripleTree.at(8).at(3).at(1) = 73.114;
  CheckTripleCT.at(8).at(3).at(1)   = -15.5881;
  CheckTripleCW.at(8).at(3).at(1)   = 15.5881;
  CheckTripleTree.at(8).at(3).at(3) = 209.333;
  CheckTripleCT.at(8).at(3).at(3)   = -38.4073;
  CheckTripleCW.at(8).at(3).at(3)   = 39.5718;
  CheckTripleTree.at(8).at(4).at(4) = -210.394;
  CheckTripleCT.at(8).at(4).at(4)   = 50.8122;
  CheckTripleCW.at(8).at(4).at(4)   = -50.8122;
  CheckTripleTree.at(8).at(4).at(5) = 50.9425;
  CheckTripleCT.at(8).at(4).at(5)   = -17.7025;
  CheckTripleCW.at(8).at(4).at(5)   = 17.7025;
  CheckTripleTree.at(8).at(5).at(4) = 50.9425;
  CheckTripleCT.at(8).at(5).at(4)   = -17.7025;
  CheckTripleCW.at(8).at(5).at(4)   = 17.7025;
  CheckTripleTree.at(8).at(5).at(5) = 85.0571;
  CheckTripleCT.at(8).at(5).at(5)   = -50.2588;
  CheckTripleCW.at(8).at(5).at(5)   = 497.175;
  CheckTripleTree.at(8).at(6).at(6) = -221.518;
  CheckTripleCT.at(8).at(6).at(6)   = 76.5066;
  CheckTripleCW.at(8).at(6).at(6)   = -76.498;
  CheckTripleTree.at(8).at(6).at(7) = 96.6509;
  CheckTripleCT.at(8).at(6).at(7)   = -23.4745;
  CheckTripleCW.at(8).at(6).at(7)   = 26.6894;
  CheckTripleTree.at(8).at(6).at(8) = 319.197;
  CheckTripleCT.at(8).at(6).at(8)   = -316.801;
  CheckTripleCW.at(8).at(6).at(8)   = 405.982;
  CheckTripleTree.at(8).at(7).at(6) = 96.6509;
  CheckTripleCT.at(8).at(7).at(6)   = -23.4745;
  CheckTripleCW.at(8).at(7).at(6)   = 26.6894;
  CheckTripleTree.at(8).at(7).at(7) = 195.857;
  CheckTripleCT.at(8).at(7).at(7)   = -9.66018;
  CheckTripleCW.at(8).at(7).at(7)   = 35.3349;
  CheckTripleTree.at(8).at(7).at(8) = -142.349;
  CheckTripleCT.at(8).at(7).at(8)   = 131.967;
  CheckTripleCW.at(8).at(7).at(8)   = -172.595;
  CheckTripleTree.at(8).at(8).at(6) = 319.197;
  CheckTripleCT.at(8).at(8).at(6)   = -316.801;
  CheckTripleCW.at(8).at(8).at(6)   = 405.982;
  CheckTripleTree.at(8).at(8).at(7) = -142.349;
  CheckTripleCT.at(8).at(8).at(7)   = 131.967;
  CheckTripleCW.at(8).at(8).at(7)   = -172.595;
  CheckTripleTree.at(8).at(8).at(8) = -8302.35;
  CheckTripleCT.at(8).at(8).at(8)   = 5790.5;
  CheckTripleCW.at(8).at(8).at(8)   = -8021.66;
}